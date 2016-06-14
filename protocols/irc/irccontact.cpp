/*
    irccontact.cpp - Kopete irc Protocol

    Copyright (c) 2003      by Will Stephenson		 <will@stevello.free-online.co.uk>
    Kopete    (c) 2002-2003 by the Kopete developers <kopete-devel@kde.org>

    *************************************************************************
    *                                                                       *
    * This library is free software; you can redistribute it and/or         *
    * modify it under the terms of the GNU General Public                   *
    * License as published by the Free Software Foundation; either          *
    * version 2 of the License, or (at your option) any later version.      *
    *                                                                       *
    *************************************************************************
*/

#include "irccontact.h"

#include <QList>

#include <kaction.h>
#include <kdebug.h>
#include <klocale.h>

#include "kopeteaccount.h"
#include "kopetechatsessionmanager.h"
#include "kopetemetacontact.h"

#include "ircaccount.h"
#include "ircfakeserver.h"
#include "ircprotocol.h"

IRCContact::IRCContact( Kopete::Account* _account, const QString &uniqueName,
		Kopete::MetaContact *parent )
: Kopete::Contact( _account, uniqueName, parent )
{
	kDebug( 14210 ) << " uniqueName: " << uniqueName;
	m_type = IRCContact::Null;
	// FIXME: ? setDisplayName( displayName );
	m_msgManager = 0L;

	setOnlineStatus( IRCProtocol::protocol()->ircOffline );
}

IRCContact::~IRCContact()
{
}

void IRCContact:: setType( IRCContact::Type type )
{
	m_type = type;
}

bool IRCContact::isReachable()
{
    return true;
}

void IRCContact::serialize( QMap< QString, QString > &serializedData, QMap< QString, QString > & /* addressBookData */ )
{
    QString value;
	switch ( m_type )
	{
	case Null:
		value = QLatin1String("null");
	case Echo:
		value = QLatin1String("echo");
	case Group:
		value = QLatin1String("group");
	}
	serializedData[ "contactType" ] = value;
}

Kopete::ChatSession* IRCContact::manager( CanCreateFlags canCreateFlags )
{
	kDebug( 14210 ) ;
	if ( m_msgManager )
	{
		return m_msgManager;
	}
	else if ( canCreateFlags == CanCreate )
	{
		QList<Kopete::Contact*> contacts;
		contacts.append(this);
		Kopete::ChatSession::Form form = ( m_type == Group ?
				  Kopete::ChatSession::Chatroom : Kopete::ChatSession::Small );
		m_msgManager = Kopete::ChatSessionManager::self()->create(account()->myself(), contacts, protocol(), form );
		connect(m_msgManager, SIGNAL(messageSent(Kopete::Message&,Kopete::ChatSession*)),
				this, SLOT(sendMessage(Kopete::Message&)) );
		connect(m_msgManager, SIGNAL(destroyed()), this, SLOT(slotChatSessionDestroyed()));
		return m_msgManager;
	}
	else
	{
		return 0;
	}
}


QList<KAction *> *IRCContact::customContextMenuActions() //OBSOLETE
{
	//FIXME!!!  this function is obsolete, we should use XMLGUI instead
	/*m_actionCollection = new KActionCollection( this, "userColl" );
	m_actionPrefs = new KAction(i18n( "&Contact Settings" ), 0, this,
			SLOT(showContactSettings()), m_actionCollection, "contactSettings" );

	return m_actionCollection;*/
	return 0L;
}

void IRCContact::showContactSettings()
{
	//ircContactSettings* p = new ircContactSettings( this );
	//p->show();
}

void IRCContact::sendMessage( Kopete::Message &message )
{
	kDebug( 14210 ) ;
	// convert to the what the server wants
	// For this 'protocol', there's nothing to do
	// send it
	static_cast<IRCAccount *>( account() )->server()->sendMessage(
			message.to().first()->contactId(),
			message.plainBody() );
	// give it back to the manager to display
	manager()->appendMessage( message );
	// tell the manager it was sent successfully
	manager()->messageSucceeded();
}

void IRCContact::receivedMessage( const QString &message )
{
	Kopete::ContactPtrList contactList;
	contactList.append( account()->myself() );
	// Create a Kopete::Message
	Kopete::Message newMessage( this, contactList );
	newMessage.setPlainBody( message );
	newMessage.setDirection( Kopete::Message::Inbound );

	// Add it to the manager
	manager(CanCreate)->appendMessage (newMessage);
}

void IRCContact::slotChatSessionDestroyed()
{
	//FIXME: the chat window was closed?  Take appropriate steps.
	m_msgManager = 0L;
}

#include "irccontact.moc"

// vim: set noet ts=4 sts=4 sw=4:


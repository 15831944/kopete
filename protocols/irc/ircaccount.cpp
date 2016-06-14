/*
    ircaccount.cpp - Kopete irc Protocol

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


#include "ircaccount.h"

#include <kaction.h>
#include <kdebug.h>
#include <klocale.h>
#include <kactionmenu.h>
#include <kmenu.h>
#include <kicon.h>

#include "kopetemetacontact.h"
#include "kopetecontactlist.h"

#include "irccontact.h"
#include "ircfakeserver.h"
#include "ircprotocol.h"
#include "ircwebcamdialog.h"


IRCAccount::IRCAccount( IRCProtocol *parent, const QString& accountID )
: Kopete::Account ( parent, accountID )
{
	// Init the myself contact
	setMyself( new IRCContact( this, accountId(), Kopete::ContactList::self()->myself() ) );
	myself()->setOnlineStatus( IRCProtocol::protocol()->ircOffline );
	m_server = new IRCFakeServer();;
}

IRCAccount::~IRCAccount()
{
	delete m_server;
}

void IRCAccount::fillActionMenu( KActionMenu *actionMenu )
{
	Kopete::Account::fillActionMenu( actionMenu );

	actionMenu->addSeparator();

	KAction *action;

	action = new KAction (KIcon("irc_showvideo"), i18n ("Show my own video..."), actionMenu );
        //, "actionShowVideo");
	QObject::connect( action, SIGNAL(triggered(bool)), this, SLOT(slotShowVideo()) );
	actionMenu->addAction(action);
	action->setEnabled( isConnected() );
}

bool IRCAccount::createContact(const QString& contactId, Kopete::MetaContact* parentContact)
{
	IRCContact* newContact = new IRCContact( this, contactId, parentContact );
	return newContact != 0L;
}

void IRCAccount::setAway( bool away, const QString & /* reason */ )
{
	if ( away )
		slotGoAway();
	else
		slotGoOnline();
}

void IRCAccount::setOnlineStatus(const Kopete::OnlineStatus& status, const Kopete::StatusMessage &reason, const OnlineStatusOptions& /*options*/)
{
	if ( status.status() == Kopete::OnlineStatus::Online &&
			myself()->onlineStatus().status() == Kopete::OnlineStatus::Offline )
		slotGoOnline();
	else if (status.status() == Kopete::OnlineStatus::Online &&
			(myself()->onlineStatus().status() == Kopete::OnlineStatus::Away || 
				myself()->onlineStatus().status() == Kopete::OnlineStatus::Busy) )
		setAway( false, reason.message() );
	else if ( status.status() == Kopete::OnlineStatus::Offline )
		slotGoOffline();
	else if ( status.status() == Kopete::OnlineStatus::Away )
		slotGoAway( /* reason */ );
	else if ( status.status() == Kopete::OnlineStatus::Busy )
		slotGoBusy( /* reason */ );
}

void IRCAccount::setStatusMessage(const Kopete::StatusMessage& statusMessage)
{
	Q_UNUSED(statusMessage);
	/* Not used in irc */
}

void IRCAccount::connect( const Kopete::OnlineStatus& /* initialStatus */ )
{
	kDebug ( 14210 ) ;
	myself()->setOnlineStatus( IRCProtocol::protocol()->ircOnline );
	QObject::connect ( m_server, SIGNAL (messageReceived(QString)),
			this, SLOT (receivedMessage(QString)) );
}

void IRCAccount::disconnect()
{
	kDebug ( 14210 ) ;
	myself()->setOnlineStatus( IRCProtocol::protocol()->ircOffline );
	QObject::disconnect ( m_server, 0, 0, 0 );
}

IRCFakeServer * IRCAccount::server()
{
	return m_server;
}

void IRCAccount::slotGoOnline ()
{
	kDebug ( 14210 ) ;

	if (!isConnected ())
		connect ();
	else
		myself()->setOnlineStatus( IRCProtocol::protocol()->ircOnline );
	updateContactStatus();
}

void IRCAccount::slotGoAway ()
{
	kDebug ( 14210 ) ;

	if (!isConnected ())
		connect();

	myself()->setOnlineStatus( IRCProtocol::protocol()->ircAway );
	updateContactStatus();
}

void IRCAccount::slotGoBusy ()
{
	kDebug ( 14210 ) ;

	if (!isConnected ())
		connect();

	myself()->setOnlineStatus( IRCProtocol::protocol()->ircBusy );
	updateContactStatus();
}


void IRCAccount::slotGoOffline ()
{
	kDebug ( 14210 ) ;

	if (isConnected ())
		disconnect ();
	updateContactStatus();
}

 void IRCAccount::slotShowVideo ()
{
	kDebug ( 14210 ) ;

	if (isConnected ())
	{
		IRCWebcamDialog *ircWebcamDialog = new IRCWebcamDialog(0, 0);
		Q_UNUSED(ircWebcamDialog);
	}
	updateContactStatus();
} 
void IRCAccount::receivedMessage( const QString &message )
{
	// Look up the contact the message is from
	QString from;
	IRCContact* messageSender;

	from = message.section( ':', 0, 0 );
	Kopete::Contact* contact = contacts().value(from);
	messageSender = dynamic_cast<IRCContact *>( contact );

	kDebug( 14210 ) << " got a message from " << from << ", " << messageSender << ", is: " << message;
	// Pass it on to the contact to process and display via a KMM
	if ( messageSender )
		messageSender->receivedMessage( message );
	else
		kWarning(14210) << "unable to look up contact for delivery";
}

void IRCAccount::updateContactStatus()
{
	QHashIterator<QString, Kopete::Contact*>itr( contacts() );
	for ( ; itr.hasNext(); ) {
		itr.next();
		itr.value()->setOnlineStatus( myself()->onlineStatus() );
	}
}


#include "ircaccount.moc"

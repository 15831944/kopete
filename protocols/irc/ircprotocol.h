/*
    ircprotocol.h - Kopete irc Protocol

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

#ifndef IRCPROTOCOL_H
#define IRCPROTOCOL_H

#include <kopeteprotocol.h>
#include <QVariant>



/**
 * Encapsulates the generic actions associated with this protocol
 * @author Will Stephenson
 */
class IRCProtocol : public Kopete::Protocol
{
	Q_OBJECT
public:
	IRCProtocol(QObject *parent, const QVariantList &args);
    ~IRCProtocol();
	/**
	 * Convert the serialised data back into a ircContact and add this
	 * to its Kopete::MetaContact
	 */
	virtual Kopete::Contact *deserializeContact(
			Kopete::MetaContact *metaContact,
			const QMap< QString, QString > & serializedData,
			const QMap< QString, QString > & addressBookData
		);
	/**
	 * Generate the widget needed to add ircContacts
	 */
	virtual AddContactPage * createAddContactWidget( QWidget *parent, Kopete::Account *account );
	/**
	 * Generate the widget needed to add/edit accounts for this protocol
	 */
	virtual KopeteEditAccountWidget * createEditAccountWidget( Kopete::Account *account, QWidget *parent );
	/**
	 * Generate a ircAccount
	 */
	virtual Kopete::Account * createNewAccount( const QString &accountId );
	/**
	 * Access the instance of this protocol
	 */
	static IRCProtocol *protocol();
	/**
	 * Represents contacts that are Online
	 */
	const Kopete::OnlineStatus ircOnline;
	/**
	 * Represents contacts that are Away
	 */
	const Kopete::OnlineStatus ircAway;
	/**
	 * Represents contacts that are Busy
	 */
	const Kopete::OnlineStatus ircBusy;
	/**
	 * Represents contacts that are Offline
	 */
	const Kopete::OnlineStatus ircOffline;
protected:
	static IRCProtocol *s_protocol;
};

#endif

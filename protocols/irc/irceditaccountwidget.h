/*
    ircEditAccountWidget.h - Kopete irc Protocol

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

#ifndef IRCEditAccountWidget_H
#define IRCEditAccountWidget_H

#include <qwidget.h>
#include <QVBoxLayout>
#include <editaccountwidget.h>

class QVBoxLayout;
namespace Kopete { class Account; }
namespace Ui { class ircAccountPreferences; }

/**
 * A widget for editing this protocol's accounts
 * @author Will Stephenson
*/
class IRCEditAccountWidget : public QWidget, public KopeteEditAccountWidget
{
Q_OBJECT
public:
    IRCEditAccountWidget( QWidget* parent, Kopete::Account* account);

    ~IRCEditAccountWidget();

	/**
	 * Make an account out of the entered data
	 */
	virtual Kopete::Account* apply();
	/**
	 * Is the data correct?
	 */
	virtual bool validateData();
protected:
	Kopete::Account *m_account;
	Ui::ircAccountPreferences *m_preferencesWidget;
};

#endif

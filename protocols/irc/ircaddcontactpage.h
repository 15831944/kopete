/*
    ircaddcontactpage.h - Kopete irc Protocol

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

#ifndef IRCADDCONTACTPAGE_H
#define IRCADDCONTACTPAGE_H

#include <addcontactpage.h>
#include "ui_ircaddui.h"

namespace Kopete { class Account; }
namespace Kopete { class MetaContact; }
namespace Ui { class ircAddUI; }

/**
 * A page in the Add Contact Wizard
 * @author Will Stephenson
*/
class IRCAddContactPage : public AddContactPage
{
	Q_OBJECT
public:
    IRCAddContactPage( QWidget* parent = 0 );
    ~IRCAddContactPage();
	
    /**
	 * Make a contact out of the entered data
	 */
	virtual bool apply(Kopete::Account* a, Kopete::MetaContact* m);
	/**
	 * Is the data correct?
	 */
    virtual bool validateData();

protected:
	Ui::ircAddUI m_ircAddUI;
};

#endif

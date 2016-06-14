#include <kdialog.h>
#include <klocale.h>

#include "/home/harshcrop/kopete/build/protocols/sms/smsuserprefs.h"

#include <qvariant.h>
/*
 *  Constructs a SMSUserPrefsUI as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 */
SMSUserPrefsUI::SMSUserPrefsUI(QWidget* parent, const char* name, Qt::WindowFlags fl)
    : QWidget(parent, name, fl)
{
    setupUi(this);

}

/*
 *  Destroys the object and frees any allocated resources
 */
SMSUserPrefsUI::~SMSUserPrefsUI()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void SMSUserPrefsUI::languageChange()
{
    retranslateUi(this);
}



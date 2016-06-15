#include <kdialog.h>
#include <klocale.h>

#include "/home/harshcrop/kopete/build/protocols/sms/smsclientprefs.h"

#include <qvariant.h>
/*
 *  Constructs a SMSClientPrefsUI as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 */
SMSClientPrefsUI::SMSClientPrefsUI(QWidget* parent, const char* name, Qt::WindowFlags fl)
    : QWidget(parent, name, fl)
{
    setupUi(this);

}

/*
 *  Destroys the object and frees any allocated resources
 */
SMSClientPrefsUI::~SMSClientPrefsUI()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void SMSClientPrefsUI::languageChange()
{
    retranslateUi(this);
}



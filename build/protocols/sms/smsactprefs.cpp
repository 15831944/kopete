#include <kdialog.h>
#include <klocale.h>

#include "/home/harshcrop/kopete/build/protocols/sms/smsactprefs.h"

#include <qvariant.h>
#include <knuminput.h>
/*
 *  Constructs a smsActPrefsUI as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 */
smsActPrefsUI::smsActPrefsUI(QWidget* parent, const char* name, Qt::WindowFlags fl)
    : QWidget(parent, name, fl)
{
    setupUi(this);

}

/*
 *  Destroys the object and frees any allocated resources
 */
smsActPrefsUI::~smsActPrefsUI()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void smsActPrefsUI::languageChange()
{
    retranslateUi(this);
}



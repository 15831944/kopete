#include <kdialog.h>
#include <klocale.h>

#include "/home/harshcrop/kopete/build/protocols/sms/gsmlibprefs.h"

#include <qvariant.h>
/*
 *  Constructs a GSMLibPrefsUI as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 */
GSMLibPrefsUI::GSMLibPrefsUI(QWidget* parent, const char* name, Qt::WindowFlags fl)
    : QWidget(parent, name, fl)
{
    setupUi(this);

}

/*
 *  Destroys the object and frees any allocated resources
 */
GSMLibPrefsUI::~GSMLibPrefsUI()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void GSMLibPrefsUI::languageChange()
{
    retranslateUi(this);
}



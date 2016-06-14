#include <kdialog.h>
#include <klocale.h>

#include "/home/harshcrop/kopete/build/protocols/sms/smsadd.h"

#include <qvariant.h>
/*
 *  Constructs a smsAddUI as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 */
smsAddUI::smsAddUI(QWidget* parent, const char* name, Qt::WindowFlags fl)
    : QWidget(parent, name, fl)
{
    setupUi(this);

}

/*
 *  Destroys the object and frees any allocated resources
 */
smsAddUI::~smsAddUI()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void smsAddUI::languageChange()
{
    retranslateUi(this);
}



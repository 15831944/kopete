// This file is generated by kconfig_compiler from kopetestatussettings.kcfg.
// All changes you do to this file will be lost.
#ifndef KOPETE_STATUSSETTINGS_H
#define KOPETE_STATUSSETTINGS_H

#include <kopete_export.h>
#include <klocale.h>

#include <kconfigskeleton.h>
#include <kdebug.h>

namespace Kopete {

class KOPETE_EXPORT StatusSettings : public KConfigSkeleton
{
  public:
    class EnumProtocolStatusMenuType
    {
      public:
      enum type { StatusesNotFiltered, StatusesWithSameCategory, UseParentStatusCategory, COUNT };
    };

    static StatusSettings *self();
    ~StatusSettings();

    /**
      Set Protocol's status menu type.
    */
    static
    void setProtocolStatusMenuType( int v )
    {
      if (!self()->isImmutable( QString::fromLatin1( "protocolStatusMenuType" ) ))
        self()->mProtocolStatusMenuType = v;
    }

    /**
      Get Protocol's status menu type.
    */
    static
    int protocolStatusMenuType()
    {
      return self()->mProtocolStatusMenuType;
    }

    /**
      Get Item object corresponding to protocolStatusMenuType()
    */
    ItemEnum *protocolStatusMenuTypeItem()
    {
      return mProtocolStatusMenuTypeItem;
    }

  protected:
    StatusSettings();
    friend class StatusSettingsHelper;


    // Status
    int mProtocolStatusMenuType;

  private:
    ItemEnum *mProtocolStatusMenuTypeItem;
};

}

#endif


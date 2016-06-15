# Install script for directory: /home/harshcrop/kopete/libkopete

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "RelWithDebInfo")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  foreach(file
      "$ENV{DESTDIR}/usr/lib/libkopete.so.4.14.16"
      "$ENV{DESTDIR}/usr/lib/libkopete.so.4"
      "$ENV{DESTDIR}/usr/lib/libkopete.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/libkopete.so.4.14.16;/usr/lib/libkopete.so.4;/usr/lib/libkopete.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib" TYPE SHARED_LIBRARY FILES
    "/home/harshcrop/kopete/build/lib/libkopete.so.4.14.16"
    "/home/harshcrop/kopete/build/lib/libkopete.so.4"
    "/home/harshcrop/kopete/build/lib/libkopete.so"
    )
  foreach(file
      "$ENV{DESTDIR}/usr/lib/libkopete.so.4.14.16"
      "$ENV{DESTDIR}/usr/lib/libkopete.so.4"
      "$ENV{DESTDIR}/usr/lib/libkopete.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/home/harshcrop/kopete/build/lib:"
           NEW_RPATH "")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Devel")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/include/kopete/ui/ui_kopeteawaydialogbase.h;/usr/include/kopete/ui/ui_kopetepasswordwidgetbase.h;/usr/include/kopete/ui/accountselector.h;/usr/include/kopete/ui/addcontactpage.h;/usr/include/kopete/ui/addressbookselectordialog.h;/usr/include/kopete/ui/addressbookselectorwidget.h;/usr/include/kopete/ui/avatardialog.h;/usr/include/kopete/ui/avatarselectorwidget.h;/usr/include/kopete/ui/contactaddednotifydialog.h;/usr/include/kopete/ui/editaccountwidget.h;/usr/include/kopete/ui/kopetecontactaction.h;/usr/include/kopete/ui/kopeteinfodialog.h;/usr/include/kopete/ui/kopetelistview.h;/usr/include/kopete/ui/kopetelistviewitem.h;/usr/include/kopete/ui/kopetelistviewsearchline.h;/usr/include/kopete/ui/kopetepasswordwidget.h;/usr/include/kopete/ui/kopetestdaction.h;/usr/include/kopete/ui/kopeteview.h;/usr/include/kopete/ui/kopeteviewplugin.h")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/include/kopete/ui" TYPE FILE FILES
    "/home/harshcrop/kopete/build/libkopete/ui_kopeteawaydialogbase.h"
    "/home/harshcrop/kopete/build/libkopete/ui_kopetepasswordwidgetbase.h"
    "/home/harshcrop/kopete/libkopete/ui/accountselector.h"
    "/home/harshcrop/kopete/libkopete/ui/addcontactpage.h"
    "/home/harshcrop/kopete/libkopete/ui/addressbookselectordialog.h"
    "/home/harshcrop/kopete/libkopete/ui/addressbookselectorwidget.h"
    "/home/harshcrop/kopete/libkopete/ui/avatardialog.h"
    "/home/harshcrop/kopete/libkopete/ui/avatarselectorwidget.h"
    "/home/harshcrop/kopete/libkopete/ui/contactaddednotifydialog.h"
    "/home/harshcrop/kopete/libkopete/ui/editaccountwidget.h"
    "/home/harshcrop/kopete/libkopete/ui/kopetecontactaction.h"
    "/home/harshcrop/kopete/libkopete/ui/kopeteinfodialog.h"
    "/home/harshcrop/kopete/libkopete/ui/kopetelistview.h"
    "/home/harshcrop/kopete/libkopete/ui/kopetelistviewitem.h"
    "/home/harshcrop/kopete/libkopete/ui/kopetelistviewsearchline.h"
    "/home/harshcrop/kopete/libkopete/ui/kopetepasswordwidget.h"
    "/home/harshcrop/kopete/libkopete/ui/kopetestdaction.h"
    "/home/harshcrop/kopete/libkopete/ui/kopeteview.h"
    "/home/harshcrop/kopete/libkopete/ui/kopeteviewplugin.h"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/share/kde4/config.kcfg/kopeteappearancesettings.kcfg;/usr/share/kde4/config.kcfg/kopetebehaviorsettings.kcfg;/usr/share/kde4/config.kcfg/kopetestatussettings.kcfg")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/share/kde4/config.kcfg" TYPE FILE FILES
    "/home/harshcrop/kopete/libkopete/kopeteappearancesettings.kcfg"
    "/home/harshcrop/kopete/libkopete/kopetebehaviorsettings.kcfg"
    "/home/harshcrop/kopete/libkopete/kopetestatussettings.kcfg"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/share/kde4/apps/kopete/kopetecommandui.rc")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/share/kde4/apps/kopete" TYPE FILE FILES "/home/harshcrop/kopete/libkopete/kopetecommandui.rc")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/share/kde4/servicetypes/kopeteplugin.desktop;/usr/share/kde4/servicetypes/kopeteprotocol.desktop;/usr/share/kde4/servicetypes/kopeteui.desktop")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/share/kde4/servicetypes" TYPE FILE FILES
    "/home/harshcrop/kopete/libkopete/kopeteplugin.desktop"
    "/home/harshcrop/kopete/libkopete/kopeteprotocol.desktop"
    "/home/harshcrop/kopete/libkopete/kopeteui.desktop"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Devel")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/include/kopete/kopeteappearancesettings.h;/usr/include/kopete/kopetebehaviorsettings.h;/usr/include/kopete/kopetestatussettings.h;/usr/include/kopete/kabcpersistence.h;/usr/include/kopete/kopeteaccount.h;/usr/include/kopete/kopeteaccountmanager.h;/usr/include/kopete/kopeteaddedinfoevent.h;/usr/include/kopete/kopeteavatarmanager.h;/usr/include/kopete/kopeteblacklister.h;/usr/include/kopete/kopetechatsession.h;/usr/include/kopete/kopetechatsessionmanager.h;/usr/include/kopete/kopetecommand.h;/usr/include/kopete/kopetecommandhandler.h;/usr/include/kopete/kopetecontact.h;/usr/include/kopete/kopetecontactlistelement.h;/usr/include/kopete/kopetecontactlist.h;/usr/include/kopete/kopeteproperty.h;/usr/include/kopete/kopete_export.h;/usr/include/kopete/kopeteglobal.h;/usr/include/kopete/kopetegroup.h;/usr/include/kopete/kopeteidentity.h;/usr/include/kopete/kopeteidentitymanager.h;/usr/include/kopete/kopeteinfoevent.h;/usr/include/kopete/kopetemessageevent.h;/usr/include/kopete/kopetemessage.h;/usr/include/kopete/kopetemessagehandlerchain.h;/usr/include/kopete/kopetemessagehandler.h;/usr/include/kopete/kopetemetacontact.h;/usr/include/kopete/kopetemimetypehandler.h;/usr/include/kopete/kopeteonlinestatus.h;/usr/include/kopete/kopeteonlinestatusmanager.h;/usr/include/kopete/kopetepasswordedaccount.h;/usr/include/kopete/kopetepassword.h;/usr/include/kopete/kopetepicture.h;/usr/include/kopete/kopeteplugin.h;/usr/include/kopete/kopetepluginmanager.h;/usr/include/kopete/kopeteprotocol.h;/usr/include/kopete/kopetepropertycontainer.h;/usr/include/kopete/kopetesimplemessagehandler.h;/usr/include/kopete/kopetestatusmessage.h;/usr/include/kopete/kopetetransfermanager.h;/usr/include/kopete/kopeteuiglobal.h;/usr/include/kopete/kopeteutils.h;/usr/include/kopete/kopeteversion.h;/usr/include/kopete/kopetestatusmanager.h;/usr/include/kopete/kopetetask.h;/usr/include/kopete/kopetecontacttaskbase.h;/usr/include/kopete/kopetedeletecontacttask.h;/usr/include/kopete/kopeteemoticons.h")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/include/kopete" TYPE FILE FILES
    "/home/harshcrop/kopete/build/libkopete/kopeteappearancesettings.h"
    "/home/harshcrop/kopete/build/libkopete/kopetebehaviorsettings.h"
    "/home/harshcrop/kopete/build/libkopete/kopetestatussettings.h"
    "/home/harshcrop/kopete/libkopete/kabcpersistence.h"
    "/home/harshcrop/kopete/libkopete/kopeteaccount.h"
    "/home/harshcrop/kopete/libkopete/kopeteaccountmanager.h"
    "/home/harshcrop/kopete/libkopete/kopeteaddedinfoevent.h"
    "/home/harshcrop/kopete/libkopete/kopeteavatarmanager.h"
    "/home/harshcrop/kopete/libkopete/kopeteblacklister.h"
    "/home/harshcrop/kopete/libkopete/kopetechatsession.h"
    "/home/harshcrop/kopete/libkopete/kopetechatsessionmanager.h"
    "/home/harshcrop/kopete/libkopete/kopetecommand.h"
    "/home/harshcrop/kopete/libkopete/kopetecommandhandler.h"
    "/home/harshcrop/kopete/libkopete/kopetecontact.h"
    "/home/harshcrop/kopete/libkopete/kopetecontactlistelement.h"
    "/home/harshcrop/kopete/libkopete/kopetecontactlist.h"
    "/home/harshcrop/kopete/libkopete/kopeteproperty.h"
    "/home/harshcrop/kopete/libkopete/kopete_export.h"
    "/home/harshcrop/kopete/libkopete/kopeteglobal.h"
    "/home/harshcrop/kopete/libkopete/kopetegroup.h"
    "/home/harshcrop/kopete/libkopete/kopeteidentity.h"
    "/home/harshcrop/kopete/libkopete/kopeteidentitymanager.h"
    "/home/harshcrop/kopete/libkopete/kopeteinfoevent.h"
    "/home/harshcrop/kopete/libkopete/kopetemessageevent.h"
    "/home/harshcrop/kopete/libkopete/kopetemessage.h"
    "/home/harshcrop/kopete/libkopete/kopetemessagehandlerchain.h"
    "/home/harshcrop/kopete/libkopete/kopetemessagehandler.h"
    "/home/harshcrop/kopete/libkopete/kopetemetacontact.h"
    "/home/harshcrop/kopete/libkopete/kopetemimetypehandler.h"
    "/home/harshcrop/kopete/libkopete/kopeteonlinestatus.h"
    "/home/harshcrop/kopete/libkopete/kopeteonlinestatusmanager.h"
    "/home/harshcrop/kopete/libkopete/kopetepasswordedaccount.h"
    "/home/harshcrop/kopete/libkopete/kopetepassword.h"
    "/home/harshcrop/kopete/libkopete/kopetepicture.h"
    "/home/harshcrop/kopete/libkopete/kopeteplugin.h"
    "/home/harshcrop/kopete/libkopete/kopetepluginmanager.h"
    "/home/harshcrop/kopete/libkopete/kopeteprotocol.h"
    "/home/harshcrop/kopete/libkopete/kopetepropertycontainer.h"
    "/home/harshcrop/kopete/libkopete/kopetesimplemessagehandler.h"
    "/home/harshcrop/kopete/libkopete/kopetestatusmessage.h"
    "/home/harshcrop/kopete/libkopete/kopetetransfermanager.h"
    "/home/harshcrop/kopete/libkopete/kopeteuiglobal.h"
    "/home/harshcrop/kopete/libkopete/kopeteutils.h"
    "/home/harshcrop/kopete/libkopete/kopeteversion.h"
    "/home/harshcrop/kopete/libkopete/kopetestatusmanager.h"
    "/home/harshcrop/kopete/libkopete/tasks/kopetetask.h"
    "/home/harshcrop/kopete/libkopete/tasks/kopetecontacttaskbase.h"
    "/home/harshcrop/kopete/libkopete/tasks/kopetedeletecontacttask.h"
    "/home/harshcrop/kopete/libkopete/private/kopeteemoticons.h"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/share/dbus-1/interfaces/org.kde.kopete.Client.xml")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/share/dbus-1/interfaces" TYPE FILE FILES "/home/harshcrop/kopete/libkopete/org.kde.kopete.Client.xml")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/harshcrop/kopete/build/libkopete/private/cmake_install.cmake")
  include("/home/harshcrop/kopete/build/libkopete/avdevice/cmake_install.cmake")
  include("/home/harshcrop/kopete/build/libkopete/tests/cmake_install.cmake")

endif()


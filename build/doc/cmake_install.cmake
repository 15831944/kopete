# Install script for directory: /home/harshcrop/kopete/doc

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
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/share/doc/kde/HTML/en/kopete/index.cache.bz2;/usr/share/doc/kde/HTML/en/kopete/pipes.docbook;/usr/share/doc/kde/HTML/en/kopete/chatstyle.docbook;/usr/share/doc/kde/HTML/en/kopete/icq.docbook;/usr/share/doc/kde/HTML/en/kopete/menus.docbook;/usr/share/doc/kde/HTML/en/kopete/emoticonspec.docbook;/usr/share/doc/kde/HTML/en/kopete/jabber.docbook;/usr/share/doc/kde/HTML/en/kopete/index.docbook;/usr/share/doc/kde/HTML/en/kopete/Kopetetutorial_snap016_otrfirstuse.png;/usr/share/doc/kde/HTML/en/kopete/Kopetetutoial_snap003_selectserver.png;/usr/share/doc/kde/HTML/en/kopete/Kopetetutorial_snap001_emptykopete.png;/usr/share/doc/kde/HTML/en/kopete/Kopetetutorial_snap010_exlamationmarkfriend.png;/usr/share/doc/kde/HTML/en/kopete/Kopetetutorial_snap012_fullauthorized.png;/usr/share/doc/kde/HTML/en/kopete/Kopete_icq_search_contact.png;/usr/share/doc/kde/HTML/en/kopete/Kopete_icq_added.png;/usr/share/doc/kde/HTML/en/kopete/Kopetetutorial_snap019_otrauth.png;/usr/share/doc/kde/HTML/en/kopete/Kopetetutorial_snap017_seqretquestion.png;/usr/share/doc/kde/HTML/en/kopete/Kopete_icq_account_preferences.png;/usr/share/doc/kde/HTML/en/kopete/Kopetetutorial_snap014_setidentity.png;/usr/share/doc/kde/HTML/en/kopete/Kopetetutorial_jabbernetwork.png;/usr/share/doc/kde/HTML/en/kopete/Kopeteicon.png;/usr/share/doc/kde/HTML/en/kopete/Kopete_icq_add_contact.png;/usr/share/doc/kde/HTML/en/kopete/Kopete_icq_account_setup.png;/usr/share/doc/kde/HTML/en/kopete/Kopete_icq_create_new_account.png;/usr/share/doc/kde/HTML/en/kopete/Kopetetutorial_snap008_goonline.png;/usr/share/doc/kde/HTML/en/kopete/Kopete_icq_information.png;/usr/share/doc/kde/HTML/en/kopete/Kopete_icq_activate_new_account1.png;/usr/share/doc/kde/HTML/en/kopete/Kopetetutorial_snap005_enterjid.png;/usr/share/doc/kde/HTML/en/kopete/Kopetetutorial_snap018_otrsuccess.png;/usr/share/doc/kde/HTML/en/kopete/Kopetetutorial_snap013_firstchat.png;/usr/share/doc/kde/HTML/en/kopete/Kopetetutorial_snap015_otrgenerate.png;/usr/share/doc/kde/HTML/en/kopete/Kopetetutorial_snap002_configacc.png;/usr/share/doc/kde/HTML/en/kopete/Kopete_icq_chat_window.png;/usr/share/doc/kde/HTML/en/kopete/Kopete_icq_new_account.png;/usr/share/doc/kde/HTML/en/kopete/Kopetetutorial_snap004_createacc.png;/usr/share/doc/kde/HTML/en/kopete/otr-auth-1.png;/usr/share/doc/kde/HTML/en/kopete/Kopetetutorial_snap009_addfriend.png;/usr/share/doc/kde/HTML/en/kopete/Kopete_snap021_groupchat.png;/usr/share/doc/kde/HTML/en/kopete/Kopetetutorial_snap006_connection.png;/usr/share/doc/kde/HTML/en/kopete/Kopete_icq_uin.png;/usr/share/doc/kde/HTML/en/kopete/Kopetetutorial_snap007_conf-ready.png;/usr/share/doc/kde/HTML/en/kopete/Kopetetutorial_snap011_addedbyfriend.png;/usr/share/doc/kde/HTML/en/kopete/Kopete_icq_first_start.png;/usr/share/doc/kde/HTML/en/kopete/Kopete_icq_logged_in.png;/usr/share/doc/kde/HTML/en/kopete/Kopete_icq_go_to_profile.png;/usr/share/doc/kde/HTML/en/kopete/Kopete_icq_log_in.png")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/share/doc/kde/HTML/en/kopete" TYPE FILE FILES
    "/home/harshcrop/kopete/build/doc/index.cache.bz2"
    "/home/harshcrop/kopete/doc/pipes.docbook"
    "/home/harshcrop/kopete/doc/chatstyle.docbook"
    "/home/harshcrop/kopete/doc/icq.docbook"
    "/home/harshcrop/kopete/doc/menus.docbook"
    "/home/harshcrop/kopete/doc/emoticonspec.docbook"
    "/home/harshcrop/kopete/doc/jabber.docbook"
    "/home/harshcrop/kopete/doc/index.docbook"
    "/home/harshcrop/kopete/doc/Kopetetutorial_snap016_otrfirstuse.png"
    "/home/harshcrop/kopete/doc/Kopetetutoial_snap003_selectserver.png"
    "/home/harshcrop/kopete/doc/Kopetetutorial_snap001_emptykopete.png"
    "/home/harshcrop/kopete/doc/Kopetetutorial_snap010_exlamationmarkfriend.png"
    "/home/harshcrop/kopete/doc/Kopetetutorial_snap012_fullauthorized.png"
    "/home/harshcrop/kopete/doc/Kopete_icq_search_contact.png"
    "/home/harshcrop/kopete/doc/Kopete_icq_added.png"
    "/home/harshcrop/kopete/doc/Kopetetutorial_snap019_otrauth.png"
    "/home/harshcrop/kopete/doc/Kopetetutorial_snap017_seqretquestion.png"
    "/home/harshcrop/kopete/doc/Kopete_icq_account_preferences.png"
    "/home/harshcrop/kopete/doc/Kopetetutorial_snap014_setidentity.png"
    "/home/harshcrop/kopete/doc/Kopetetutorial_jabbernetwork.png"
    "/home/harshcrop/kopete/doc/Kopeteicon.png"
    "/home/harshcrop/kopete/doc/Kopete_icq_add_contact.png"
    "/home/harshcrop/kopete/doc/Kopete_icq_account_setup.png"
    "/home/harshcrop/kopete/doc/Kopete_icq_create_new_account.png"
    "/home/harshcrop/kopete/doc/Kopetetutorial_snap008_goonline.png"
    "/home/harshcrop/kopete/doc/Kopete_icq_information.png"
    "/home/harshcrop/kopete/doc/Kopete_icq_activate_new_account1.png"
    "/home/harshcrop/kopete/doc/Kopetetutorial_snap005_enterjid.png"
    "/home/harshcrop/kopete/doc/Kopetetutorial_snap018_otrsuccess.png"
    "/home/harshcrop/kopete/doc/Kopetetutorial_snap013_firstchat.png"
    "/home/harshcrop/kopete/doc/Kopetetutorial_snap015_otrgenerate.png"
    "/home/harshcrop/kopete/doc/Kopetetutorial_snap002_configacc.png"
    "/home/harshcrop/kopete/doc/Kopete_icq_chat_window.png"
    "/home/harshcrop/kopete/doc/Kopete_icq_new_account.png"
    "/home/harshcrop/kopete/doc/Kopetetutorial_snap004_createacc.png"
    "/home/harshcrop/kopete/doc/otr-auth-1.png"
    "/home/harshcrop/kopete/doc/Kopetetutorial_snap009_addfriend.png"
    "/home/harshcrop/kopete/doc/Kopete_snap021_groupchat.png"
    "/home/harshcrop/kopete/doc/Kopetetutorial_snap006_connection.png"
    "/home/harshcrop/kopete/doc/Kopete_icq_uin.png"
    "/home/harshcrop/kopete/doc/Kopetetutorial_snap007_conf-ready.png"
    "/home/harshcrop/kopete/doc/Kopetetutorial_snap011_addedbyfriend.png"
    "/home/harshcrop/kopete/doc/Kopete_icq_first_start.png"
    "/home/harshcrop/kopete/doc/Kopete_icq_logged_in.png"
    "/home/harshcrop/kopete/doc/Kopete_icq_go_to_profile.png"
    "/home/harshcrop/kopete/doc/Kopete_icq_log_in.png"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  execute_process(COMMAND /usr/bin/cmake -E create_symlink "/usr/share/doc/kde/HTML/en/common"  "$ENV{DESTDIR}/usr/share/doc/kde/HTML/en/kopete/common" )
endif()


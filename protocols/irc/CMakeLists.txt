add_subdirectory( icons ) 

include_directories( 
${KOPETE_INCLUDES} 
${CMAKE_CURRENT_SOURCE_DIR}/ui/ 
)


########### next target ###############

set(kopete_irc_PART_SRCS 
   ircprotocol.cpp 
   irccontact.cpp 
   ircaccount.cpp 
   ircaddcontactpage.cpp 
   irceditaccountwidget.cpp 
   ircfakeserver.cpp 
   ircincomingmessage.cpp 
   ui/ircwebcamdialog.cpp 
)

kde4_add_ui_files(kopete_irc_PART_SRCS
ircaddui.ui
)

kde4_add_ui_files(kopete_irc_PART_SRCS
ircaccountpreferences.ui
)

kde4_add_plugin(kopete_irc ${kopete_irc_PART_SRCS})


target_link_libraries(kopete_irc ${KDE4_KIO_LIBS} kopete)
if(NOT DISABLE_VIDEOSUPPORT)
  target_link_libraries(kopete_irc kopete_videodevice)
endif(NOT DISABLE_VIDEOSUPPORT)

install(TARGETS kopete_irc  DESTINATION ${PLUGIN_INSTALL_DIR})


########### install files ###############

install( FILES kopete_irc.desktop  DESTINATION ${SERVICES_INSTALL_DIR})

/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -m -a skypeadaptor -c SkypeAdaptor -i libskype/skypedbus/skypeconnection.h -l SkypeConnection /home/harshcrop/kopete/protocols/skype/libskype/skypedbus/com.Skype.API.Client.xml
 *
 * qdbusxml2cpp is Copyright (C) 2015 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef SKYPEADAPTOR_H_1465931109
#define SKYPEADAPTOR_H_1465931109

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "libskype/skypedbus/skypeconnection.h"
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;

/*
 * Adaptor class for interface com.Skype.API.Client
 */
class SkypeAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "com.Skype.API.Client")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"com.Skype.API.Client\">\n"
"    <method name=\"Notify\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"message\"/>\n"
"    </method>\n"
"  </interface>\n"
        "")
public:
    SkypeAdaptor(SkypeConnection *parent);
    virtual ~SkypeAdaptor();

    inline SkypeConnection *parent() const
    { return static_cast<SkypeConnection *>(QObject::parent()); }

public: // PROPERTIES
public Q_SLOTS: // METHODS
    void Notify(const QString &message);
Q_SIGNALS: // SIGNALS
};

#endif

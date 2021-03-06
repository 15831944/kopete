/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -m -a kopeteadaptor -i kopetedbusinterface.h -l KopeteDBusInterface /home/harshcrop/kopete/kopete/org.kde.Kopete.xml
 *
 * qdbusxml2cpp is Copyright (C) 2015 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "kopeteadaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class KopeteAdaptor
 */

KopeteAdaptor::KopeteAdaptor(KopeteDBusInterface *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

KopeteAdaptor::~KopeteAdaptor()
{
    // destructor
}

QStringList KopeteAdaptor::accounts()
{
    // handle method call org.kde.Kopete.accounts
    return parent()->accounts();
}

bool KopeteAdaptor::addContact(const QString &protocolName, const QString &accountId, const QString &contactId, const QString &displayName)
{
    // handle method call org.kde.Kopete.addContact
    return parent()->addContact(protocolName, accountId, contactId, displayName);
}

bool KopeteAdaptor::addContact(const QString &protocolName, const QString &accountId, const QString &contactId, const QString &displayName, const QString &groupName)
{
    // handle method call org.kde.Kopete.addContact
    return parent()->addContact(protocolName, accountId, contactId, displayName, groupName);
}

void KopeteAdaptor::connect(const QString &protocolName, const QString &accountId)
{
    // handle method call org.kde.Kopete.connect
    parent()->connect(protocolName, accountId);
}

void KopeteAdaptor::connectAll()
{
    // handle method call org.kde.Kopete.connectAll
    parent()->connectAll();
}

QVariantMap KopeteAdaptor::contactProperties(const QString &contactId)
{
    // handle method call org.kde.Kopete.contactProperties
    return parent()->contactProperties(contactId);
}

QStringList KopeteAdaptor::contacts()
{
    // handle method call org.kde.Kopete.contacts
    return parent()->contacts();
}

QStringList KopeteAdaptor::contactsByFilter(const QString &filter)
{
    // handle method call org.kde.Kopete.contactsByFilter
    return parent()->contactsByFilter(filter);
}

void KopeteAdaptor::disconnect(const QString &protocolName, const QString &accountId)
{
    // handle method call org.kde.Kopete.disconnect
    parent()->disconnect(protocolName, accountId);
}

void KopeteAdaptor::disconnectAll()
{
    // handle method call org.kde.Kopete.disconnectAll
    parent()->disconnectAll();
}

QString KopeteAdaptor::getDisplayName(const QString &contactId)
{
    // handle method call org.kde.Kopete.getDisplayName
    return parent()->getDisplayName(contactId);
}

QStringList KopeteAdaptor::identities()
{
    // handle method call org.kde.Kopete.identities
    return parent()->identities();
}

bool KopeteAdaptor::isConnected(const QString &protocolName, const QString &accountId)
{
    // handle method call org.kde.Kopete.isConnected
    return parent()->isConnected(protocolName, accountId);
}

bool KopeteAdaptor::isContactOnline(const QString &contactId)
{
    // handle method call org.kde.Kopete.isContactOnline
    return parent()->isContactOnline(contactId);
}

QString KopeteAdaptor::labelForIdentity(const QString &identity)
{
    // handle method call org.kde.Kopete.labelForIdentity
    return parent()->labelForIdentity(identity);
}

void KopeteAdaptor::openChat(const QString &contactID)
{
    // handle method call org.kde.Kopete.openChat
    parent()->openChat(contactID);
}

QStringList KopeteAdaptor::protocols()
{
    // handle method call org.kde.Kopete.protocols
    return parent()->protocols();
}

void KopeteAdaptor::resume()
{
    // handle method call org.kde.Kopete.resume
    parent()->resume();
}

void KopeteAdaptor::sendFile(const QString &contactId, const QString &fileUrl)
{
    // handle method call org.kde.Kopete.sendFile
    parent()->sendFile(contactId, fileUrl);
}

void KopeteAdaptor::sendMessage(const QString &contactId, const QString &message)
{
    // handle method call org.kde.Kopete.sendMessage
    parent()->sendMessage(contactId, message);
}

void KopeteAdaptor::setIdentityAvatar(const QString &avatarUrl)
{
    // handle method call org.kde.Kopete.setIdentityAvatar
    parent()->setIdentityAvatar(avatarUrl);
}

void KopeteAdaptor::setIdentityAvatar(const QString &avatarUrl, const QString &identityId)
{
    // handle method call org.kde.Kopete.setIdentityAvatar
    parent()->setIdentityAvatar(avatarUrl, identityId);
}

void KopeteAdaptor::setIdentityNickName(const QString &nickName)
{
    // handle method call org.kde.Kopete.setIdentityNickName
    parent()->setIdentityNickName(nickName);
}

void KopeteAdaptor::setIdentityNickName(const QString &nickName, const QString &identityId)
{
    // handle method call org.kde.Kopete.setIdentityNickName
    parent()->setIdentityNickName(nickName, identityId);
}

void KopeteAdaptor::setIdentityOnlineStatus(const QString &status, const QString &message)
{
    // handle method call org.kde.Kopete.setIdentityOnlineStatus
    parent()->setIdentityOnlineStatus(status, message);
}

void KopeteAdaptor::setIdentityOnlineStatus(const QString &status, const QString &message, const QString &identityId)
{
    // handle method call org.kde.Kopete.setIdentityOnlineStatus
    parent()->setIdentityOnlineStatus(status, message, identityId);
}

void KopeteAdaptor::setOnlineStatus(const QString &status)
{
    // handle method call org.kde.Kopete.setOnlineStatus
    parent()->setOnlineStatus(status);
}

void KopeteAdaptor::setOnlineStatus(const QString &status, const QString &message)
{
    // handle method call org.kde.Kopete.setOnlineStatus
    parent()->setOnlineStatus(status, message);
}

void KopeteAdaptor::setStatusMessage(const QString &message)
{
    // handle method call org.kde.Kopete.setStatusMessage
    parent()->setStatusMessage(message);
}

void KopeteAdaptor::suspend()
{
    // handle method call org.kde.Kopete.suspend
    parent()->suspend();
}


#include "kopeteadaptor.moc"

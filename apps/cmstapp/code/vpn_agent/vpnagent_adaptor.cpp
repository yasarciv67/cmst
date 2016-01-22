/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp org.monkey_business_enterprises.vpnagent.xml -a vpnagent_adaptor
 *
 * qdbusxml2cpp is Copyright (C) 2015 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "vpnagent_adaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class VPNAgentAdaptor
 */

VPNAgentAdaptor::VPNAgentAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

VPNAgentAdaptor::~VPNAgentAdaptor()
{
    // destructor
}

void VPNAgentAdaptor::Cancel()
{
    // handle method call net.connman.vpn.Agent.Cancel
    QMetaObject::invokeMethod(parent(), "Cancel");
}

void VPNAgentAdaptor::Release()
{
    // handle method call net.connman.vpn.Agent.Release
    QMetaObject::invokeMethod(parent(), "Release");
}

void VPNAgentAdaptor::ReportError(const QDBusObjectPath &in0, const QString &in1)
{
    // handle method call net.connman.vpn.Agent.ReportError
    QMetaObject::invokeMethod(parent(), "ReportError", Q_ARG(QDBusObjectPath, in0), Q_ARG(QString, in1));
}

QVariantMap VPNAgentAdaptor::RequestInput(const QDBusObjectPath &in0, const QVariantMap &in1)
{
    // handle method call net.connman.vpn.Agent.RequestInput
    QVariantMap out0;
    QMetaObject::invokeMethod(parent(), "RequestInput", Q_RETURN_ARG(QVariantMap, out0), Q_ARG(QDBusObjectPath, in0), Q_ARG(QVariantMap, in1));
    return out0;
}

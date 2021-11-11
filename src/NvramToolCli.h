/* SPDX-License-Identifier: GPL-2.0-only */
#pragma once

#include <QMap>
#include <QString>
#include <QList>

#include "Configuration.h"

///
/// Namespace for convinient functions to work with nvramtool CLI utility
///
namespace NvramToolCli {

Configuration::Parameters readParameters(QString* error = nullptr);
QStringList readOptions(const QString& parameter, QString* error = nullptr);
bool writeParameters(const Configuration::Parameters& parameters, QString* error = nullptr);
QString version();

}

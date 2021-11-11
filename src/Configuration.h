/* SPDX-License-Identifier: GPL-2.0-only */
#pragma once

#include <QObject>
#include <QMap>
#include <QString>
#include <QFile>

namespace Configuration {

using Parameters = QMap<QString,QString>;

Parameters fromFile(const QString& curr_path);
bool toFile(const QString& curr_path, const Parameters& params);

}

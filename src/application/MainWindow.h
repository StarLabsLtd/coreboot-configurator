/* SPDX-License-Identifier: GPL-2.0-only */

#pragma once

#include <Configuration.h>
#include <QCheckBox>
#include <QComboBox>
#include <QMainWindow>
#include <QString>
#include <QTableWidget>
#include <yaml-cpp/yaml.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

signals:
    void updateValue(const QString& key);

private slots:
    void on_actionSave_triggered();

    void on_actionLoad_triggered();

    void on_saveButton_clicked();

private:
    void pullSettings();
    void pushSettings();

    void generateUi();
    void askForReboot();

    void readSettings(const QString& fileName);
    void writeSettings(const QString& fileName);

    Configuration::Parameters m_parameters;
    YAML::Node m_categories;

    Ui::MainWindow *ui;

    QComboBox *createComboBox(const QString &key);
    QCheckBox *createCheckBox(const QString &key);

    QTableWidget *createRawTable();

};

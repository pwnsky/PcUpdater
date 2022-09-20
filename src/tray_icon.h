#ifndef TRAYICON_H
#define TRAYICON_H

#include <QObject>
#include <QSystemTrayIcon>
#include <QMenu>
#include <QDebug>
#include "base.h"
class TrayIcon : public QObject
{
    Q_OBJECT
public:
    explicit TrayIcon(QObject *parent = nullptr);
    void init();
    void dealWithTrayIconActivated(QSystemTrayIcon::ActivationReason reason);
private:
    QSystemTrayIcon system_tray_icon_;
    QMenu menu_;
    QAction action_1_;
    QAction action_2_;

signals:
    void localCmd(LocalCmd cmd);
private slots:
    void clickAction_1();
    void clickAction_2();
};

#endif // TRAYICON_H

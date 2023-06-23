#include "HelixCreator.h"
#include <QWebSocket>
#include <QUrl>
#include <QTextStream>
#include <QFile>
#include <QDebug>
#include <QString>
#include "PlanMasterController.h"



HelixCreator::HelixCreator(PlanMasterController* planMasterController, QObject* parent)
    : QObject               (parent),
    _name                 ("Helix")

{
    m_socket = new QWebSocket();
    m_socket->open(QUrl("ws://192.168.0.156:8766/cmd"));
    connect(m_socket, &QWebSocket::connected, this, &HelixCreator::onConnected);
}

void HelixCreator::initial()
{

    QString command = "python3 GCS11.py HELIX";
    m_socket->sendTextMessage(command);

    // Close the WebSocket after 10 seconds
    QTimer::singleShot(10000, this, &HelixCreator::closeWebSocket);

}

void HelixCreator::onConnected()
{
    qDebug() << "WebSocket connected";
}

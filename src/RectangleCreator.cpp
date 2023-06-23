#include "RectangleCreator.h"
#include <QWebSocket>
#include <QUrl>
#include <QTextStream>
#include <QFile>
#include <QDebug>
#include <QString>
#include "PlanMasterController.h"


RectangleCreator::RectangleCreator(PlanMasterController* planMasterController, QObject* parent)
    : QObject               (parent),
    _name                 ("Rectangle")

{
    m_socket = new QWebSocket();
    m_socket->open(QUrl("ws://192.168.0.156:8766/cmd"));
    connect(m_socket, &QWebSocket::connected, this, &RectangleCreator::onConnected);
}

void RectangleCreator::initial()
{

    QString command = "python3 GCS11.py RECTANGLE";
    m_socket->sendTextMessage(command);

    // Close the WebSocket after 10 seconds
    QTimer::singleShot(10000, this, &RectangleCreator::closeWebSocket);

}

void RectangleCreator::onConnected()
{
    qDebug() << "WebSocket connected";
}

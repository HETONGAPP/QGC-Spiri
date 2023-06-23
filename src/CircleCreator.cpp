#include "CircleCreator.h"
#include <QWebSocket>
#include <QUrl>
#include <QTextStream>
#include <QFile>
#include <QDebug>
#include <QString>
#include "PlanMasterController.h"


CircleCreator::CircleCreator(PlanMasterController* planMasterController, QObject* parent)
    : QObject               (parent),
    _name                 ("Circle")

{
    m_socket = new QWebSocket();
    m_socket->open(QUrl("ws://192.168.0.156:8766/cmd"));
    connect(m_socket, &QWebSocket::connected, this, &CircleCreator::onConnected);
}

void CircleCreator::initial()
{

    QString command = "python3 GCS11.py CIRCLE";
    m_socket->sendTextMessage(command);

    // Close the WebSocket after 10 seconds
   QTimer::singleShot(10000, this, &CircleCreator::closeWebSocket);

}

void CircleCreator::onConnected()
{
    qDebug() << "WebSocket connected";
}



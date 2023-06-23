#include "LemniscatelCreator.h"
#include <QWebSocket>
#include <QUrl>
#include <QTextStream>
#include <QFile>
#include <QDebug>
#include <QString>
#include "PlanMasterController.h"

LemniscatelCreator::LemniscatelCreator(PlanMasterController* planMasterController, QObject* parent)
    : QObject               (parent),
    _name                 ("Lemniscate")

{
    m_socket = new QWebSocket();
    m_socket->open(QUrl("ws://192.168.0.156:8766/cmd"));
    connect(m_socket, &QWebSocket::connected, this, &LemniscatelCreator::onConnected);
}

void LemniscatelCreator::initial()
{

    QString command = "python3 GCS11.py LEMNISCATE";
    m_socket->sendTextMessage(command);

    // Close the WebSocket after 10 seconds
    QTimer::singleShot(10000, this, &LemniscatelCreator::closeWebSocket);

}

void LemniscatelCreator::onConnected()
{
    qDebug() << "WebSocket connected";
}

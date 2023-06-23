#ifndef RECTANGLECREATOR_H
#define RECTANGLECREATOR_H

class PlanMasterController;
#include <QObject>
#include <QWebSocket>
class RectangleCreator : public QObject
{
    Q_OBJECT
public:
    explicit RectangleCreator(PlanMasterController* planMasterController, QObject* parent = nullptr);
    Q_INVOKABLE void initial();
    Q_PROPERTY(QString  name            MEMBER _name            CONSTANT)
    Q_PROPERTY(QString  imageResource   MEMBER _imageResource   CONSTANT)

private slots:
    void onConnected();
    void closeWebSocket()
    {
        m_socket->close(QWebSocketProtocol::CloseCodeNormal, "WebSocket closed");
    }

protected:
    QString                 _name;
    QString                 _imageResource;
    QWebSocket              *m_socket;
};

#endif // RECTANGLECREATOR_H

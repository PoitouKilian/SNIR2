#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTcpSocket>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_pushButtonConnexion_clicked();

    void on_pushButtonNomOrdinateur_clicked();

    void on_pushButtonNomUtilisateur_clicked();

    void on_pushButtonArchitecture_clicked();

    void on_pushButtonOS_clicked();

    void onQTcpSocket_connected();

    void onQTcpSocket_disconnected();

    void onQTcpSocket_error(QAbstractSocket::SocketState socketError);

    void onQTcpSocket_hostFound();

    void onQtcpSocket_stateChanged(QAbstractSocket::SocketState socketState);

    void onQTcpSocket_aboutToClose();

    void onQTcpSocket_bytesWritten(qint64 bytes);

    void onQTcpSocket_readChannelFinished();

    void onQTcpSocket_readyRead();

private:
    Ui::Widget *ui;
    QTcpSocket *socketDeDialogueAvecServeur;
    QString typeDeDemande;
};

#endif // WIDGET_H

#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    socketDeDialogueAvecServeur = new QTcpSocket(this);

    connect( socketDeDialogueAvecServeur, &QTcpSocket::connected, this, &Widget::onQTcpSocket_connected);
    connect( socketDeDialogueAvecServeur, &QTcpSocket::disconnected, this, &Widget::onQTcpSocket_disconnected);
    connect( socketDeDialogueAvecServeur, &QTcpSocket::hostFound,    this, &Widget::onQTcpSocket_hostFound);
    connect( socketDeDialogueAvecServeur, &QTcpSocket::stateChanged, this, &Widget::onQtcpSocket_stateChanged);
    connect( socketDeDialogueAvecServeur, &QTcpSocket::aboutToClose,  this, &Widget::onQTcpSocket_aboutToClose);
    connect( socketDeDialogueAvecServeur, &QTcpSocket::bytesWritten, this, &Widget::onQTcpSocket_bytesWritten);
    connect( socketDeDialogueAvecServeur, &QTcpSocket::readChannelFinished, this, &Widget::onQTcpSocket_readChannelFinished);
    connect( socketDeDialogueAvecServeur, &QTcpSocket::readyRead, this, &Widget::onQTcpSocket_readyRead);
    connect( socketDeDialogueAvecServeur,QOverload<QAbstractSocket::SocketError>::of(&QTcpSocket::error),this,&Widget::onQTcpSocket_error);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButtonConnexion_clicked()
{
    QString hostname = ui->lineEditAdresseIP->text();
        QString port = ui->lineEditNumeroPort->text();
        int portint = port.toInt();
        if(ui->pushButtonConnexion->text() == "Connexion"){
            socketDeDialogueAvecServeur->connectToHost(hostname, portint);
            ui->pushButtonConnexion->setText("Deconnexion");
        }
        else{
            ui->pushButtonConnexion->setText("Connexion");
            socketDeDialogueAvecServeur->disconnectFromHost();
        }
}

void Widget::on_pushButtonNomOrdinateur_clicked()
{
    typeDeDemande = "c";
    socketDeDialogueAvecServeur->write(typeDeDemande.toLatin1());;
}

void Widget::on_pushButtonNomUtilisateur_clicked()
{
    typeDeDemande = "u";
    socketDeDialogueAvecServeur->write(typeDeDemande.toLatin1());
}

void Widget::on_pushButtonArchitecture_clicked()
{
    typeDeDemande = "a";
    socketDeDialogueAvecServeur->write(typeDeDemande.toLatin1());
}

void Widget::on_pushButtonOS_clicked()
{
    typeDeDemande="o";
    socketDeDialogueAvecServeur->write(typeDeDemande.toLatin1());

}

void Widget::onQTcpSocket_connected()
{
    ui->lineEditNumeroPort->setEnabled(0);
    ui->lineEditAdresseIP->setEnabled(0);
    ui->groupBoxInformationClient->setEnabled(1);
    ui->textEditEtatConnexion->append("connected");
}

void Widget::onQTcpSocket_disconnected()
{
    ui->lineEditNumeroPort->setEnabled(1);
    ui->lineEditAdresseIP->setEnabled(1);
    ui->groupBoxInformationClient->setEnabled(0);
    ui->textEditEtatConnexion->append("disconnected");
}

void Widget::onQTcpSocket_error(QAbstractSocket::SocketState socketError)
{
    ui->textEditEtatConnexion->append(socketDeDialogueAvecServeur->errorString());
}

void Widget::onQTcpSocket_hostFound()
{
    ui->textEditEtatConnexion->append("E2 - Le serveur répond.");
}

void Widget::onQtcpSocket_stateChanged(QAbstractSocket::SocketState socketState)
{
    QString message;
        switch (socketState)
        {

        case QAbstractSocket::HostLookupState:
            message="Le client effectue une recherche de nom d'hôte.";
            break;

        case QAbstractSocket::ConnectingState:
            message="E1 - Le client demande l'établissement d'une connexion.";
            break;

        case QAbstractSocket::ConnectedState:
            message="E3 - Une connexion est établie avec le serveur.";
            break;

        // Fermeture 1 : quand le client n'a plus de données à envoyer dans le flux,
        // il envoie un segment dont l'indicateur FIN est défini.
        // toutefois des données peuvent toujours être en attente d'être reçues.
        case QAbstractSocket::ClosingState	:
            message="F1 - le client n'a plus de données à envoyer.";
            break;

        // Fermeture 2 : le serveur envoie un segment ACK
        // pour indiquer la bonne réception du segment FIN
        // afin de fermer la session du client au serveur.
        case QAbstractSocket::UnconnectedState :
            message="F2 - Le client n'est plus connecté.";
            break;

        case QAbstractSocket::ListeningState :
            message="For internal use only. ";
            break;
    }
        ui->textEditEtatConnexion->append(message);
}

void Widget::onQTcpSocket_aboutToClose()
{
    ui->textEditEtatConnexion->append("The socket is about to close");
}

void Widget::onQTcpSocket_bytesWritten(qint64 bytes)
{
    ui->textEditEtatConnexion->append("bytes written");
}

void Widget::onQTcpSocket_readChannelFinished()
{
    ui->textEditEtatConnexion->append("read channel finnished");
}

void Widget::onQTcpSocket_readyRead()
{
    QByteArray donnees = socketDeDialogueAvecServeur->readAll();
        if(typeDeDemande == 'o'){
            ui->lineEditOS->insert(donnees.data());
        }
        if(typeDeDemande == 'u'){
            ui->lineEditNomUtilisateur->insert(donnees.data());
        }
        if(typeDeDemande == 'c'){
            ui->lineEditNomOrdinateur->insert(donnees.data());
        }
        if(typeDeDemande == 'a'){
            ui->lineEditNomArchitecture->insert(donnees.data());
        }

}

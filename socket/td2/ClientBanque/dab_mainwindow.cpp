#include "dab_mainwindow.h"
#include "ui_dab_mainwindow.h"

DAB_MainWindow::DAB_MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DAB_MainWindow)
{
    ui->setupUi(this);
    socketClientBanque = new QTcpSocket(this);

    bool bon;
    bon = connect(socketClientBanque,&QTcpSocket::connected, this, &DAB_MainWindow::onQTcpSocket_connected);
    bon = connect(socketClientBanque,&QTcpSocket::disconnected, this, &DAB_MainWindow::onQTcpSocket_disconnected);
    bon = connect(socketClientBanque,&QTcpSocket::readyRead, this, &DAB_MainWindow::onQTcpSocket_readyRead);
    bon = connect(socketClientBanque, QOverload<QAbstractSocket::SocketError>::of(&QAbstractSocket::error), this, &DAB_MainWindow::onQTcpSocket_error);
    if(!bon)
    {
        QMessageBox::information(this,"erreur","erreur de connexion");
    }
}

DAB_MainWindow::~DAB_MainWindow()
{
    delete ui;
}

void DAB_MainWindow::on_pushButtonConnexion_clicked()
{
    if(ui->pushButtonConnexion->text()=="Connexion")
    {
        socketClientBanque->connectToHost(ui->lineEditAdresse->text(),ui->lineEditPort->text().toInt());
    }
    else
    {
        socketClientBanque->disconnectFromHost();
    }

}

void DAB_MainWindow::on_pushButtonEnvoi_clicked()
{
    quint16 taille=0;
    QChar commande;
    QBuffer tampon;
    float montant=ui->lineEditMontant->text().toFloat();

    tampon.open(QIODevice::WriteOnly);
    QDataStream out(&tampon);

    if(ui->radioButtonSolde->isChecked())
    {
       commande = 'S';
       out<<taille<<commande;
       taille=tampon.size()-sizeof(taille);
       tampon.seek(0);
       out<<taille;
       socketClientBanque->write(tampon.buffer());
    }
    if(ui->radioButtonRetrait->isChecked())
    {
        commande = 'R';
        out<<taille<<commande<<montant;
        taille=tampon.size()-sizeof(taille);
        tampon.seek(0);
        out<<taille;
        socketClientBanque->write(tampon.buffer());
    }
    if(ui->radioButtonDepot->isChecked())
    {
        commande = 'D';
        out<<taille<<commande<<montant;
        taille=tampon.size()-sizeof(taille);
        tampon.seek(0);
        out<<taille;
        socketClientBanque->write(tampon.buffer());
    }
}

void DAB_MainWindow::on_pushButtonNumero_clicked()
{
    quint16 taille=0;
    QChar commande='N';
    int compte=ui->lineEditNumero->text().toInt();
    QBuffer tampon;

    tampon.open(QIODevice::WriteOnly);
    //association du tampon au flux de sortie
    QDataStream out(&tampon);
    //construction de la trame
    out<<taille<<commande<<compte;
    //calcul de la taille de la trame
    taille=tampon.size()-sizeof(taille);
    //placement sur la premiere position du flux pour pouvoir modifier la taille
    tampon.seek(0);
    //modification de la trame avec la taille reel de la trame
    out<<taille;
    //envoi du QByteArray du tampon via la socket
    socketClientBanque->write(tampon.buffer());
}
void DAB_MainWindow::onQTcpSocket_connected()
{
    ui->listWidgetEtat->addItem("Connecté à la banque");
    ui->pushButtonConnexion->setText("Déconnexion");
    ui->groupBoxOperation->setEnabled(1);
    ui->lineEditAdresse->setEnabled(0);
    ui->lineEditPort->setEnabled(0);

}
void DAB_MainWindow::onQTcpSocket_disconnected()
{
    ui->listWidgetEtat->addItem("Déconnexion de la banque");
    ui->pushButtonConnexion->setText("Connexion");
    ui->groupBoxOperation->setEnabled(0);
    ui->lineEditAdresse->setEnabled(1);
    ui->lineEditPort->setEnabled(1);
}
void DAB_MainWindow::onQTcpSocket_error(QAbstractSocket::SocketError socketError)
{
    ui->listWidgetEtat->addItem(socketClientBanque->errorString());
}
void DAB_MainWindow::onQTcpSocket_readyRead()
{
    quint16 taille=0;
    QString message;
    // si le nombre d'octets recu est au moins egal a celui de la taille de ce que l'on doit recevoir
    if (socketClientBanque->bytesAvailable() >= (qint64)sizeof(taille))
    {
    // association de la socket au flux d'entree
    QDataStream in(socketClientBanque);
    // extraire la taille de ce que l'on doit recevoir
    in >> taille;
    // si le nombre d'octets recu est au moins egal a celui de ce que l'on doit recevoir
    if (socketClientBanque->bytesAvailable() >= (qint64)taille)
    {
    // extraire le message de la banque et le mettre dans message
    in>>message;
    }
    }
    ui->lineEditMessage->setText(message);
}



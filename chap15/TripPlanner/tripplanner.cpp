#include "tripplanner.h"
#include "ui_tripplanner.h"
#include <QPushButton>
#include <QDateTime>
#include <QHostAddress>

TripPlanner::TripPlanner(QWidget *parent) :
    QDialog(parent)
{
    setupUi(this);
    searchButton = buttonBox->addButton(tr("&Search"),
                                        QDialogButtonBox::ActionRole);

    stopButton   = buttonBox->addButton(tr("S&top"),
                                        QDialogButtonBox::ActionRole);

    stopButton->setEnabled(false);
    buttonBox->button(QDialogButtonBox::Close)->setText(tr("&Quit"));

    QDateTime dateTime = QDateTime::currentDateTime();
    dateEdit->setDate(dateTime.date());
    timeEdit->setTime(QTime(dateTime.time().hour(), 0));

    progressBar->hide();
    progressBar->setSizePolicy(QSizePolicy::Preferred,
                               QSizePolicy::Ignored);

    tableWidget->verticalHeader()->hide();
    tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

    connect(searchButton, SIGNAL(clicked(bool)),
            this, SLOT(connectToServer()));
    connect(stopButton, SIGNAL(clicked(bool)), this, SLOT(stopSearch()));
    connect(buttonBox, SIGNAL(rejected()), this, SLOT(reject()));
    connect(&tcpSocket, SIGNAL(connected()), this, SLOT(sendRequest()));
    connect(&tcpSocket, SIGNAL(disconnected()),
            this, SLOT(connectionClosedByServer()));
    connect(&tcpSocket, SIGNAL(readyRead()),
            this, SLOT(updateTableWidget()));
    connect(&tcpSocket, SIGNAL(error(QAbstractSocket::SocketError)),
            this, SLOT(error()));
}

void TripPlanner::connectToServer()
{
    tcpSocket.connectToHost(QHostAddress::LocalHost, 6178);

    tableWidget->setRowCount(0);
    searchButton->setEnabled(false);
    stopButton->setEnabled(true);
    statusLabel->setText(tr("Connecting to server..."));
    progressBar->show();

    nextBlockSize = 0;
}

void TripPlanner::sendRequest()
{
    QByteArray block;
    QDataStream out(&block, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_3);
    out << quint16(0) << quint8('S') << fromComboBox->currentText()
        << toComboBox->currentText() << dateEdit->date()
        << timeEdit->time();

    if(departureRadioButton->isChecked()) {
        out << quint8('D');
    } else {
        out << quint8('A');
    }
    out.device()->seek(0);
    out << quint16(block.size() - sizeof(quint16));
    tcpSocket.write(block);
    statusLabel->setText(tr("Sending request..."));
}

void TripPlanner::updateTableWidget()
{

}

void TripPlanner::stopSearch()
{

}

void TripPlanner::connectionClosedByServer()
{

}

void TripPlanner::error()
{

}

void TripPlanner::closeConnection()
{

}

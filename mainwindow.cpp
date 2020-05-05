#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , record(new ResortReservationRecord)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete record;
}


/*
 * In this function, you will see that the data is set to and retrieved from
 * a model class named 'record'. This is how we implement the (moderated) MVC concept.
 *
 */
void MainWindow::on_nameEdit_textChanged(const QString &arg1)
{
    // from qstring to std string
    // https://www.qtcentre.org/threads/23506-How-to-convert-QString-to-std-string-or-char*
    record->setCustomerName(arg1.toStdString());

    // from std string to qstring: see this
    // https://stackoverflow.com/questions/1814189/how-to-change-string-into-qstring
    ui->nameLabel->setText(QString::fromStdString(record->getCustomerName()));
}

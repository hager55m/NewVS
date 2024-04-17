#include "adminmanagemetroremovestation.h"
#include "ui_adminmanagemetroremovestation.h"

AdminManageMetroRemoveStation::AdminManageMetroRemoveStation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminManageMetroRemoveStation)
{
    ui->setupUi(this);

    QPixmap u(":/images/img/man.png");
    ui->userpic_2->setPixmap(u.scaled(ui->userpic_2->width(), ui->userpic_2->height(),Qt::KeepAspectRatio));

    QPixmap t(":/images/img/left-arrow.png");
    ui->homepic_3->setPixmap(t.scaled(ui->homepic_3->width(),ui->homepic_3->height(),Qt::KeepAspectRatio));

    QPixmap m(":/images/img/download.png");
    ui->Metro_2->setPixmap(m.scaled(ui->Metro_2->width(), ui->Metro_2->height(),Qt::KeepAspectRatio));

    QPixmap h(":/images/img/home (1).png");
    ui->homepic_2->setPixmap(h.scaled(ui->homepic_2->width(), ui->homepic_2->height(),Qt::KeepAspectRatio));

    QPixmap d(":/images/img/train.png");
    ui->ManageMetro->setPixmap(d.scaled(ui->ManageMetro->width(), ui->ManageMetro->height(),Qt::KeepAspectRatio));

    QPixmap ticket(":/images/img/ticket.png");
    ui->Ticket->setPixmap(ticket.scaled(ui->Ticket->width(), ui->Ticket->height(),Qt::KeepAspectRatio));

    QPixmap subscribtion(":/images/img/subway.png");
    ui->Subscribtion->setPixmap(subscribtion.scaled(ui->Subscribtion->width(), ui->Subscribtion->height(),Qt::KeepAspectRatio));

    QPixmap entrance(":/images/img/entrance.png");
    ui->Station->setPixmap(entrance.scaled(ui->Station->width(), ui->Station->height(),Qt::KeepAspectRatio));

}
void AdminManageMetroRemoveStation::on_pushButton_10_clicked()
{
    emit SwitchToAdminHome();
}
void AdminManageMetroRemoveStation::on_pushButton_11_clicked()
{
    emit SwitchToLogin();
}
void AdminManageMetroRemoveStation::on_pushButton_13_clicked()
{
    emit SwitchToMnageMetroOption();
}

void AdminManageMetroRemoveStation::on_pushButton_21_clicked()
{
    emit SwitchToMnageMetroOption();
}
void AdminManageMetroRemoveStation::on_pushButton_15_clicked()
{
    emit SwitchToMnageMetroOption();
}

AdminManageMetroRemoveStation::~AdminManageMetroRemoveStation()
{
    delete ui;
}

#include "tic_tac_toe.h"
#include "ui_tic_tac_toe.h"

tic_tac_toe::tic_tac_toe(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::tic_tac_toe)
{
    ui->setupUi(this);
    usr=1;
    /*connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(on_pushButton_clicked()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(on_pushButton_2_clicked()));
    connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(on_pushButton_3_clicked()));
    connect(ui->pushButton_4,SIGNAL(clicked()),this,SLOT(on_pushButton_4_clicked()));
    connect(ui->pushButton_5,SIGNAL(clicked()),this,SLOT(on_pushButton_5_clicked()));
    connect(ui->pushButton_6,SIGNAL(clicked()),this,SLOT(on_pushButton_6_clicked()));
    connect(ui->pushButton_7,SIGNAL(clicked()),this,SLOT(on_pushButton_7_clicked()));
    connect(ui->pushButton_8,SIGNAL(clicked()),this,SLOT(on_pushButton_8_clicked()));
    connect(ui->pushButton_9,SIGNAL(clicked()),this,SLOT(on_pushButton_9_clicked()));*/

}

tic_tac_toe::~tic_tac_toe()
{
    delete ui;
}

void tic_tac_toe::on_pushButton_clicked()
{
    if(usr==1)
    {
        ui->pushButton->setStyleSheet("border-image: url(:/prefix/O.png);");
        usr=2;
    }
    else
    {
         ui->pushButton->setStyleSheet("border-image: url(:/prefix/x.png);");
         usr=1;
    }
}

void tic_tac_toe::on_pushButton_2_clicked()
{
    if(usr==1)
    {
        ui->pushButton_2->setStyleSheet("border-image: url(:/prefix/O.png);");
        usr=2;
    }
    else
    {
         ui->pushButton_2->setStyleSheet("border-image: url(:/prefix/x.png);");
         usr=1;
    }
}

void tic_tac_toe::on_pushButton_3_clicked()
{
    if(usr==1)
    {
        ui->pushButton_3->setStyleSheet("border-image: url(:/prefix/O.png);");
        usr=2;
    }
    else
    {
         ui->pushButton_3->setStyleSheet("border-image: url(:/prefix/x.png);");
         usr=1;
    }
}

void tic_tac_toe::on_pushButton_4_clicked()
{
    if(usr==1)
    {
        ui->pushButton_4->setStyleSheet("border-image: url(:/prefix/O.png);");
        usr=2;
    }
    else
    {
         ui->pushButton_4->setStyleSheet("border-image: url(:/prefix/x.png);");
         usr=1;
    }
}

void tic_tac_toe::on_pushButton_5_clicked()
{
    if(usr==1)
    {
        ui->pushButton_5->setStyleSheet("border-image: url(:/prefix/O.png);");
        usr=2;
    }
    else
    {
         ui->pushButton_5->setStyleSheet("border-image: url(:/prefix/x.png);");
         usr=1;
    }
}

void tic_tac_toe::on_pushButton_6_clicked()
{
    if(usr==1)
    {
        ui->pushButton_6->setStyleSheet("border-image: url(:/prefix/O.png);");
        usr=2;
    }
    else
    {
         ui->pushButton_6->setStyleSheet("border-image: url(:/prefix/x.png);");
         usr=1;
    }
}

void tic_tac_toe::on_pushButton_7_clicked()
{
    if(usr==1)
    {
        ui->pushButton_7->setStyleSheet("border-image: url(:/prefix/O.png);");
        usr=2;
    }
    else
    {
         ui->pushButton_7->setStyleSheet("border-image: url(:/prefix/x.png);");
         usr=1;
    }
}

void tic_tac_toe::on_pushButton_8_clicked()
{
    if(usr==1)
    {
        ui->pushButton_8->setStyleSheet("border-image: url(:/prefix/O.png);");
        usr=2;
    }
    else
    {
         ui->pushButton_8->setStyleSheet("border-image: url(:/prefix/x.png);");
         usr=1;
    }
}

void tic_tac_toe::on_pushButton_9_clicked()
{
    if(usr==1)
    {
        ui->pushButton_9->setStyleSheet("border-image: url(:/prefix/O.png);");
        usr=2;
    }
    else
    {
         ui->pushButton_9->setStyleSheet("border-image: url(:/prefix/x.png);");
         usr=1;
    }
}

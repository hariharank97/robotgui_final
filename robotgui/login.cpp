#include "login.h"
#include "ui_login.h"

login::login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}


void login::on_pushButton_login_clicked()
{
    QString username = ui->lineEdit_uname->text();
    QString password = ui->lineEdit_2_pwd->text();
    //ui->statusbar->showMessage("Not Logged in...");

        if (username == "iot" && password == "iot")
        {
            ui->statusbar->showMessage("Login sucessful!", 2000);

            hide();
            mw = new mainwindow(this);
            mw->show();
        }
        else
        {
            ui->statusbar->showMessage("Incorrect Credentials! Try again...", 2000);
            ui->lineEdit_uname->setText("");
            ui->lineEdit_2_pwd->setText("");
        }
}

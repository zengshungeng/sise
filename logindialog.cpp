#include "logindialog.h"
#include "ui_logindialog.h"
#include <QMessageBox>
#include <QDebug>
#include <string>

LoginDialog::LoginDialog(QWidget *parent):
    QDialog(parent),
    ui (new Ui::LoginDialog)
{
    ui->setupUi(this);//显示窗口
    setFixedSize(400,300);//设置大小
    setWindowTitle(tr("登录"));//设置窗口标题
    ui->usrLineEdit->setFocus();  

}
LoginDialog::~LoginDialog()
{
    delete ui;
}
//登录验证
void LoginDialog::on_loginBtn_clicked()
{

    if (ui->usrLineEdit->text().isEmpty())
    {
        QMessageBox::information(this, tr("请输入用户名"),
                                 tr("用户名不允许为空！"), QMessageBox::Ok);
        ui->usrLineEdit->setFocus();
    } else
    {
        if (ui->usrLineEdit->text()==tr("admin"))
        {
            ui->pwdLineEdit->setFocus();

                if (ui->pwdLineEdit->text().isEmpty())
                {
                    QMessageBox::information(this, tr("请输入密码"),
                                             tr("密码不允许为空！"), QMessageBox::Ok);
                    ui->pwdLineEdit->setFocus();
                } else
                {
                    if (ui->pwdLineEdit->text()==tr("admin"))
                    {
                        QDialog::accept();
                    } else
                    {
                        QMessageBox::warning(this, tr("密码错误"),
                                             tr("请输入正确的密码再登录！"), QMessageBox::Ok);
                        ui->pwdLineEdit->clear();
                        ui->pwdLineEdit->setFocus();
                    }
                }
        } else
        {
            QMessageBox::warning(this, tr("用户名错误"),
                                 tr("请输入正确的用户名再登录！"), QMessageBox::Ok);
            ui->usrLineEdit->clear();
            ui->usrLineEdit->setFocus();
        }
    }
}
//退出按钮
void LoginDialog::on_quitBtn_clicked()
{
    QDialog::reject();
}


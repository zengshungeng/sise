#include "logindialog.h"
#include "ui_logindialog.h"
#include <QMessageBox>
#include <QDebug>
#include <string>

LoginDialog::LoginDialog(QWidget *parent):
    QDialog(parent),
    ui (new Ui::LoginDialog)
{
    ui->setupUi(this);//��ʾ����
    setFixedSize(400,300);//���ô�С
    setWindowTitle(tr("��¼"));//���ô��ڱ���
    ui->usrLineEdit->setFocus();  

}
LoginDialog::~LoginDialog()
{
    delete ui;
}
//��¼��֤
void LoginDialog::on_loginBtn_clicked()
{

    if (ui->usrLineEdit->text().isEmpty())
    {
        QMessageBox::information(this, tr("�������û���"),
                                 tr("�û���������Ϊ�գ�"), QMessageBox::Ok);
        ui->usrLineEdit->setFocus();
    } else
    {
        if (ui->usrLineEdit->text()==tr("admin"))
        {
            ui->pwdLineEdit->setFocus();

                if (ui->pwdLineEdit->text().isEmpty())
                {
                    QMessageBox::information(this, tr("����������"),
                                             tr("���벻����Ϊ�գ�"), QMessageBox::Ok);
                    ui->pwdLineEdit->setFocus();
                } else
                {
                    if (ui->pwdLineEdit->text()==tr("admin"))
                    {
                        QDialog::accept();
                    } else
                    {
                        QMessageBox::warning(this, tr("�������"),
                                             tr("��������ȷ�������ٵ�¼��"), QMessageBox::Ok);
                        ui->pwdLineEdit->clear();
                        ui->pwdLineEdit->setFocus();
                    }
                }
        } else
        {
            QMessageBox::warning(this, tr("�û�������"),
                                 tr("��������ȷ���û����ٵ�¼��"), QMessageBox::Ok);
            ui->usrLineEdit->clear();
            ui->usrLineEdit->setFocus();
        }
    }
}
//�˳���ť
void LoginDialog::on_quitBtn_clicked()
{
    QDialog::reject();
}


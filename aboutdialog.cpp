#include "aboutdialog.h"
#include "ui_aboutdialog.h"
#include <QString>


aboutDialog::aboutDialog(QWidget *parent):
    QDialog(parent),
    ui (new Ui::aboutDialog)

{
    ui->setupUi(this);
    setFixedSize(320,200);
    setWindowTitle(tr("����"));
    ui->confirmBtn->setDefault(true);
    QString path="info.png";
    path="info.png";
    QPixmap img(path);
    ui->label_6->setPixmap(img);
    ui->label_6->resize(img.width(),img.height());

}


//ȷ����ť
void aboutDialog::on_confirmBtn_clicked()
{
    QDialog::hide();
}


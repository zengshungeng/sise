#ifndef ABOUTDIALOG_H
#define ABOUTDIALOG_H

#include <QDialog>

namespace Ui {
    class aboutDialog;
}
class aboutDialog : public QDialog
{
    Q_OBJECT
public:
    aboutDialog(QWidget* = 0);

private slots:
    void on_confirmBtn_clicked();
private:
    Ui::aboutDialog *ui;
};

#endif // ABOUTDIALOG_H


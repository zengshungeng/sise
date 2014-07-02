#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "ui_mainwindow.h"

namespace Ui{
    class MainWindow;
}

class CMainWindow : public QMainWindow
{
    Q_OBJECT
public:
    CMainWindow(QWidget* = 0);
private:
    void    iniConnect();
    void    iniDockWidget();
    QDockWidget* stuaddWidget;
    Ui::MainWindow *ui;
private slots:
    void doQuit();//声明退去按钮函数
    void doAbout();//声明关于按钮函数
    void doHand();//声明手动添加按钮函数
    void doSave();//声明导出按钮函数
    void doChange();//声明修改按钮函数
    void doSearch();//声明查找按钮函数
    void doMulAdd();//声明多项添加按钮函数
    void doMakePic();//声明制作图表按钮函数
    void doCount();//声明统计按钮函数
    void doOpen();//声明打开按钮函数
};
#endif // MAINWINDOW_H

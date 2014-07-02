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
    void doQuit();//������ȥ��ť����
    void doAbout();//�������ڰ�ť����
    void doHand();//�����ֶ���Ӱ�ť����
    void doSave();//����������ť����
    void doChange();//�����޸İ�ť����
    void doSearch();//�������Ұ�ť����
    void doMulAdd();//����������Ӱ�ť����
    void doMakePic();//��������ͼ��ť����
    void doCount();//����ͳ�ư�ť����
    void doOpen();//�����򿪰�ť����
};
#endif // MAINWINDOW_H

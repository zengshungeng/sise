#include <QtGui>
#include "mainwindow.h"
#include "aboutdialog.h"

CMainWindow::CMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)

{

    ui->setupUi(this);
//    setFixedSize(800,600);
    iniConnect();
    show();
}
//�����˳�����
void CMainWindow::doQuit()
{
    qApp->quit();
}
//���ڵ���
void CMainWindow::doAbout()
{
    aboutDialog about;
    about.exec();
}
//������ť
void CMainWindow::doSearch()
{
    ui->stacked->setCurrentIndex(3);
}
//���ļ���ť
void CMainWindow::doOpen()
{

    QString filename  = QFileDialog::getOpenFileName(this);
}

//�ֶ�¼�밴ť
void CMainWindow::doHand()
{
    ui->stacked->setCurrentIndex(0);
}
//�޸İ�ť
void CMainWindow::doChange()
{
    ui->stacked->setCurrentIndex(1);
}
//������ť
void CMainWindow::doSave()
{
    ui->stacked->setCurrentIndex(2);
}
//������Ӱ�ť
void CMainWindow::doMulAdd()
{
    ui->stacked->setCurrentIndex(4);
}
//����ͼ��ť
void CMainWindow::doMakePic()
{
    ui->stacked->setCurrentIndex(5);
}
//ͳ�ư�ť
void CMainWindow::doCount()
{
    ui->stacked->setCurrentIndex(6);
}
void CMainWindow::iniConnect()
{
    connect(ui->actQuit,SIGNAL(triggered()),
            this, SLOT(doQuit()));
    connect(ui->actInfo,SIGNAL(triggered()),
            this, SLOT(doAbout()));
    connect(ui->actHand,SIGNAL(triggered()),
            this, SLOT(doHand()));
    connect(ui->actSea,SIGNAL(triggered()),
            this, SLOT(doSearch()));
    connect(ui->actSinCha,SIGNAL(triggered()),
            this, SLOT(doChange()));
    connect(ui->actOut,SIGNAL(triggered()),
            this, SLOT(doSave()));
    connect(ui->actMulAdd,SIGNAL(triggered()),
            this, SLOT(doMulAdd()));
    connect(ui->actMakePic,SIGNAL(triggered()),
            this, SLOT(doMakePic()));
    connect(ui->actCount,SIGNAL(triggered()),
            this, SLOT(doCount()));
    connect(ui->actFile,SIGNAL(triggered()),
            this, SLOT(doOpen()));
}

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
//程序退出函数
void CMainWindow::doQuit()
{
    qApp->quit();
}
//关于弹窗
void CMainWindow::doAbout()
{
    aboutDialog about;
    about.exec();
}
//搜索按钮
void CMainWindow::doSearch()
{
    ui->stacked->setCurrentIndex(3);
}
//打开文件按钮
void CMainWindow::doOpen()
{

    QString filename  = QFileDialog::getOpenFileName(this);
}

//手动录入按钮
void CMainWindow::doHand()
{
    ui->stacked->setCurrentIndex(0);
}
//修改按钮
void CMainWindow::doChange()
{
    ui->stacked->setCurrentIndex(1);
}
//导出按钮
void CMainWindow::doSave()
{
    ui->stacked->setCurrentIndex(2);
}
//多项添加按钮
void CMainWindow::doMulAdd()
{
    ui->stacked->setCurrentIndex(4);
}
//制作图表按钮
void CMainWindow::doMakePic()
{
    ui->stacked->setCurrentIndex(5);
}
//统计按钮
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

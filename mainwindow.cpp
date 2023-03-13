#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->TodoAdd, &QPushButton::clicked, this, &MainWindow::todoAddClicked);
    nextId = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::UpdateTables()
{
    for(auto var : tasks.toStdMap())
    {
        qDebug() << var.first << "," << var.second->getTitle();
        qDebug() << "Modules: ";
        for(auto item : var.second->getModules())
        {
            if(item->getType() == IModule::TEXT)
                qDebug() << " - " << item->getTitle() << "," << *(QString*)(item->getContent()) << '\n';
        }
    }
}


void MainWindow::todoAddClicked()
{
    tasks.insert(nextId++, new BaseTask(ui->todoArea->takeWidget(), 1));
    UpdateTables();
}

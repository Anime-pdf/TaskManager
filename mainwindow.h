#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <BaseTask.h>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void UpdateTables();

private slots:
    void todoAddClicked();
private:
    Ui::MainWindow *ui;

    QMap<int, BaseTask*> tasks;
    int nextId;
};
#endif // MAINWINDOW_H

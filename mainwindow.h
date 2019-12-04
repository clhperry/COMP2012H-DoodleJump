#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QKeyEvent>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    
protected:
    void ketPressEvent(QKeyEvent* e);

private slots:
    void on_startButton_clicked();
    void on_pauseButton_clicked();
    
private:
    bool lose();
    Ui::MainWindow *ui;
    Impl* impl;
    
};
#endif // MAINWINDOW_H

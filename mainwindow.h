#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPixmap>
#include "AED.h"
#include "User.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void ECGDisplay(int testCase);
    void powerButtonClicked();
    void attachPadsClicked();
    void shockClicked();
    void shaveClicked();
    void cprClicked();
private:
    Ui::MainWindow *ui;
    AED *aed;
    User *user;

};
#endif // MAINWINDOW_H

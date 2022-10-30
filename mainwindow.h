#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QTableWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QVBoxLayout *rootLayout;
    QHBoxLayout *iconFieldLayout;
    QVBoxLayout *buttonFieldLayout;
    QHBoxLayout *tableFieldLayout;
    QHBoxLayout *resultFieldLayout;
    QTableWidget *tableWidget;
    void setLabel();
    void setButton();
    void addSoupImage(QString result);
    void createTableHeader();
    void createTableItems(QString meat, QString vegitables, QString stock, int column);
    QString animalList[3] = {"rabbit", "cat", "bear"};

private slots:
    void button1Clicked();
};
#endif // MAINWINDOW_H

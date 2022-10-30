#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "rabbit.h"
#include "cat.h"
#include "bear.h"

#include <QHeaderView>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    rootLayout = new QVBoxLayout;
    iconFieldLayout = new QHBoxLayout;
    tableFieldLayout = new QHBoxLayout;
    resultFieldLayout = new QHBoxLayout;
    buttonFieldLayout = new QVBoxLayout;

    setLabel();
    setButton();

    iconFieldLayout->setAlignment(Qt::AlignBottom | Qt::AlignCenter);
    tableFieldLayout->setAlignment(Qt::AlignTop | Qt::AlignCenter);
    resultFieldLayout->setAlignment(Qt::AlignTop | Qt::AlignCenter);
    buttonFieldLayout->setAlignment(Qt::AlignTop | Qt::AlignCenter);
    rootLayout->addLayout(iconFieldLayout);
    rootLayout->addLayout(tableFieldLayout);
    rootLayout->addLayout(resultFieldLayout);
    rootLayout->addLayout(buttonFieldLayout);

    setFixedSize(800, 500);

    ui->setupUi(this);
    ui->centralwidget->setLayout(rootLayout);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setLabel(){
    for(int i=0; i<3; i++){
        QLabel *label = new QLabel();
        QPixmap *image = new QPixmap(":/assets/assets/" + animalList[i] + ".png");

        label->setPixmap(*image);
        label->setFixedSize(80, 80);
        label->setScaledContents(true);

        iconFieldLayout->addWidget(label);
    }
}

void MainWindow::setButton(){
    QPushButton *button1 = new QPushButton("&スープを作る", this);
    connect(button1, SIGNAL(clicked()), this, SLOT(button1Clicked()));

    buttonFieldLayout->addWidget(button1);
}

void MainWindow::button1Clicked(){
   createTableHeader();

   Rabbit *r = new Rabbit();
   QString result = r->cookSoup().c_str();
   createTableItems(r->getMeat().c_str(), r->getVegitables().c_str(), r->getSoupStock().c_str(), 0);
   addSoupImage(result);

   Cat *c = new Cat();
   result = c->cookSoup().c_str();
   createTableItems(c->getMeat().c_str(), c->getVegitables().c_str(), c->getSoupStock().c_str(), 1);
   addSoupImage(result);

   Bear *b = new Bear();
   result = b->cookSoup().c_str();
   createTableItems(b->getMeat().c_str(), b->getVegitables().c_str(), b->getSoupStock().c_str(), 2);
   addSoupImage(result);
}

void MainWindow::createTableItems(QString meat, QString vegitable, QString stock, int column){
    tableWidget->setItem(0, column, new QTableWidgetItem(meat));
    tableWidget->setItem(1, column, new QTableWidgetItem(vegitable));
    tableWidget->setItem(2, column, new QTableWidgetItem(stock));

    tableFieldLayout->addWidget(tableWidget);
}

void MainWindow::createTableHeader(){
    QList<QString> horizontalHeaderList[3];
    horizontalHeaderList->append(animalList[0]);
    horizontalHeaderList->append(animalList[1]);
    horizontalHeaderList->append(animalList[2]);

    QList<QString> verticalHeaderList[3];
    verticalHeaderList->append("meat");
    verticalHeaderList->append("vegitable");
    verticalHeaderList->append("soup stock");

    tableWidget = new QTableWidget(3, 3, this);

    tableWidget->setHorizontalHeaderLabels(*horizontalHeaderList);
    tableWidget->setVerticalHeaderLabels(*verticalHeaderList);
    tableWidget->horizontalHeader()->setStretchLastSection(true);
    tableWidget->verticalHeader()->setStretchLastSection(true);

    tableWidget->setMaximumSize(QSize(400, 200));
}

void MainWindow::addSoupImage(QString result){
    QVBoxLayout *cookListLayout = new QVBoxLayout;

    QLabel *label= new QLabel();
    QPixmap *image = new QPixmap(result);

    label->setPixmap(*image);
    label->setFixedSize(80, 80);
    label->setScaledContents(true);
    cookListLayout->addWidget(label);

    resultFieldLayout->addLayout(cookListLayout);
}

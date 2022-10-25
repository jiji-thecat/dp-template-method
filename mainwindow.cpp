#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    rootLayout = new QVBoxLayout;
    iconFieldLayout = new QHBoxLayout;
    buttonFieldLayout = new QVBoxLayout;

    setLabel();
    setButton();

    iconFieldLayout->setAlignment(Qt::AlignTop | Qt::AlignCenter);
    buttonFieldLayout->setAlignment(Qt::AlignBottom | Qt::AlignCenter);
    rootLayout->addLayout(iconFieldLayout);
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
    QString imagePaths[5] = {"bear", "cat", "dog", "pig", "rabbit"};

    for(int i=0; i<5; i++){
        QLabel *label = new QLabel();
        QPixmap *image = new QPixmap(":/assets/assets/" + imagePaths[i] + ".png");

        label->setPixmap(*image);
        label->setFixedSize(80, 80);
        label->setScaledContents(true);

        iconFieldLayout->addWidget(label);
    }
}

void MainWindow::setButton(){
    QPushButton *button1 = new QPushButton("&こんにちは", this);
    connect(button1, SIGNAL(clicked()), this, SLOT(button1Clicked()));

    buttonFieldLayout->addWidget(button1);
}

void MainWindow::button1Clicked(){
   qDebug() << "clicked";
}

//
// Created by root on 3/4/25.
//

// You may need to build the project (run Qt uic code generator) to get "ui_mywidget.h" resolved

#include "mywidget.h"
#include "ui_mywidget.h"


mywidget::mywidget(QWidget *parent) :
        QWidget(parent), ui(new Ui::mywidget) {
    ui->setupUi(this);
//    textEditStreamBuf= new TextEditStreamBuf(ui->textEdit);
//    std::cout.rdbuf(textEditStreamBuf);
}

mywidget::~mywidget() {
    delete ui;
}

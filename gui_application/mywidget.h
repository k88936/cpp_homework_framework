//
// Created by root on 3/4/25.
//

#ifndef HOMEWORK_MYWIDGET_H
#define HOMEWORK_MYWIDGET_H

#include <QWidget>
#include "TextEditStreamBuf.h"


QT_BEGIN_NAMESPACE
namespace Ui { class mywidget; }
QT_END_NAMESPACE

class mywidget : public QWidget {
    Q_OBJECT

public:
    explicit mywidget(QWidget *parent = nullptr);

    ~mywidget() override;

private:
    Ui::mywidget *ui;
    TextEditStreamBuf* textEditStreamBuf;
};


#endif //HOMEWORK_MYWIDGET_H

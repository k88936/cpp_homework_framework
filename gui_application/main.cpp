#include <QApplication>
#include "mywidget.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    mywidget widget;
    widget.show();

    return app.exec();
}
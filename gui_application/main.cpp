#include <QApplication>
#include <QPushButton>
#include "lib.h"
#include "mywidget.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    mywidget w;
    w.setWindowTitle("gui_application");
    w.show();
    return QApplication::exec();
}

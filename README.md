#include <QApplication>
#include "power4.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    POWER4 mainWindow;
    mainWindow.show();

    return app.exec();
}

#include "myclockwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

//    QTranslator qtLanguageTranslator;
//    qtLanguageTranslator.load(QString("QtLanguage_") + QString("ru_RU"));
//    qApp->installTranslator(&qtLanguageTranslator);

    MyClockWindow w;
    w.show();
    return a.exec();
}

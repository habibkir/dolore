#include <iostream>
#include "cazzaro.h"
#include "subwindow/subwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    std::cout<<"Quant'è bella giovinezza\n";
    QApplication app(argc, argv);
    std::cout<<"Che si fugge tuttavia\n";
    cazzaro w;
    std::cout<<"Chi vuol esser lieto, sia\n";
    w.show();
    std::cout<<"Di doman non c\'è certezza\n";

    return app.exec();
}


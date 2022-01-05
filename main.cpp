//<div>Iconos diseñados por <a href="https://www.flaticon.es/autores/justicon" title="justicon">justicon</a> from <a href="https://www.flaticon.es/" title="Flaticon">www.flaticon.es</a></div>
//Byron Socasi
#include "ventana.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Ventana w;
    w.show();
    return a.exec();
}

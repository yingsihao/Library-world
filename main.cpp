#include "class.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    create_database();
    login_window() -> show();
    return a.exec();
}

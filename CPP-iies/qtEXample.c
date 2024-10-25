//install qt
#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QLabel label("Hello, Qt!");
    label.show();

    return 0;
 app.exec();
}
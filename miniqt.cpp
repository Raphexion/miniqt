#include <QApplication>
#include <QPushButton>
#include <QDebug>

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);

  QPushButton hello("Hello World");

  QObject::connect(&hello, &QPushButton::clicked, [] () {
    qInfo() << "Clicked";
  });

  hello.show();
  return app.exec();
}

#include "ExitDialog.h"
#include "SettingsDialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);

  /*
  ExitDialog d;

  d.show();
  */
  SettingsDialog d;
  d.show();

  return a.exec();
}

#ifndef CISELECTION_H
#define CISELECTION_H

#include <QWidget>

namespace Ui {
  class CISelection;
}

class CISelection : public QWidget
{
  Q_OBJECT

public:
  enum
  {
    USE_DBUS,
    USE_SHELL_COMMAND
  };

  explicit CISelection(QWidget *parent = 0);
  ~CISelection();
  int selectionState() const;
  QString shellCommand() const;

private:
  Ui::CISelection *ui;
};

#endif // CISELECTION_H

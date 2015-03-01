#ifndef SETTINGSDIALOG_H
#define SETTINGSDIALOG_H

#include <QDialog>
#include <QVBoxLayout>
#include "CISelection.h"

namespace Ui {
  class SettingsDialog;
}

class SettingsDialog : public QDialog
{
  Q_OBJECT

public:
  explicit SettingsDialog(QWidget *parent = 0);
  ~SettingsDialog();

private:
  Ui::SettingsDialog *ui;
  QVBoxLayout *locktab_layout;
  QVBoxLayout *suspendtab_layout;
  QVBoxLayout *hibernatetab_layout;
  QVBoxLayout *logouttab_layout;
  QVBoxLayout *powerofftab_layout;
  CISelection *locktab_ci;
  CISelection *suspendtab_ci;
  CISelection *hibernatetab_ci;
  CISelection *logouttab_ci;
  CISelection *powerofftab_ci;
};

#endif // SETTINGSDIALOG_H

#include "SettingsDialog.h"
#include "ui_SettingsDialog.h"


SettingsDialog::SettingsDialog(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::SettingsDialog)
{
  ui->setupUi(this);

  locktab_layout = new QVBoxLayout;
  locktab_ci = new CISelection;
  locktab_layout->addWidget(locktab_ci);
  ui->tab_lock->setLayout(locktab_layout);

  suspendtab_layout = new QVBoxLayout;
  suspendtab_ci = new CISelection;
  suspendtab_layout->addWidget(suspendtab_ci);
  ui->tab_suspend->setLayout(suspendtab_layout);

  hibernatetab_layout = new QVBoxLayout;
  hibernatetab_ci = new CISelection;
  hibernatetab_layout->addWidget(hibernatetab_ci);
  ui->tab_hibernate->setLayout(hibernatetab_layout);

  logouttab_layout = new QVBoxLayout;
  logouttab_ci = new CISelection;
  logouttab_layout->addWidget(logouttab_ci);
  ui->tab_logout->setLayout(logouttab_layout);

  powerofftab_layout = new QVBoxLayout;
  powerofftab_ci = new CISelection;
  powerofftab_layout->addWidget(powerofftab_ci);
  ui->tab_poweroff->setLayout(powerofftab_layout);
}

SettingsDialog::~SettingsDialog()
{
  delete ui;
}

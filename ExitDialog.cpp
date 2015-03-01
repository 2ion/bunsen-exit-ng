#include "ExitDialog.h"
#include "ui_ExitDialog.h"

ExitDialog::ExitDialog(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::ExitDialog)
{
  ui->setupUi(this);

  ui->button_lock->setIcon(QIcon::fromTheme("system-lock-screen"));
  ui->button_suspend->setIcon(QIcon::fromTheme("system-suspend"));
  ui->button_hibernate->setIcon(QIcon::fromTheme("system-hibernate"));
  ui->button_logout->setIcon(QIcon::fromTheme("system-log-out"));
  ui->button_poweroff->setIcon(QIcon::fromTheme("system-shutdown"));

  connect(ui->button_lock, SIGNAL(clicked()), this, SLOT(input_lock()));
  connect(ui->button_suspend, SIGNAL(clicked()), this, SLOT(input_suspend()));
  connect(ui->button_hibernate, SIGNAL(clicked()), this, SLOT(input_hibernate()));
  connect(ui->button_logout, SIGNAL(clicked()), this, SLOT(input_logout()));
  connect(ui->button_poweroff, SIGNAL(clicked()), this, SLOT(input_poweroff()));
}

ExitDialog::~ExitDialog()
{
  delete ui;
}

void ExitDialog::input_lock(void)
{
  done(INPUT_LOCK);
}

void ExitDialog::input_suspend(void)
{
  done(INPUT_SUSPEND);
}

void ExitDialog::input_hibernate(void)
{
  done(INPUT_HIBERNATE);
}

void ExitDialog::input_logout(void)
{
  done(INPUT_LOGOUT);
}

void ExitDialog::input_poweroff(void)
{
  done(INPUT_POWEROFF);
}

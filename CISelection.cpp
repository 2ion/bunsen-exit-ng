#include "CISelection.h"
#include "ui_CISelection.h"

CISelection::CISelection(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::CISelection)
{
  ui->setupUi(this);
}

CISelection::~CISelection()
{
  delete ui;
}

int CISelection::selectionState() const
{
  return ui->radio_systemd->isChecked() ? USE_DBUS : USE_SHELL_COMMAND;
}

QString CISelection::shellCommand() const
{
  return ui->lineEdit_shellcommand->text();
}

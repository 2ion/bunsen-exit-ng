#ifndef EXITDIALOG_H
#define EXITDIALOG_H

#include <QDialog>

namespace Ui {
  class ExitDialog;
}

class ExitDialog : public QDialog
{
  Q_OBJECT

public:
  enum { INPUT_LOCK = 0,
         INPUT_SUSPEND = 1,
         INPUT_HIBERNATE = 2,
         INPUT_LOGOUT = 3,
         INPUT_POWEROFF = 4
       };
  explicit ExitDialog(QWidget *parent = 0);
  ~ExitDialog();

public slots:
  void input_lock(void);
  void input_suspend(void);
  void input_hibernate(void);
  void input_logout(void);
  void input_poweroff(void);

private:
  Ui::ExitDialog *ui;
    void input_end(int);

};

#endif // EXITDIALOG_H

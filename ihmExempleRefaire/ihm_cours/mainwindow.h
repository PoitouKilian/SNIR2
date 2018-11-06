#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButtonLinux_clicked();

    void on_pushButtonWindows_clicked();

    void on_pushButtonOSXLion_clicked();

    void on_radioButtonWindows_clicked();

    void on_radioButtonOSXLion_clicked();

    void on_radioButtonLinux_clicked();

    void on_checkBoxLinux_stateChanged(int arg1);

    void on_checkBoxOSXLion_stateChanged(int arg1);

    void on_checkBoxWindows_stateChanged(int arg1);

    void on_comboBoxOS_currentTextChanged(const QString &arg1);

    void on_lineEditEcriture_textChanged(const QString &arg1);

    void on_actionJava_triggered();

    void on_actionC_triggered();

    void on_actionCpp_triggered();

    void on_actionPHP_triggered();

    void on_actionJavascript_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

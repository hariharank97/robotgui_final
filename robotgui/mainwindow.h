#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class mainwindow;
}

class mainwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit mainwindow(QWidget *parent = nullptr);
    ~mainwindow();

private slots:
    void on_actionNew_Program_triggered();

    void on_actionOpen_Program_triggered();

    void on_actionSave_triggered();

    void on_actionSave_As_triggered();

    void on_actionExit_triggered();

    void on_actionCUt_triggered();

    void on_actionCopy_triggered();

    void on_actionPaste_triggered();

    void on_actionUndo_triggered();

    void on_actionRedo_triggered();

    void on_actionAbout_this_Software_triggered();

    void on_pushButton_9_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_spinBox_valueChanged(int arg1);

    void on_label_4_windowTitleChanged(const QString &title);

    void on_pushButton_5_clicked();

private:
    Ui::mainwindow *ui;
    QString file_path_;
};

#endif // MAINWINDOW_H

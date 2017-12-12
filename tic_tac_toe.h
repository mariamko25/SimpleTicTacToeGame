#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

#include <QMainWindow>

namespace Ui {
class tic_tac_toe;
}

class tic_tac_toe : public QMainWindow
{
    Q_OBJECT

public:
    explicit tic_tac_toe(QWidget *parent = 0);
    ~tic_tac_toe();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

private:
    Ui::tic_tac_toe *ui;
    int usr;
};

#endif // TIC_TAC_TOE_H

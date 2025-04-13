#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:

    void on_btnOkay_clicked();

    void on_btnMain_clicked();

    void on_btnSide_clicked();

    void on_btnDrink_clicked();

    void on_btnPizza_clicked();

    void on_btnHamburger_clicked();

    void on_btnBurrito_clicked();

    void on_btnHotdog_clicked();

    void on_btnOnionRings_clicked();

    void on_btnFries_clicked();

    void on_btnChurro_clicked();

    void on_btnChickenNuggets_clicked();

    void on_btnSoda_clicked();

    void on_btnLemonade_clicked();

    void on_btnIcedTea_clicked();

    void on_btnCoffee_clicked();

    void on_btnLogout_clicked();

    void on_btnDone_clicked();

    void on_btnNew_clicked();



    void on_btnDelete_clicked();


    void on_btnBack_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

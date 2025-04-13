#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QApplication>
#include <vector>
#include <string>
#include <Qstring>
#include <QListWidgetItem>
#include <QPixmap>
#include <QIcon>

using namespace std;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);
    ui->btnChickenNuggets->setIcon(QIcon(":/new/prefix1/Chicken Nugget.png"));
    ui->btnChurro->setIcon(QIcon(":/new/prefix1/Churros.png"));
    ui->btnPizza->setIcon(QIcon(":/new/prefix1/Pizza.png"));
    ui->btnOnionRings->setIcon(QIcon(":/new/prefix1/Onion rings.png"));
    ui->btnFries->setIcon(QIcon(":/new/prefix1/Fries.png"));
    ui->btnHamburger->setIcon(QIcon(":/new/prefix1/Burger.png"));
    ui->btnHotdog->setIcon(QIcon(":/new/prefix1/Hot dog.png"));
    ui->btnCoffee->setIcon(QIcon(":/new/prefix1/Coffee.png"));
    ui->btnLemonade->setIcon(QIcon(":/new/prefix1/lemon.png"));
    ui->btnSoda->setIcon(QIcon(":/new/prefix1/pepsi.png"));
    ui->btnBurrito->setIcon(QIcon(":/new/prefix1/Burritos.png"));
    ui->btnIcedTea->setIcon(QIcon(":/new/prefix1/Icetea.png"));
    ui->editPin->setPlaceholderText("Enter your Pin");

    QPixmap pixmap(":/new/prefix1/Store_logo.png");

    // Resize the pixmap to fit within 100x100 pixels while keeping aspect ratio
    QPixmap scaledPixmap = pixmap.scaled(250, 250, Qt::KeepAspectRatio);

    // Set the resized pixmap to the label
    ui->label_logo->setPixmap(scaledPixmap);

    // Optionally, center the image within the label
    ui->label_logo->setAlignment(Qt::AlignCenter);

    // Set the position and size of the label
    ui->label_logo->setGeometry(250, 10, 250, 250);  // Set position and size
}

struct item
{
    string itemName;
    float itemPrice;
};
int itemNum;
float Total=0;

vector<item> v;

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnOkay_clicked()
{

    QString pin[]={"123", "456", "789"};

    QString uPin = ui->editPin->text();

    for (int i=0; i < pin->length(); i++){
        if(uPin == pin[i]){
            ui->stackedWidget->setCurrentIndex(1);
            break;

        }
        else {ui->labelWrong->setText("Please try again");

        }}


}



void MainWindow::on_btnMain_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(0);
}


void MainWindow::on_btnSide_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(1);
}


void MainWindow::on_btnDrink_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(2);
}


void MainWindow::on_btnPizza_clicked()
{
    item ip;
    ip.itemName = "Pizza";
    ip.itemPrice = 8.99;
    Total += ip.itemPrice;
    ui->labTotal->setText(QString::number(Total)); ui->labelTotal2->setText(QString::number(Total));
    v.push_back(ip);
    ui->listWidget->addItem(QString::fromStdString(v[itemNum].itemName) + "  ----  8.99");
    itemNum++;
}


void MainWindow::on_btnHamburger_clicked()
{
    item ip;
    ip.itemName = "Hamburger";
    ip.itemPrice = 5.99;
    Total += ip.itemPrice;
    ui->labTotal->setText(QString::number(Total)); ui->labelTotal2->setText(QString::number(Total));
    v.push_back(ip);
    ui->listWidget->addItem(QString::fromStdString(v[itemNum].itemName) + "  ----  5.99");
    itemNum++;
}


void MainWindow::on_btnBurrito_clicked()
{
    item ip;
    ip.itemName = "Burrito";
    ip.itemPrice = 3.99;
    Total += ip.itemPrice;
    ui->labTotal->setText(QString::number(Total)); ui->labelTotal2->setText(QString::number(Total));
    v.push_back(ip);
    ui->listWidget->addItem(QString::fromStdString(v[itemNum].itemName) + "  ----  3.99");
    itemNum++;
}


void MainWindow::on_btnHotdog_clicked()
{
    item ip;
    ip.itemName = "Hotdog";
    ip.itemPrice = 3.75;
    Total += ip.itemPrice;
    ui->labTotal->setText(QString::number(Total)); ui->labelTotal2->setText(QString::number(Total));
    v.push_back(ip);
    ui->listWidget->addItem(QString::fromStdString(v[itemNum].itemName) + "  ----  3.75");
    itemNum++;
}


void MainWindow::on_btnOnionRings_clicked()
{
    item ip;
    ip.itemName = "OnionRings";
    ip.itemPrice = 2.75;
    Total += ip.itemPrice;
    ui->labTotal->setText(QString::number(Total)); ui->labelTotal2->setText(QString::number(Total));
    v.push_back(ip);
    ui->listWidget->addItem(QString::fromStdString(v[itemNum].itemName) + "  ----  2.75");
    itemNum++;
}


void MainWindow::on_btnFries_clicked()
{
    item ip;
    ip.itemName = "Fries";
    ip.itemPrice = 2.75;
    Total += ip.itemPrice;
    ui->labTotal->setText(QString::number(Total)); ui->labelTotal2->setText(QString::number(Total));
    v.push_back(ip);
    ui->listWidget->addItem(QString::fromStdString(v[itemNum].itemName) + "  ----  2.75");
    itemNum++;

}


void MainWindow::on_btnChurro_clicked()
{
    item ip;
    ip.itemName = "Churro";
    ip.itemPrice = 2.00;
    Total += ip.itemPrice;
    ui->labTotal->setText(QString::number(Total)); ui->labelTotal2->setText(QString::number(Total));
    v.push_back(ip);
    ui->listWidget->addItem(QString::fromStdString(v[itemNum].itemName) + "  ----  2.00");
    itemNum++;
}


void MainWindow::on_btnChickenNuggets_clicked()
{

    item ip;
    ip.itemName = "ChickenNuggets";
    ip.itemPrice = 3.50;
    Total += ip.itemPrice;
    ui->labTotal->setText(QString::number(Total)); ui->labelTotal2->setText(QString::number(Total));
    v.push_back(ip);
    ui->listWidget->addItem(QString::fromStdString(v[itemNum].itemName) + "  ----  3.50");
    itemNum++;
}


void MainWindow::on_btnSoda_clicked()
{
    item ip;
    ip.itemName = "Soda";
    ip.itemPrice = 2.75;
    Total += ip.itemPrice;
    ui->labTotal->setText(QString::number(Total)); ui->labelTotal2->setText(QString::number(Total));
    v.push_back(ip);
    ui->listWidget->addItem(QString::fromStdString(v[itemNum].itemName) + "  ----  2.75");
    itemNum++;
}


void MainWindow::on_btnLemonade_clicked()
{
    item ip;
    ip.itemName = "Lemonade";
    ip.itemPrice = 2.99;
    Total += ip.itemPrice;
    ui->labTotal->setText(QString::number(Total)); ui->labelTotal2->setText(QString::number(Total));
    v.push_back(ip);
      ui->listWidget->addItem(QString::fromStdString(v[itemNum].itemName) + "  ----  2.99");
    itemNum++;
}


void MainWindow::on_btnIcedTea_clicked()
{
    item ip;
    ip.itemName = "IcedTea";
    ip.itemPrice = 2.85;
    Total += ip.itemPrice;
    ui->labTotal->setText(QString::number(Total)); ui->labelTotal2->setText(QString::number(Total));
    v.push_back(ip);
    ui->listWidget->addItem(QString::fromStdString(v[itemNum].itemName) + "  ----  2.85");
    itemNum++;
}

void MainWindow::on_btnCoffee_clicked()
{
    item ip;
    ip.itemName = "Coffee";
    ip.itemPrice = 5.75;
    Total += ip.itemPrice;
    ui->labTotal->setText(QString::number(Total)); ui->labelTotal2->setText(QString::number(Total));
    v.push_back(ip);
    ui->listWidget->addItem(QString::fromStdString(v[itemNum].itemName) + "  ----  5.75");
    itemNum++;
}


void MainWindow::on_btnLogout_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
     ui->editPin->clear();
     ui->labelWrong->clear();
}


void MainWindow::on_btnDone_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);

}


void MainWindow::on_btnNew_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    ui->listWidget->clear();
    Total = 0.00;
    ui->labTotal->setText(QString::number(Total)); ui->labelTotal2->setText(QString::number(Total));
}


void MainWindow::on_btnDelete_clicked()
{
    ui->listWidget->takeItem(0);
}




void MainWindow::on_btnBack_clicked()
{
      ui->stackedWidget->setCurrentIndex(1);
}


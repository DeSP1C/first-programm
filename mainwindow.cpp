#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_15_clicked()
{
  ui->lcdNumber_7->display(ui->lcdNumber_7->intValue()+1);
  ui->lcdNumber_4->display(ui->lcdNumber_4->intValue()-1);
  int s = ui->lcdNumber_7->intValue();
    if(s == 10){
       ui->lcdNumber_7->display(0);
  }
    if(s == -1) {
         ui->lcdNumber_7->display(9);
    }
    int k = ui->lcdNumber_4->intValue();
      if(k == 10){
         ui->lcdNumber_4->display(0);
    }
      if(k == -1) {
           ui->lcdNumber_4->display(9);
      }
}

void MainWindow::on_pushButton_clicked()
{
    ui->lcdNumber->display(ui->lcdNumber->intValue()+1);
    ui->lcdNumber_3->display(ui->lcdNumber_3->intValue()-1);
    int s = ui->lcdNumber->intValue();
      if(s == 10){
         ui->lcdNumber->display(0);
    }
      if(s == -1) {
           ui->lcdNumber->display(9);
      }
      int k = ui->lcdNumber_3->intValue();
        if(k == 10){
           ui->lcdNumber_3->display(0);
      }
        if(k == -1) {
             ui->lcdNumber_3->display(9);
        }
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->lcdNumber_2->display(ui->lcdNumber_2->intValue()+1);
    ui->lcdNumber->display(ui->lcdNumber->intValue()-1);
    int s = ui->lcdNumber_2->intValue();
      if(s == 10){
         ui->lcdNumber_2->display(0);
    }
      if(s == -1) {
           ui->lcdNumber_2->display(9);
}
           int k = ui->lcdNumber->intValue();
             if(k == 10){
                ui->lcdNumber->display(0);
           }
             if(k == -1) {
                  ui->lcdNumber->display(9);
             }
      }

void MainWindow::on_pushButton_3_clicked()
{
    ui->lcdNumber_3->display(ui->lcdNumber_3->intValue()+1);
    ui->lcdNumber_5->display(ui->lcdNumber_5->intValue()-1);
    int s = ui->lcdNumber_3->intValue();
      if(s == 10){
         ui->lcdNumber_3->display(0);
    }
      if(s == -1) {
           ui->lcdNumber_3->display(9);
      }
      int k = ui->lcdNumber_5->intValue();
        if(k == 10){
           ui->lcdNumber_5->display(0);
      }
        if(k == -1) {
             ui->lcdNumber_5->display(9);
        }
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->lcdNumber_4->display(ui->lcdNumber_4->intValue()+1);
    ui->lcdNumber_2->display(ui->lcdNumber_2->intValue()-1);
    int s = ui->lcdNumber_4->intValue();
      if(s == 10){
         ui->lcdNumber_4->display(0);
    }
      if(s == -1) {
           ui->lcdNumber_4->display(9);
      }
      int k = ui->lcdNumber_2->intValue();
        if(k == 10){
           ui->lcdNumber_2->display(0);
      }
        if(k == -1) {
             ui->lcdNumber_2->display(9);
        }
}

void MainWindow::on_pushButton_9_clicked()
{
    ui->lcdNumber_5->display(ui->lcdNumber_5->intValue()+1);
    ui->lcdNumber_7->display(ui->lcdNumber_7->intValue()-1);
    int s = ui->lcdNumber_5->intValue();
      if(s == 10){
         ui->lcdNumber_5->display(0);
    }
      if(s == -1) {
           ui->lcdNumber_5->display(9);
      }
int k = ui->lcdNumber_7->intValue();
  if(k == 10){
     ui->lcdNumber_7->display(0);
}
  if(k == -1) {
       ui->lcdNumber_7->display(9);
  }
}



void MainWindow::on_pushButton_16_clicked()
{
    ui->lcdNumber_7->display(ui->lcdNumber_7->intValue()-1);
    ui->lcdNumber_5->display(ui->lcdNumber_5->intValue()+1);
    int s = ui->lcdNumber_7->intValue();
      if(s == 10){
         ui->lcdNumber_7->display(0);
    }
      if(s == -1) {
           ui->lcdNumber_7->display(9);
      }
      int k = ui->lcdNumber_5->intValue();
        if(k == 10){
           ui->lcdNumber_5->display(0);
      }
        if(k == -1) {
             ui->lcdNumber_5->display(9);
        }
}

void MainWindow::on_pushButton_5_clicked()
{
    ui->lcdNumber->display(ui->lcdNumber->intValue()-1);
    ui->lcdNumber_2->display(ui->lcdNumber_2->intValue()+1);
    int s = ui->lcdNumber->intValue();
      if(s == 10){
         ui->lcdNumber->display(0);
    }
      if(s == -1) {
           ui->lcdNumber->display(9);
      }
      int k = ui->lcdNumber_2->intValue();
        if(k == 10){
           ui->lcdNumber_2->display(0);
      }
        if(k == -1) {
             ui->lcdNumber_2->display(9);
        }
}

void MainWindow::on_pushButton_6_clicked()
{
    ui->lcdNumber_2->display(ui->lcdNumber_2->intValue()-1);
    ui->lcdNumber_4->display(ui->lcdNumber_4->intValue()+1);
    int s = ui->lcdNumber_4->intValue();
      if(s == 10){
         ui->lcdNumber_4->display(0);
    }
      if(s == -1) {
           ui->lcdNumber_4->display(9);
      }
      int k = ui->lcdNumber_2->intValue();
        if(k == 10){
           ui->lcdNumber_2->display(0);
      }
        if(k == -1) {
             ui->lcdNumber_2->display(9);
        }
}

void MainWindow::on_pushButton_7_clicked()
{
   ui->lcdNumber_3->display(ui->lcdNumber_3->intValue()-1);
    ui->lcdNumber->display(ui->lcdNumber->intValue()+1);
    int s = ui->lcdNumber_3->intValue();
      if(s == 10){
         ui->lcdNumber_3->display(0);
    }
      if(s == -1) {
           ui->lcdNumber_3->display(9);
      }
      int k = ui->lcdNumber->intValue();
        if(k == 10){
           ui->lcdNumber->display(0);
      }
        if(k == -1) {
             ui->lcdNumber->display(9);
        }
}

void MainWindow::on_pushButton_8_clicked()
{
    ui->lcdNumber_4->display(ui->lcdNumber_4->intValue()-1);
    ui->lcdNumber_7->display(ui->lcdNumber_7->intValue()+1);
    int s = ui->lcdNumber_4->intValue();
      if(s == 10){
         ui->lcdNumber_4->display(0);
    }
      if(s == -1) {
           ui->lcdNumber_4->display(9);
      }
      int k = ui->lcdNumber_7->intValue();
        if(k == 10){
           ui->lcdNumber_7->display(0);
      }
        if(k == -1) {
             ui->lcdNumber_7->display(9);
        }
}

void MainWindow::on_pushButton_10_clicked()
{
    ui->lcdNumber_5->display(ui->lcdNumber_5->intValue()-1);
    ui->lcdNumber_3->display(ui->lcdNumber_3->intValue()+1);
    int s = ui->lcdNumber_5->intValue();
      if(s == 10){
         ui->lcdNumber_5->display(0);
    }
      if(s == -1) {
           ui->lcdNumber_5->display(9);
      }
      int k = ui->lcdNumber_3->intValue();
        if(k == 10){
           ui->lcdNumber_3->display(0);
      }
        if(k == -1) {
             ui->lcdNumber_3->display(9);
        }
}


void MainWindow::on_pushButton_14_clicked()
{
    int a = ui->lcdNumber->intValue();
            int b = ui->lcdNumber->intValue();
            int c = ui->lcdNumber->intValue();
            int d = ui->lcdNumber->intValue();
            int f = ui->lcdNumber->intValue();
            int g = ui->lcdNumber->intValue();
    if(n != 0) {
        if(a == 0 && b == 0 && c == 0 && d == 0 && f == 0 && g == 0 ){
            ui->label->setText("You win!");
        }
        else {ui->label->setText("You need to make it so that it's 0");
        }
    }

}

void MainWindow::on_pushButton_13_clicked()
{
ui->lcdNumber_7->display(7);
ui->lcdNumber->display(8);
ui->lcdNumber_2->display(6);
ui->lcdNumber_3->display(9);
ui->lcdNumber_4->display(3);
ui->lcdNumber_5->display(7);
n++;
}

void MainWindow::on_pushButton_11_clicked()
{
    p++;
    if(p == 6) {
        ui->lcdNumber_7->display(0);
        ui->lcdNumber->display(0);
        ui->lcdNumber_2->display(0);
        ui->lcdNumber_3->display(0);
        ui->lcdNumber_4->display(0);
        ui->lcdNumber_5->display(0);
    }
}

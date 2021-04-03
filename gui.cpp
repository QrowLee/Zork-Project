#include "gui.h"
#include "ui_gui.h"
#include "inventory.h"

Gui::Gui(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Gui)
{
    ui->setupUi(this);
}

Gui::~Gui()
{
    delete ui;
}


void Gui::on_North_clicked()
{

}

void Gui::on_East_clicked()
{

}

void Gui::on_South_clicked()
{

}

void Gui::on_West_clicked()
{

}

void Gui::on_Inventory_clicked()
{
  //Model approach
  //Create an object of the inventory class
  Inventory Inventory;
  Inventory.setModal(true); //Setting it as true
  Inventory.exec();//Creating the window from the gui
}

void Gui::on_UseButton_clicked()
{

}

void Gui::on_PickUpButton_clicked()
{

}

void Gui::on_Map_clicked()
{

}

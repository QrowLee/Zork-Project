#include "gui.h"
#include "ui_gui.h"



//class Command;

Gui::Gui(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Gui)
{
    ui->setupUi(this);
    zorkul = new ZorkUL;
}

Gui::~Gui()
{
    delete ui;
}


void Gui::on_North_clicked()
{
    ui->output->append(QString::fromStdString(zorkul->go("north")));
}

void Gui::on_East_clicked()
{
 ui->output->append(QString::fromStdString(zorkul->go("east")));
}

void Gui::on_South_clicked()
{
 ui->output->append(QString::fromStdString(zorkul->go("south")));
}

void Gui::on_West_clicked()
{
  ui->output->append(QString::fromStdString(zorkul->go("west")));
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
 Map Map;
 Map.setModal(true);
 Map.exec();
}





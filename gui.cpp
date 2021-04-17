#include "gui.h"
#include "ui_gui.h"
#include "inventory.h"



//class Command;

Gui::Gui(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Gui)
{
    ui->setupUi(this);
    zorkul = new ZorkUL;
    character = zorkul->getChar();
    ui->output->append(QString::fromStdString(zorkul->returnCurrentRoom()->longDescription()));
    ui->oxygenbar->setValue(100);

}

Gui::~Gui()
{
    delete ui;
}


void Gui::on_North_clicked()
{
 ui->output->append(QString::fromStdString(zorkul->go("north")));
 if(zorkul->isDead()) QApplication::quit();
 on_oxygenbar_valueChanged(character->getOxygen());
}

void Gui::on_East_clicked()
{
 ui->output->append(QString::fromStdString(zorkul->go("east")));
 if(zorkul->isDead()) QApplication::quit();
 on_oxygenbar_valueChanged(character->getOxygen());
}

void Gui::on_South_clicked()
{
 ui->output->append(QString::fromStdString(zorkul->go("south")));
 if(zorkul->isDead()) QApplication::quit();
 on_oxygenbar_valueChanged(character->getOxygen());

}

void Gui::on_West_clicked()
{
  ui->output->append(QString::fromStdString(zorkul->go("west")));
  if(zorkul->isDead()) QApplication::quit();
  on_oxygenbar_valueChanged(character->getOxygen());

}

void Gui::on_Inventory_clicked()
{
  //Model approach
  //Create an object of the inventory class
  Inventory inv(this);
  inv.setModal(true); //Setting it as true
  inv.show();
  inv.exec();//Creating the window from the gui
}

void Gui::on_UseButton_clicked()
{

}

void Gui::on_PickUpButton_clicked()
{
 Room* currentRoom = zorkul->returnCurrentRoom();
 if (!currentRoom->getItemsInRoom().empty()){
     for (Item i : currentRoom->getItemsInRoom()){
         character->addItem(i);
     }
     currentRoom->removeItemFromRoom();

 }else{
   ui->output->append("No items in room");
 }
}

void Gui::on_Map_clicked()
{
 Map Map;
 Map.setModal(true);
 Map.exec();
}

void Gui::on_oxygenbar_valueChanged(int value)
{
    ui->oxygenbar->setValue(value);
}

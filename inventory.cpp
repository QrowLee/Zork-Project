#include "inventory.h"
#include "ui_inventory.h"

Inventory::Inventory(Gui *parent) :
    QDialog(parent),
    ui(new Ui::Inventory)
{
    mainWin = parent;
    ui->setupUi(this);
    ui->InventoryDisplay->append(QString::fromStdString(mainWin->character->longDescription()));
}

Inventory::~Inventory()
{
    delete ui;
}


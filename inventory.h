#ifndef INVENTORY_H
#define INVENTORY_H

#include <QDialog>
#include "gui.h"

namespace Ui {
class Inventory;
}

class Inventory : public QDialog
{
    Q_OBJECT

public:
    explicit Inventory(Gui *parent);
    ~Inventory();

private:
    Ui::Inventory *ui;
    Gui *mainWin;

};

#endif // INVENTORY_H

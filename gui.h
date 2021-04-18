#ifndef GUI_H
#define GUI_H

#include <QMainWindow>
#include "map.h"
#include <iostream>
#include "zorkul.h"
#include "character.h"
#include "dead.h"
QT_BEGIN_NAMESPACE
namespace Ui { class Gui; }
QT_END_NAMESPACE

class Gui : public QMainWindow
{
    Q_OBJECT

public:
    Gui(QWidget *parent = nullptr);
    ~Gui();
    void makeDeathScreen();

private slots:
    void on_North_clicked();

    void on_East_clicked();

    void on_South_clicked();

    void on_West_clicked();

    void on_Inventory_clicked();

    void on_UseButton_clicked();

    void on_PickUpButton_clicked();

    void on_Map_clicked();

    void on_oxygenbar_valueChanged(int value);

private:
    Ui::Gui *ui;
    ZorkUL *zorkul;
    Character *character;
    friend class Inventory;
    bool inO2 = false;
};
#endif // GUI_H

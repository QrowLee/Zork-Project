#ifndef GUI_H
#define GUI_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Gui; }
QT_END_NAMESPACE

class Gui : public QMainWindow
{
    Q_OBJECT

public:
    Gui(QWidget *parent = nullptr);
    ~Gui();

private slots:
    void on_North_clicked();

    void on_East_clicked();

    void on_South_clicked();

    void on_West_clicked();

    void on_Inventory_clicked();

    void on_UseButton_clicked();

    void on_PickUpButton_clicked();

    void on_Map_clicked();

private:
    Ui::Gui *ui;
};
#endif // GUI_H

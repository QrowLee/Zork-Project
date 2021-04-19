#ifndef CONSUMABLE_H
#define CONSUMABLE_H
#include <map>
#include <string>
#include <iostream>
#include "zorkul.h"
#include "character.h"


class consumable  : public Item
{
protected:
//    string description;
//    string longDescription;
    int Oxygen;

public:
    consumable(string description, int Oxygen);
    int getOxygen();
    void setOxygen(int oxygenLevel);
    int useOxygen(int capacity);
};

#endif // CONSUMABLE_H

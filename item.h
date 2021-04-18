#ifndef ITEM_H_
#define ITEM_H_
#include "tool.h"
#include <map>
#include <string>
#include <iostream>
using namespace std;

class Item {
protected:
    string description;
    string longDescription;
    //float value;

public:
    bool operator==(Item& other);
    Item ();
    Item(string description);
    string getShortDescription();
    string getLongDescription();
    //float getValue();
    //void setValue(float value);
};


#endif /*ITEM_H_*/

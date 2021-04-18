#include "item.h"


Item::Item() {
    description = "aString";
}

Item::Item(string aDescription) {
    description = aDescription;
}

bool Item::operator==(Item& other){
    return other.getShortDescription() == description;
}


string Item::getShortDescription()
{
    return description;
}

string Item::getLongDescription()
{
    return " item(s), " + description + ".\n";
}

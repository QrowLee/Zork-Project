#include "item.h"


Item::Item() {
    description = "aString";
}

Item::Item(string aDescription) {
    description = aDescription;
}


string Item::getShortDescription()
{
    return description;
}

string Item::getLongDescription()
{
    return " item(s), " + description + ".\n";
}

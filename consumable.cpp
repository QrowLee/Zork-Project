#include "consumable.h"

consumable::consumable(string inDescription, int iOxygen) {
    description = inDescription;
    Oxygen = iOxygen;
}

consumable::~consumable(){
cout <<"Some String"<< endl;
}

void consumable::setOxygen(int oxygenLevel){
    Oxygen = oxygenLevel;
}
int consumable::getOxygen(){
return Oxygen;
}
int consumable::useOxygen(int capacity){
if(capacity < Oxygen){
Oxygen = Oxygen - capacity;
return capacity;
}
else{

return Oxygen;
delete this;
}
}


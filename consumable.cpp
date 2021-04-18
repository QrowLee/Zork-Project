#include "consumable.h"

consumable::consumable(string description, int iOxygen):Item(description){
    Oxygen = iOxygen;
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


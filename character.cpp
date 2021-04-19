#include "character.h"

bool Stupid = true;

Character::Character(string description) {
    this->description = description;
    oxygen = 100;
}

Character::~Character() {

}

void Character::addItem(Item &item) {
    itemsInCharacter.push_back(item);
}

void Character::addItem(Item *item) {
    itemsInCharacter.push_back(*item);
    delete item;
}

int Character::getOxygen(){
    return oxygen;
}

int Character::getSize(){
    return itemsInCharacter.size();
}

bool Character::getItem(string name){
    for(int i=0; i<getSize(); i++){
       if (itemsInCharacter[i].getShortDescription() == name) {
           return true;
       }
    }
    return false ;
}

string Character::longDescription()
{
  string ret = this->description;
  ret += "\n Item list:\n";
  for (vector<Item>::iterator i = itemsInCharacter.begin(); i != itemsInCharacter.end(); i++)
    ret += "\t"+ (*i).getLongDescription() + "\n";
  return ret;
}

bool Character::breathe() {
 if (oxygen <= 0){
    return false;
 }else{
   oxygen = oxygen - 20;
   return true;
 }
}

//void Character::useConsumable(consumable a) {
//    oxygen = oxygen + a->useOxygen();
//}



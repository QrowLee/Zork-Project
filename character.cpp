#include "character.h"
int oxygen = 100;
Character::Character(string description) {
    this->description = description;
}
~Character::Character() {
    delete description;
    delete itemsInCharacter;
    delete oxygen;
}

void Character::addItem(Item &item) {
    itemsInCharacter.push_back(item);
}
void Character::addItem(Item *item) {
    itemsInCharacter.push_back(*item);
    delete item;
}
string Character::longDescription()
{
  string ret = this->description;
  ret += "\n Item list:\n";
  for (vector<Item>::iterator i = itemsInCharacter.begin(); i != itemsInCharacter.end(); i++)
    ret += "\t"+ (*i).getLongDescription() + "\n";
  return ret;
}

bool breathe() {
 if (oxygen <= 0){
    return false;
 }else{
   oxygen = oxygen - 20;
   return true;
 }
}





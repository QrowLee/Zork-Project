
#ifndef CHARACTER_H_
#define CHARACTER_H_
#include "item.h"
#include <string>
using namespace std;
#include <vector>
using std::vector;


class Character {
private:
    string description;
    vector < Item > itemsInCharacter;
    int oxygen;


public:
   void addItem(Item &item);
   void addItem(Item *item);
    Character(string description);
    string shortDescription();
    string longDescription();
    bool breathe();
};

#endif /*CHARACTER_H_*/


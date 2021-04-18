
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
    int oxygen;
    vector < Item > itemsInCharacter;

public:
   void addItem(Item &item);
   void addItem(Item *item);
    Character(string description);
    ~Character();
    int getOxygen();
    string shortDescription();
    string longDescription();
    bool breathe();
    int getSize();
    bool getItem(string name);
};

#endif /*CHARACTER_H_*/


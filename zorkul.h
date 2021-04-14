#ifndef ZORKUL_H_
#define ZORKUL_H_
#include "character.h"
#include "room.h"
#include <iostream>
#include <string>
using namespace std;

class ZorkUL {
private:
    Room *currentRoom;
    Character *character;
    void createRooms();
    void createItems();
    void displayItems();
    string printWelcome();


public:
    ZorkUL();
    void play();
    void die();
    string go(string direction);
    Room* returnCurrentRoom();

};

#endif /*ZORKUL_H_*/


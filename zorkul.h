#ifndef ZORKUL_H_
#define ZORKUL_H_

#include "room.h"
#include <iostream>
#include <string>
using namespace std;

class ZorkUL {
private:
    Room *currentRoom;
    void createRooms();
    void createItems();
    void displayItems();
    string printWelcome();

public:
    ZorkUL();
    void play();
    string go(string direction);
    Room* returnCurrentRoom();
};

#endif /*ZORKUL_H_*/


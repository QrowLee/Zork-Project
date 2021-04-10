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
    string printWelcome();
    void createItems();
    void displayItems();

public:
    ZorkUL();
    void play();
    string go(string direction);
};

#endif /*ZORKUL_H_*/


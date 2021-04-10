#include <iostream>
using namespace std;
#include "zorkul.h"


ZorkUL::ZorkUL() {
    createRooms();
}

void ZorkUL::createRooms()  {
    Room *a, *b, *c, *d, *e, *f, *g, *h, *i, *j, *k;

    a = new Room("cabin");
        a->addItem(new Item("x", 1, 11));
        a->addItem(new Item("y", 2, 22));
    b = new Room("cafeteria");
        b->addItem(new Item("xx", 3, 33));
        b->addItem(new Item("yy", 4, 44));
    c = new Room("bridge");
    d = new Room("medbay");
    e = new Room("weapons1");
    f = new Room("engine2");
    g = new Room("weapons2");
    h = new Room("reactor");
    i = new Room("weapons2");
    j = new Room("storage");
    k = new Room("engine2");

//             (N, E, S, W)
    a->setExits(NULL, b, e, NULL);
    b->setExits(c, d, j, a);
    c->setExits(NULL, NULL, b, NULL);
    d->setExits(NULL, NULL, f, b);
    e->setExits(a, j, g, NULL);
    f->setExits(NULL, NULL, j, k);
    g->setExits(e, h, NULL, NULL);
    h->setExits(NULL, k, NULL, g);
    i->setExits(NULL, NULL, k, j);
    j->setExits(b, e, NULL, f);
    k->setExits(f, NULL, NULL, h);

        currentRoom = a;
}

/**
 *  Main play routine.  Loops until end of play.
 */
void ZorkUL::play() {
    printWelcome();

}


string ZorkUL::printWelcome() {
    return "start" +
     currentRoom->longDescription();
}

string ZorkUL::go(string direction) {
    //Make the direction lowercase
    //transform(direction.begin(), direction.end(), direction.begin(),:: tolower);
    //Move to the next room
    Room* nextRoom = currentRoom->nextRoom(direction);
    if (nextRoom == NULL)
        return("direction null");
    else
    {
        currentRoom = nextRoom;
        return currentRoom->longDescription();
    }
 }

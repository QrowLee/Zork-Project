#ifndef ROOM_H_
#define ROOM_H_

#include <map>
#include <string>
#include <vector>
#include "item.h"
using namespace std;
using std::vector;

class Room {

private:
    string description;
    map<string, Room*> exits;
    string exitString();
    vector <Item> itemsInRoom;


public:
    int numberOfItems();
    int isItemInRoom(string inString);
    void setExits(Room *north, Room *east, Room *south, Room *west);
    void removeItemFromRoom(int location);
    void addItem(Item *inItem);
    void removeItemFromRoom();
    string shortDescription();
    string longDescription();
    string displayItem();
    Room* nextRoom(string direction);
    Room(string description);
    vector <Item> getItemsInRoom();
};

#endif


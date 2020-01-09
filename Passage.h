//
// Created by vadim.malinovsky on 04/01/2020.
//

#ifndef DND_PASSAGE_H
#define DND_PASSAGE_H


#include <tr1/memory>
#include "Room.h"

class Room;

class Passage
{
public:
    enum Type { Free, DoorOpen, DoorClosed };
    Passage(std::tr1::shared_ptr<Room> room1, std::tr1::shared_ptr<Room> room2, Type type = Free)
    : type(type), room1(room1), room2(room2)
    {}

    Type GetType() { return type; };
private:
    std::tr1::shared_ptr<Room> room1;
    std::tr1::shared_ptr<Room> room2;

    Type type;
};

#endif //DND_PASSAGE_H

//
// Created by vadim.malinovsky on 04/01/2020.
//

#ifndef DND_ROOM_H
#define DND_ROOM_H

#include <string> // for string class
#include "Passage.h"
#include "Misc.h"

class Room
{
    public:
        Room(short id, std::string name, std::string descr, std::string color,
                std::string doorsColor)
        : id(id), name(name), descr(descr), color(color), doorsColor(doorsColor)
        {}

    const std::string &GetDescr() const {
       return descr;
    }

private:
        short id;
        std::string name;
        std::string descr;
        std::string color;
        std::string doorsColor;


};

#endif //DND_ROOM_H

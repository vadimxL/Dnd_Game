//
// Created by vadim.malinovsky on 04/01/2020.
//

#ifndef DND_PLAYER_H
#define DND_PLAYER_H

#include "Misc.h"
#include "Room.h"


class Player
{
public:
    Player(std::tr1::shared_ptr<Room> room)
    : room(room)
    {}

    Direction GetDir() const {
       return dir;
    }

    void SetDir(Direction dir) {
       Player::dir = dir;
    }

private:
    Direction dir;
    std::tr1::shared_ptr<Room> room;


};

#endif //DND_PLAYER_H

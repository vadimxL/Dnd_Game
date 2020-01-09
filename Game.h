//
// Created by vadim.malinovsky on 04/01/2020.
//

#ifndef DND_GAME_H
#define DND_GAME_H

#include "Player.h"

class Game
{
public:
    void Play();

    void AddPlayer(std::tr1::shared_ptr<Player> player) {
       player = player;
    }

private:
    std::tr1::shared_ptr<Player> player;
};

#endif //DND_GAME_H

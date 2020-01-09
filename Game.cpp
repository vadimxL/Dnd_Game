//
// Created by vadim.malinovsky on 04/01/2020.
//

typedef enum DndState { LOBBY_ROOM, HALL_ROOM } DndState;
static DndState state;

#include <string>
#include "Game.h"

void Game::Play()
   {
      Direction dir;
      std::string cmd;

      switch (state)
      {
         case LOBBY_ROOM:
            dir = player->GetDir();
            if (cmd == "left") player->SetDir(dir);
            if (cmd == "right") player->SetDir(dir);

            break;

         case HALL_ROOM:

            break;
      }
}

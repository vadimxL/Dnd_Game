#include <iostream>

#include "Room.h"
#include "Misc.h"
#include "Player.h"
#include "Game.h"


int main()
{
    // Create Game
    Game game;

    game.AddPlayer(player);
    game.Start();

    // Create lobby Room
    std::tr1::shared_ptr<Room>
            lobby(new Room(1, "Lobby", "The castle's lobby", "grey", "grey"));

    // Create hall Room
    std::tr1::shared_ptr<Room>
            hall(new Room(2, "The Hall", "The hall into the darkness", "grey", "black"));

    Player player(lobby);
    //Passage psg(lobby, hall);


    std::cout << "Hello, World!" << std::endl;
    return 0;
}
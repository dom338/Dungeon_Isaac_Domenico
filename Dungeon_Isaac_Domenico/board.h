#pragma once
#include <vector>
#include "Entity.h"

class Board
{

private:
    std::vector<std::vector<Entity>> _Board;

public:

    int test = 2;
    //Returns a vector with the entities representing the game board
    std::vector<std::vector<Entity>> GetBoard();

    void PrintBoard();
    //It initializes a default board map if the loading manager fails to do its work
    void InitDefaultBoard(int height, int width, player pl);
    void SetBoard(std::vector<std::vector<Entity>> newBoard);


    Board(/* args */);
    ~Board();
};
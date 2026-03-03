#include "Board.h"
#include <iostream>

std::vector<std::vector<Entity>> Board::GetBoard() {
    return _Board;
}
void Board::PrintBoard() {
    for (size_t i = 0; i < _Board.size(); i++)
    {
        std::vector<Entity> aux = _Board[i];
        for (size_t i = 0; i < aux.size(); i++)
        {
            std::cout << aux[i].Sprite;
        }
        std::cout << std::endl;
    }

}

void Board::InitDefaultBoard(int height, int width, player pl) {

    _Board.resize(height, std::vector<Entity>(width));

    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
            if (x == 0 || x == width - 1 || y == 0 || y == height - 1) {
                _Board[y][x].Sprite = '#';
            }
            else if (x == width / 2 && y == height / 2) {
                _Board[y][x] = pl;
            }
            else {
                _Board[y][x].Sprite = '.';
            }
        }
    }


}

void Board::SetBoard(std::vector<std::vector<Entity>> newBoard)
{
    _Board = newBoard;
}



Board::Board() {
}
Board::~Board() {

}
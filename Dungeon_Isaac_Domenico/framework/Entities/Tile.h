#pragma once
#include "Entiy.h"
#include "../Math.h"

class Tile
{
private:

public:
    char Sprite = ' ';
    Framework::Math::Vector2 OriginPosition;
    //Stores a pointer to the entity on the tile 
    Entity* PlaceHolder = nullptr;
    Tile(/* args */) = default;
    ~Tile() = default;
};
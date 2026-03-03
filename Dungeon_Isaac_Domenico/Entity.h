#pragma once
#include "Globals.h"
// ENtities with base parameters WALLS AND FREE SPACES wil be Base entities parameters || UPDATE: i will only use free spaces as the base entiity (: need to save where the walls are not base enntities
class Entity
{
private:

public:
    char Sprite = 'H';
    Entity(/* args */);
    ~Entity();
};


class Wall : public Entity
{
public:
    Wall();
    ~Wall();

private:

};


class player : public Entity
{
private:
	Vector2 Direction;
    
public:
    char Sprite = 'P';
    //Returns private vector2 direction with the current player input
	Vector2 GetDirectionInput();
    player(/* args */);
    ~player();
};
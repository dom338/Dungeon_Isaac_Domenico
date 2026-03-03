#include "Entity.h"
#include "Keyboard.h"

Entity::Entity() {

}
Entity::~Entity() {

}


Vector2 player::GetDirectionInput()
{
	Direction.x = 0;
	Direction.y = 0;

	if (IsWPressed()) {
		Direction.y = -1;
	}
	else if (IsSPressed()) {
		Direction.y = 1;
	}
	else if (IsAPressed()) {
		Direction.x = -1;
	}
	else if (IsDPressed()) {
		Direction.x = 1;
	}
	// No input = base direction 0,0


	return Direction;
}

player::player() {
}
player::~player() {
}
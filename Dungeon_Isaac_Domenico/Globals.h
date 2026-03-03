#pragma once
#define FRAME_RATE 150

struct Vector2
{
	int x;
	int y;
	void Sum(Vector2 other){
		x += other.x;
		y += other.y;
	}
	void Sub(Vector2 other){
		x -= other.x;
		y -= other.y;
	}
	// Override operator = to make it work with Vector2 objects
	Vector2& operator=(const Vector2& other){
		x = other.x;
		y = other.y;
		return *this;
	}
};

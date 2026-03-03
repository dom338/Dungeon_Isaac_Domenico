#pragma once
#include <vector>
#include "Entity.h"
#include <string>


#pragma region DataStructs
struct GameData
{

};

struct Item{
	std::string Name;
	float Multiplier;
};
#pragma endregion DataStructs

class FileLoader {

public:

	FileLoader();
	~FileLoader();
	//Returns the board loaded from a file
	std::vector<std::vector<Entity>> LoadBoardFromFile(std::string filePath);
	//returns random item from items file
	Item LoadRandomItemFromFile(std::string filePath);


	int test2 = 0;
private:
	int test1 = 0;

};
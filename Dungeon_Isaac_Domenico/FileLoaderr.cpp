#include "FileLoaderr.h"
#include <iostream>
#include <fstream>

FileLoader::FileLoader()
{
	std::cout << "FileLoader constructor called" << std::endl;

}

FileLoader::~FileLoader()
{
}

//TODO: Update when adding shit
std::vector<std::vector<Entity>> FileLoader::LoadBoardFromFile(std::string filePath)
{
	std::vector<std::vector<Entity>> board;
	std::ifstream file(filePath);
	if (file.is_open()) { 
		std::cout << "File opened successfully" << std::endl; 
		std::cout << "File content:" << std::endl;
		std::string line;
		while (std::getline(file, line)) {
			std::vector<Entity> row;
			for (char c : line) {
				
				if (c == '#') {
					Entity wall;
					wall.Sprite = '#';
					row.push_back(wall);
				}
				if (c == '.') {
					Entity freeSpace;
					freeSpace.Sprite = '.';
					row.push_back(freeSpace);
				}
				if (c == 'P')
				{
					player pl;
					pl.Sprite = 'P';
					row.push_back(pl);
				}
				std::cout << c;
			}
			std::cout << std::endl;

		}
	}
	else{std::cout << "Failed to open file" << std::endl;}
	file.close();
	return board;
}

//Currently only returns the firt item, TODO: return all items seperatly,by a list or by a random generator
Item FileLoader::LoadRandomItemFromFile(std::string filePath)
{
	std::ifstream file(filePath);
	std::string line;
	int index = 0;
	Item item;
	while (file >> line)
	{
		if (index == 0) {
			item.Name = line;
		}
		else if (index == 1) {
			item.Multiplier = std::stof(line);
		}
		if (index == 3)
		{
			std::cout << "Item loaded: " << item.Name << " with multiplier: " << item.Multiplier << std::endl;
			index = 0;
		}
		index++;

		

	}

	return Item();
}

#pragma once
#include <vector>
#include <string>
#include <queue>

//Stores a queue of files to automaticaly load file
std::queue<std::string> FileQueue;

#pragma region LoadMap
//Returns the map from a specified filename,DO NOT call unless its aneeded
std::vector<char> LoadMapFromFile(std::string filename);
//The standart method of loading files,loads the first of the file queue 
std::vector<char> LoadMapFromQueue(std::string filename = FileQueue.front());

#pragma endregion LoadMap


void SaveMapToFile(std::string filename);


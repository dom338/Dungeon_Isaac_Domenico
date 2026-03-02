
#include <iostream>
#include "FileLoaderr.h"


//Entry point 
int main()
{
	FileLoader _FileManager(3);

	std::cout << _FileManager.test2 << std::endl;


    /*
    std::cout << "Hello World!\n";
    std::vector<std::vector<Tile>> map = _FileManager.LoadMapFromFile("Dungeon_Isaac_Domenico/data/level1.txt");
    std::cout << map.size();
    
    //TEST THANK YOU GPT
    for (const auto& row : map) {
    for (const auto& tile : row) {
        // Access tile properties
        if (tile.PlaceHolder) std::cout << "P";
        
        else std::cout << tile.Sprite;
    }
    std::cout << std::endl; // New line after each row*/

}

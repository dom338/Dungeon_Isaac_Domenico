
#include <iostream>
#include "framework/filesystem/FileManager.h"
#include <vector>
#include "framework/Entities/Tile.h"


//Entry point 
int main()
{
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
    std::cout << std::endl; // New line after each row
}

}

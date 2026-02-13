#include "FileManager.h"
#include <fstream>
#include "../Math.h"
#include "../Entities/Tile.h"
#include "../Entities/Entiy.h"

#pragma region Singleton
FileManager::FileManager()
{
}

FileManager& FileManager::Instance()
{
    static FileManager instance;
    return instance;
}
#pragma endregion Singleton


#pragma region LoadMap

std::vector<std::vector<Tile>> FileManager::LoadMapFromFile(std::string filename){


    std::ifstream file;
    file.open(filename);
    if (!file.is_open())
    {
        std::cout << "File not loaded );";
        throw std::invalid_argument(filename + " not found");
    }
    

    std::vector<std::vector<Tile>> map;
    std::string line;
    size_t row = 0;

    while (std::getline(file, line))
    {
        std::vector<Tile> mapRow;
        for (size_t col = 0; col < line.size(); ++col)
        {
            Tile tile;
            tile.Sprite = line[col];
            tile.OriginPosition.x = col;
            tile.OriginPosition.y = row;



            if (tile.Sprite == 'P')
            {
                tile.PlaceHolder = new Player();  
                tile.Sprite = ' ';                

            mapRow.push_back(tile);
        }

        map.push_back(std::move(mapRow));
        ++row;
        }

    }
    return map;
}

#pragma endregion LoadMap


//Defined the global reference
FileManager& _FileManager = FileManager::Instance();
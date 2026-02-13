#pragma once
#include <vector>
#include <string>
#include <queue>
#include <iostream>

class FileManager
{
private:
    //Stores a queue of files to automaticaly load file
    static std::queue<std::string> FileQueue;
    FileManager();
    ~FileManager() = default;
public:
    static FileManager& Instance();

    //DELETE LATER
    void test(){std::cout << "hola";}
    FileManager(const FileManager&) = delete;
    FileManager& operator=(const FileManager&) = delete;

    #pragma region LoadMap
    //Returns the map from a specified filename,DO NOT call unless its aneeded
    std::vector<char> LoadMapFromFile(std::string filename);
    //The standart method of loading files,loads the first of the file queue 
    std::vector<char> LoadMapFromQueue(std::string filename = FileQueue.front());

    #pragma endregion LoadMap

    void SaveMapToFile(std::string filename);
};


// Global reference to the singleton
extern FileManager& GFileManager;
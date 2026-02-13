#include "FileManager.h"



FileManager::FileManager()
{
}

FileManager& FileManager::Instance()
{
    static FileManager instance;
    return instance;
}


//Defined the global reference
FileManager& GFileManager = FileManager::Instance();
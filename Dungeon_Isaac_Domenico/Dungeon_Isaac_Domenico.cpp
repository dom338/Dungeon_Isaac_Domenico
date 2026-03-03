#include <iostream>
#include <vector>
#include "Board.h"
#include "Globals.h"
#include "chrono"
#include "FileLoaderr.h"
#include <thread>
//Entry point 


int main()
{
    player pl;
	FileLoader fl;
    Board baseboard;


    baseboard.InitDefaultBoard(10, 10, pl);
    bool bGameOver = false;
    while (!bGameOver) {
        std::cout << "Hello World!\n" << baseboard.test << std::endl;
        system("cls");
        baseboard.PrintBoard();
        std::cout << pl.GetDirectionInput().y << pl.GetDirectionInput().x << std::endl;
        baseboard.SetBoard(fl.LoadBoardFromFile("Data/Maps/map1.txt"));
        fl.LoadRandomItemFromFile("Data/items.txt");
        //Sleep main thread to control game speed execution
        
        std::this_thread::sleep_for(std::chrono::milliseconds(FRAME_RATE));
    }


}
#ifndef CLEARSCREEN_H
#define CLEARSCREEN_H
using namespace std;
#include <windows.h>
#include <iostream>

inline void clearGameArea(int startX, int startY, int width, int height){
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD coord;

    for (int y = startY; y < startY + height; ++y){
        for (int x = startX; x < startX + width; ++x){
            coord.X = x;
            coord.Y = y;
            SetConsoleCursorPosition(hConsole, coord);
            cout << ' ';
        }
    }

    coord.X = 0;
    coord.Y = 0;
    SetConsoleCursorPosition(hConsole, coord);
}

#endif

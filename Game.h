#ifndef GAME_H
#define GAME_H

#include "Snake.h"
#include "Food.h"

const int WIDTH = 60;
const int HEIGHT = 20;

class Game {
public:
    Game();
    void run();

private:
    Snake snake;
    Food food;
    bool gameOver;
    int score = 0;

    void draw();
    void input();
    void logic();
};

#endif

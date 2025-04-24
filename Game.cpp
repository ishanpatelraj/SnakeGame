#include "Game.h"
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <thread>
#include <chrono>
#include "ClearScreen.h"
#include <windows.h>

using namespace std;

void setColor(int colorCode){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorCode);
}

Game::Game(){
    gameOver = false;
    food.generate(snake);
}

void Game::draw(){
    system("cls");

    const int width = 20;
    const int height = 20;

    cout << "\n   ==== SNAKE GAME ====\n";
    cout << "  Score: " << snake.getBody().size() - 1 << "\n\n";

    cout << "  ";
    for (int i = 0; i < width + 2; i++) cout << "#";
    cout << "\n";

    for (int y = 0; y < height; y++){
        cout << "  ";
        setColor(7); 
        cout << "#"; 

        for (int x = 0; x < width; x++){
            Point p = {x, y};

            if (snake.getBody().front() == p){
                setColor(10);
                cout << 'O';
            }
            else if (snake.isAtPosition(p)){
                setColor(2);
                cout << 'o';
            }
            else if (food.getPosition() == p){
                setColor(11);
                cout << '*';
            }
            else {
                setColor(7);
                cout << ' ';
            }
        }

        setColor(7);
        cout << "#\n";
    }

    setColor(7);

    cout << "  ";
    for (int i = 0; i < width + 2; i++) cout << "#";
    cout << "\n";
}

void Game::input(){
    if (_kbhit()) {
        int ch = _getch();
        if (ch == 224){
            ch = _getch();
            switch (ch){
                case 72: snake.changeDirection('U'); break; 
                case 80: snake.changeDirection('D'); break; 
                case 75: snake.changeDirection('L'); break; 
                case 77: snake.changeDirection('R'); break; 
            }
        } 
        else if (ch == 'x' || ch == 'X'){
            gameOver = true;
        }
        else if(ch == ' '){
        	cout<<" GAME PAUSED PRESS SPACE BAR TO RESUME!!!!";
        	getch();
        	
        }
    }
}

void Game::logic() {
    snake.move();
    if(snake.getBody().front() == food.getPosition()){
        snake.grow();
        food.generate(snake);
    }
    if(snake.checkCollision()){
        gameOver = true;
    }
}

void Game::run(){
    while (!gameOver){
        draw();
        input();
        logic();
        Sleep(600);
    }

    cout<<"\n\n  === Game Over! ===\n";
    cout<<"  Final Score: " << snake.getBody().size() - 1 << "\n";
}

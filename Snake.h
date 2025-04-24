#ifndef SNAKE_H
#define SNAKE_H

#include <deque>
#include "Point.h"
using namespace std;

class Snake {
public:
    Snake();
    void move();
    void grow();
    bool checkCollision();
    bool isAtPosition(const Point& p) const;
    void changeDirection(char dir);
    const deque<Point>& getBody() const;

private:
    deque<Point> body;
    char direction;
};

#endif
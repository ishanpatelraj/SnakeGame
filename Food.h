#ifndef FOOD_H
#define FOOD_H

#include "Point.h"
#include "Snake.h"

class Food {
public:
    Food();
    void generate(const Snake& snake);
    Point getPosition() const;

private:
    Point position;
};

#endif
#include "Food.h"
#include <cstdlib>
#include <ctime>
using namespace std;

Food::Food() {
    srand(static_cast<unsigned int>(time(nullptr)));
    position = {5, 5};
}

void Food::generate(const Snake& snake) {
    do {
        position.x = rand() % 20;
        position.y = rand() % 20;
    } while (snake.isAtPosition(position));
}

Point Food::getPosition() const {
    return position;
}
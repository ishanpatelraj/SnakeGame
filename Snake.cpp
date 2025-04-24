#include "Snake.h"
#include <cstddef>
using namespace std;

Snake::Snake(){
    body.push_back({10, 10});
    direction = 'R';
}

void Snake::move(){
    Point head = body.front();
    switch (direction) {
        case 'U': head.y--; break;
        case 'D': head.y++; break;
        case 'L': head.x--; break;
        case 'R': head.x++; break;
    }
    body.push_front(head);
    body.pop_back();
}

void Snake::grow(){
    Point head = body.front();
    switch (direction) {
        case 'U': head.y--; break;
        case 'D': head.y++; break;
        case 'L': head.x--; break;
        case 'R': head.x++; break;
    }
    body.push_front(head);
}

bool Snake::checkCollision(){
    Point head = body.front();
    if (head.x < 0 || head.x >= 20 || head.y < 0 || head.y >= 20)
        return true;

    for (size_t i = 1; i < body.size(); i++){
        if (head == body[i]){
            return true;
        }
    }
    return false;
}

bool Snake::isAtPosition(const Point& p) const{
    for (const auto& part : body)
        if (part == p)
            return true;
    return false;
}

void Snake::changeDirection(char dir){
    if ((dir == 'U' && direction != 'D') ||
        (dir == 'D' && direction != 'U') ||
        (dir == 'L' && direction != 'R') ||
        (dir == 'R' && direction != 'L')) {
        direction = dir;
    }
}

const deque<Point>& Snake::getBody() const{
    return body;
}

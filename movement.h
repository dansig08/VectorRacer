#ifndef MOVEMENT_H
#define MOVEMENT_H

#include <vector>

class Movement {
public:
    Movement();
    ~Movement();
    void vetorcreator(int starti, int startj, int endi, int endj, char desired);
    void movementprintoval(int starti, int startj, int endi, int endj, std::vector<std::vector<char>>& matrix);
private:
    // You can add private members if needed
};

#endif
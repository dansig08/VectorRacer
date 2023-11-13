#include <iostream>
#include <vector>

class Movement {
public:
    Movement();
    ~Movement();
    void vetorcreator(int starti, int startj, int endi, int endj, char desired);
    void movementprintoval(int starti, int startj, int endi, int endj, std::vector<std::vector<char>>& matrix);
private:

};

Movement::Movement() {}
Movement::~Movement() {}

void Movement::vetorcreator(int starti, int startj, int endi, int endj, char desired)
{
    int deli = starti - endi;
    if (desired == 'E')
    {

    }
    else if (desired == 'R')
    {

    }
}
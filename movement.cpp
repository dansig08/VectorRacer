#include <iostream>
#include <vector>

class Movement {
public:
    Movement();
    ~Movement();
    void vetorcreator(int& starti, int& startj, int& endi, int& endj, char desired);
private:

};

Movement::Movement() {}
Movement::~Movement() {}

void Movement::vetorcreator(int& starti, int& startj, int& endi, int& endj, char desired)
{
    // Find vector between start and end point
    int deli = endi - starti;
    int delj = endj - startj;

    // set old end to new start
    starti = endi;
    startj = endj;

    // Take user input and modify end point from this
    if (desired == 'e')
    {
        endi += deli - 1;
        endj += delj - 1;

    }
    else if (desired == 'd')
    {
        endi += deli;
        endj += delj - 1;
    }
    else if (desired == 'c')
    {
        endi += deli + 1;
        endj += delj - 1;
    }
    else if (desired == 'r')
    {
        endi += deli - 1;
        endj += delj;
    }
    else if (desired == 'f')
    {
        endi += deli;
        endj += delj;
    }
    else if (desired == 'v')
    {
        endi += deli + 1;
        endj += delj;
    }
    else if (desired == 't')
    {
        endi += deli - 1;
        endj += delj + 1;
    }
    else if (desired == 'g')
    {
        endi += deli;
        endj += delj + 1;
    }
    else if (desired == 'b')
    {
        endi += deli + 1;
        endj += delj + 1;
    }
}
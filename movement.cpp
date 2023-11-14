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
    int deli = endi - starti;
    int delj = endj - startj;

    starti = endi;
    startj = endj;

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
    if (desired == 't')
    {
        endi += deli - 1;
        endj += delj + 1;
    }
    if (desired == 'g')
    {
        endi += deli;
        endj += delj + 1;
    }
    if (desired == 'b')
    {
        endi += deli + 1;
        endj += delj + 1;
    }
}
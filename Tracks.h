#ifndef TRACKS_H
#define TRACKS_H

#include <vector>

class Tracks {
public:
    Tracks();
    ~Tracks();
    void ovaltrack(int starti, int startj, int endi, int endj);
    void movementprintoval(int starti, int startj, int endi, int endj, std::vector<std::vector<char>>& matrix);
private:
    // You can add private members if needed
};

#endif

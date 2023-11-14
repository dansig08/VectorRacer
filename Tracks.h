#ifndef TRACKS_H
#define TRACKS_H

#include <vector>

class Tracks {
public:
    Tracks();
    ~Tracks();
    void ovaltrack(int starti, int startj, int endi, int endj);
    void movementprintoval(int starti, int startj, int endi, int endj, std::vector<std::vector<char>>& matrix);
    int crashcheck(int endi, int endj);
    bool victorycondition(int starti, int startj, int endi, int endj, int i);
private:
    std::vector<std::vector<char>> ovalmap;
    std::vector<int> endi_values;
    std::vector<int> endj_values;
};

#endif

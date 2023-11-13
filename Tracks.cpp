//this is where i will keep the tracks
#include <iostream>
#include <vector>
#include <stdlib.h>

class Tracks {
public:
    Tracks();
    ~Tracks();
    void ovaltrack(int starti,int startj,int endi, int endj);
    void movementprintoval(int starti, int startj, int endi, int endj, std::vector<std::vector<char>>& matrix);
private:

};

Tracks::Tracks() {}
Tracks::~Tracks() {}

void Tracks::ovaltrack(int starti, int startj, int endi, int endj) {
    int numRows = 50;
    int numCols = 100;
    int borderThickness = 3;

    // Create a vector of vectors to represent the matrix
    std::vector<std::vector<char>> ovalmap(numRows, std::vector<char>(numCols, ' '));

    // Change the top and bottom rows to 'x' (border)
    for (int i = 0; i < borderThickness; i++) {
        for (int j = 0; j < numCols; j++) {
            ovalmap[i][j] = 'X';                      // Top border
            ovalmap[numRows - 1 - i][j] = 'X';        // Bottom border
        }
    }

    // Change the first and last columns to 'x' (border)
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < borderThickness; j++) {
            ovalmap[i][j] = 'X';                      // Left border
            ovalmap[i][numCols - 1 - j] = 'X';        // Right border
        }
    }

    // fills in middle
    for (int j = 20; j < 80; j++)
    {
        for (int i = 10; i < 40; i++)
        {
            ovalmap[i][j] = 'X';
        }
    }

    // Cuts corners
    // TL corner cut
    ovalmap[10][20] = ' ';
    ovalmap[10][21] = ' ';
    ovalmap[10][22] = ' ';
    ovalmap[10][23] = ' ';
    ovalmap[10][24] = ' ';
    ovalmap[10][25] = ' ';
    ovalmap[11][20] = ' ';
    ovalmap[11][21] = ' ';
    ovalmap[11][22] = ' ';
    ovalmap[11][23] = ' ';
    ovalmap[12][20] = ' ';
    ovalmap[12][21] = ' ';
    ovalmap[12][22] = ' ';
    ovalmap[13][20] = ' ';
    ovalmap[13][21] = ' ';
    ovalmap[14][20] = ' ';
    ovalmap[15][20] = ' ';

    //TL corner fill
    ovalmap[3][3] = 'X';
    ovalmap[3][4] = 'X';
    ovalmap[3][5] = 'X';
    ovalmap[3][6] = 'X';
    ovalmap[3][7] = 'X';
    ovalmap[3][8] = 'X';
    ovalmap[4][3] = 'X';
    ovalmap[4][4] = 'X';
    ovalmap[4][5] = 'X';
    ovalmap[4][6] = 'X';
    ovalmap[5][3] = 'X';
    ovalmap[5][4] = 'X';
    ovalmap[5][5] = 'X';
    ovalmap[6][3] = 'X';
    ovalmap[6][4] = 'X';
    ovalmap[7][3] = 'X';
    ovalmap[8][3] = 'X';

    //BL corner cut
    ovalmap[39][20] = ' ';
    ovalmap[39][21] = ' ';
    ovalmap[39][22] = ' ';
    ovalmap[39][23] = ' ';
    ovalmap[39][24] = ' ';
    ovalmap[39][25] = ' ';
    ovalmap[38][20] = ' ';
    ovalmap[38][21] = ' ';
    ovalmap[38][22] = ' ';
    ovalmap[38][23] = ' ';
    ovalmap[37][20] = ' ';
    ovalmap[37][21] = ' ';
    ovalmap[37][22] = ' ';
    ovalmap[36][20] = ' ';
    ovalmap[36][21] = ' ';
    ovalmap[35][20] = ' ';
    ovalmap[34][20] = ' ';

    //BL corner fill
    ovalmap[46][3] = 'X';
    ovalmap[46][4] = 'X';
    ovalmap[46][5] = 'X';
    ovalmap[46][6] = 'X';
    ovalmap[46][7] = 'X';
    ovalmap[46][8] = 'X';
    ovalmap[45][3] = 'X';
    ovalmap[45][4] = 'X';
    ovalmap[45][5] = 'X';
    ovalmap[45][6] = 'X';
    ovalmap[44][3] = 'X';
    ovalmap[44][4] = 'X';
    ovalmap[44][5] = 'X';
    ovalmap[43][3] = 'X';
    ovalmap[43][4] = 'X';
    ovalmap[42][3] = 'X';
    ovalmap[41][3] = 'X';

    // TR corner cut
    ovalmap[10][79] = ' ';
    ovalmap[10][78] = ' ';
    ovalmap[10][77] = ' ';
    ovalmap[10][76] = ' ';
    ovalmap[10][75] = ' ';
    ovalmap[10][74] = ' ';
    ovalmap[11][79] = ' ';
    ovalmap[11][78] = ' ';
    ovalmap[11][77] = ' ';
    ovalmap[11][76] = ' ';
    ovalmap[12][79] = ' ';
    ovalmap[12][78] = ' ';
    ovalmap[12][77] = ' ';
    ovalmap[13][79] = ' ';
    ovalmap[13][78] = ' ';
    ovalmap[14][79] = ' ';
    ovalmap[15][79] = ' ';

    //TR corner fill
    ovalmap[3][96] = 'X';
    ovalmap[3][95] = 'X';
    ovalmap[3][94] = 'X';
    ovalmap[3][93] = 'X';
    ovalmap[3][92] = 'X';
    ovalmap[3][91] = 'X';
    ovalmap[4][96] = 'X';
    ovalmap[4][95] = 'X';
    ovalmap[4][94] = 'X';
    ovalmap[4][93] = 'X';
    ovalmap[5][96] = 'X';
    ovalmap[5][95] = 'X';
    ovalmap[5][94] = 'X';
    ovalmap[6][96] = 'X';
    ovalmap[6][95] = 'X';
    ovalmap[7][96] = 'X';
    ovalmap[8][96] = 'X';

    //BR corner cut
    ovalmap[39][79] = ' ';
    ovalmap[39][78] = ' ';
    ovalmap[39][77] = ' ';
    ovalmap[39][76] = ' ';
    ovalmap[39][75] = ' ';
    ovalmap[39][74] = ' ';
    ovalmap[38][79] = ' ';
    ovalmap[38][78] = ' ';
    ovalmap[38][77] = ' ';
    ovalmap[38][76] = ' ';
    ovalmap[37][79] = ' ';
    ovalmap[37][78] = ' ';
    ovalmap[37][77] = ' ';
    ovalmap[36][79] = ' ';
    ovalmap[36][78] = ' ';
    ovalmap[35][79] = ' ';
    ovalmap[34][79] = ' ';

    //BR corner fill
    ovalmap[46][96] = 'X';
    ovalmap[46][95] = 'X';
    ovalmap[46][94] = 'X';
    ovalmap[46][93] = 'X';
    ovalmap[46][92] = 'X';
    ovalmap[46][91] = 'X';
    ovalmap[45][96] = 'X';
    ovalmap[45][95] = 'X';
    ovalmap[45][94] = 'X';
    ovalmap[45][93] = 'X';
    ovalmap[44][96] = 'X';
    ovalmap[44][95] = 'X';
    ovalmap[44][94] = 'X';
    ovalmap[43][96] = 'X';
    ovalmap[43][95] = 'X';
    ovalmap[42][96] = 'X';
    ovalmap[41][96] = 'X';

    // Start finish line
    ovalmap[3][49] = '|';
    ovalmap[4][49] = '|';
    ovalmap[5][49] = '|';
    ovalmap[6][49] = '|';
    ovalmap[7][49] = '|';
    ovalmap[8][49] = '|';
    ovalmap[9][49] = '|';
    ovalmap[3][51] = '|';
    ovalmap[4][51] = '|';
    ovalmap[5][51] = '|';
    ovalmap[6][51] = '|';
    ovalmap[7][51] = '|';
    ovalmap[8][51] = '|';
    ovalmap[9][51] = '|';

    // Track direction arrow
    ovalmap[12][48] = '-';
    ovalmap[12][49] = '-';
    ovalmap[12][50] = '-';
    ovalmap[12][51] = '-';
    ovalmap[12][52] = '>';
    ovalmap[11][47] = ' ';
    ovalmap[11][48] = ' ';
    ovalmap[11][49] = ' ';
    ovalmap[11][50] = ' ';
    ovalmap[11][51] = ' ';
    ovalmap[11][52] = ' ';
    ovalmap[11][53] = ' ';
    ovalmap[13][47] = ' ';
    ovalmap[13][48] = ' ';
    ovalmap[13][49] = ' ';
    ovalmap[13][50] = ' ';
    ovalmap[13][51] = ' ';
    ovalmap[13][52] = ' ';
    ovalmap[13][53] = ' ';
    ovalmap[12][53] = ' ';
    ovalmap[12][47] = ' ';

    system("cls");

    movementprintoval(starti, startj, endi, endj,ovalmap);

    // Print the matrix
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            std::cout << ovalmap[i][j];
        }
        std::cout << std::endl;
    }
    std::cout << "Next Move?" << std::endl;
}

void Tracks::movementprintoval(int starti, int startj, int endi, int endj, std::vector<std::vector<char>>& matrix)
{
    matrix[starti][startj] = '*';
    matrix[endi - 1][endj - 1] = 'E';
    matrix[endi][endj - 1] = 'D';
    matrix[endi + 1][endj - 1] = 'C';
    matrix[endi - 1][endj] = 'R';
    matrix[endi][endj] = 'F';
    matrix[endi + 1][endj] = 'V';
    matrix[endi - 1][endj + 1] = 'T';
    matrix[endi][endj + 1] = 'G';
    matrix[endi + 1][endj + 1] = 'B';
}

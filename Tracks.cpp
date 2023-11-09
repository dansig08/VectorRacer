//this is where i will keep the tracks
#include <iostream>
#include <vector>

int main() {
    int numRows = 50;
    int numCols = 100;
    int borderThickness = 3;

    // Create a vector of vectors to represent the matrix
    std::vector<std::vector<char>> ovalmap(numRows, std::vector<char>(numCols, ' '));

    // Change the top and bottom rows to 'x' (border)
    for (int i = 0; i < borderThickness; i++) {
        for (int j = 0; j < numCols; j++) {
            ovalmap[i][j] = 'x';                      // Top border
            ovalmap[numRows - 1 - i][j] = 'x';        // Bottom border
        }
    }

    // Change the first and last columns to 'x' (border)
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < borderThickness; j++) {
            ovalmap[i][j] = 'x';                      // Left border
            ovalmap[i][numCols - 1 - j] = 'x';        // Right border
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

    // Print the matrix
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            std::cout << ovalmap[i][j];
        }
        std::cout << std::endl;
    }

    return 0;
}
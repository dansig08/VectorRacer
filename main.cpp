#include <iostream>
#include <conio.h> // For _getch() function (Windows specific)

const int GRID_WIDTH = 40;
const int GRID_HEIGHT = 15;

char grid[GRID_HEIGHT][GRID_WIDTH];
int playerX = 1, playerY = 1; // Initial player position

void initializeGrid() {
    for (int i = 0; i < GRID_HEIGHT; ++i) {
        for (int j = 0; j < GRID_WIDTH; ++j) {
            if (i == 0 || i == GRID_HEIGHT - 1 || j == 0 || j == GRID_WIDTH - 1) {
                grid[i][j] = '#'; // Draw the track boundary
            }
            else {
                grid[i][j] = ' '; // Empty space inside the track
            }
        }
    }

    // Customize the track layout (simplified representation)
    for (int i = 2; i < GRID_HEIGHT - 2; ++i) {
        grid[i][10] = '#';
        grid[i][20] = '#';
        grid[i][30] = '#';
    }

    grid[playerY][playerX] = 'X'; // Place the player on the grid
}


void displayGrid() {
    system("cls"); // Clear the console (Windows specific)
    for (int i = 0; i < GRID_HEIGHT; ++i) {
        for (int j = 0; j < GRID_WIDTH; ++j) {
            std::cout << grid[i][j];
        }
        std::cout << std::endl;
    }
}

int main() {
    initializeGrid();
    char userInput;

    while (true) {
        displayGrid();

        userInput = _getch(); // Get a character from the keyboard

        // Move the player based on user input
        switch (userInput) {
        case 'w': // Up
            if (grid[playerY - 1][playerX] == ' ')
            {
                grid[playerY][playerX] = ' ';
                playerY--;
                grid[playerY][playerX] = 'X';
            }
            break;
        case 's': // Down
            if (grid[playerY + 1][playerX] == ' ')
            {
                grid[playerY][playerX] = ' ';
                playerY++;
                grid[playerY][playerX] = 'X';
            }
            break;
        case 'a': // Left
            if (grid[playerY][playerX - 1] == ' ')
            {
                grid[playerY][playerX] = ' ';
                playerX--;
                grid[playerY][playerX] = 'X';
            }
            break;
        case 'd': // Right
            if (grid[playerY][playerX + 1] == ' ')
            {
                grid[playerY][playerX] = ' ';
                playerX++;
                grid[playerY][playerX] = 'X';
            }
            break;
        case 'q': // Quit the game
            return 0;
        default:
            break;
        }
    }

    return 0;
}

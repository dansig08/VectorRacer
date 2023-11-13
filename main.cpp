// Empty for now
#include <iostream>
#include <vector>
#include "Tracks.h"
#include "movement.h"

int main() 
{
	// Initail values
	int starti = 6;
	int startj = 50;
	int endi = 6;
	int endj = 50;
	Tracks mytracks;
	Movement move;

	mytracks.ovaltrack(starti, startj, endi, endj);

	char posdes = 'F';

	std::cin >> posdes;
	std::cout << std::endl;

	move.vetorcreator(starti, startj, endi, endj, posdes);

	return 0;
}

// Next steps include a movement files and class that takes a input of where the user wants to got and creates the start and end points back to the main function
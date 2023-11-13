// Empty for now
#include <iostream>
#include <vector>
#include "Tracks.h"

int main() 
{
	int starti = 6;
	int startj = 50;
	int endi = 6;
	int endj = 55;
	Tracks mytracks;
	mytracks.ovaltrack(starti,startj,endi,endj);

	return 0;
}

// Next steps include a movement files and class that takes a input of where the user wants to got and creates the start and end points back to the main function
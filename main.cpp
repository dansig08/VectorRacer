// Empty for now
#include <iostream>
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
	int i = 0;
	while (true)
	{
		mytracks.ovaltrack(starti, startj, endi, endj);

		bool victory = mytracks.victorycondition(starti, startj, endi, endj, i);

		if (victory == 1)
		{

			char playagain;
			std::cout << "You Completed the circuit! Play Again? y or n" << std::endl;
			std::cin >> playagain;
			std::cout << std::endl;
			if (playagain == 'y')
			{
				starti = 6;
				startj = 50;
				endi = 6;
				endj = 50;
				i = 0;
			}
			if (playagain == 'n')
			{
				std::cout << "Thanks for Playing!" << std::endl;
				return false;
			}
		}

		char posdes = 'F';

		std::cin >> posdes;
		std::cout << std::endl;

		move.vetorcreator(starti, startj, endi, endj, posdes);

		bool crash = mytracks.crashcheck(endi, endj);

		if (crash == 1)
		{
			char tryagain;
			std::cout << "You Crashed! Try Again? y or n" << std::endl;
			std::cin >> tryagain;
			std::cout << std::endl;
			if (tryagain == 'y')
			{
				//starti = 6;
				//startj = 50;
				//endi = 6;
				//endj = 50;
				//i = 1;
				endi = starti;
				endj = startj;
			}
			if (tryagain == 'n')
			{
				std::cout << "Thanks for trying!" << std::endl;
				return false;
			}
		}
		i++;
	}
}

// Next steps include a movement files and class that takes a input of where the user wants to got and creates the start and end points back to the main function
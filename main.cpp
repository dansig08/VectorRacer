// Empty for now
#include <iostream>
#include "Tracks.h"
#include "movement.h"

int main() 
{
	// Initail values for start
	int starti = 6;
	int startj = 50;
	int endi = 6;
	int endj = 50;

	Tracks mytracks;
	Movement move;
	
	// Setting moves equal to zero
	int i = 0;

	// Gameplay Loop
	while (true)
	{
		// Prints the track
		mytracks.ovaltrack(starti, startj, endi, endj);

		// Checks if a lap is completed
		bool victory = mytracks.victorycondition(starti, startj, endi, endj, i);

		// Victory conditions
		if (victory == 1)
		{

			char playagain;
			std::cout << "You Completed the circuit! Play Again? y or n" << std::endl;
			std::cin >> playagain;
			std::cout << std::endl;
			if (playagain == 'y')
			{
				// Reset initial position and moves back to zero
				starti = 6;
				startj = 50;
				endi = 6;
				endj = 50;
				i = 0;
				// Print out track again
				mytracks.ovaltrack(starti, startj, endi, endj);
			}
			else
			{
				// If not yes then end loop
				std::cout << "Thanks for Playing!" << std::endl;
				return false;
			}
		}

		// Inputted position Desired
		char posdes;
		std::cin >> posdes;
		std::cout << std::endl;

		// Takes position desired and updates the start and end points
		move.vetorcreator(starti, startj, endi, endj, posdes);

		// Check crash
		bool crash = mytracks.crashcheck(endi, endj);
		
		// Crash conditions if false nothing happens
		if (crash == 1)
		{
			char tryagain;
			std::cout << "You Crashed! Try Again? y or n" << std::endl;
			std::cin >> tryagain;
			std::cout << std::endl;
			if (tryagain == 'y')
			{
				// Resets position to last good position and resets the velocity to ensure no crash loop
				endi = starti;
				endj = startj;
			}
			else
			{
				// If done playing than end loop
				std::cout << "Thanks for trying!" << std::endl;
				return false;
			}
		}
		i++;
	}
}

// Next steps include a movement files and class that takes a input of where the user wants to got and creates the start and end points back to the main function
/*
Matthias Kim
Pointer Programming Problems Lab
9/15/21
Extra: 
*/

#include <iostream>
#include <iomanip>
#include <string>
#include "PPP.h"

int main()
{
	///////1
	int length = 0; //variables
	int width = 0; 
	int height = 0;
	int volume = 0;
	
	//declaring functions
	enterData(&length, &width, &height); 
	calculateAirVolume(&length, &width, &height, &volume);
	printAirvolume(&volume);

	///////2
	//create a character array that will hold the name
	char name[100] = "";
	
	//call the function for the user to enter a name; then print
	fillName(name);
	std::printf("Original Name: %s\n", name);
	//call the function to reverse and print the new name
	printBackwards(name);
	std::printf("Reversed Name: %s\n", name);

	///////3


	

}

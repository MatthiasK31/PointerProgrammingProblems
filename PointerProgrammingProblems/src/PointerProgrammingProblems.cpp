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
	//////1
	int length = 0; //variables
	int width = 0; 
	int height = 0;
	int volume = 0;
	
	//declaring functions
	enterData(&length, &width, &height); 
	calculateAirVolume(&length, &width, &height, &volume);
	printAirvolume(&volume);

	///////2
	std::string name = "";


}

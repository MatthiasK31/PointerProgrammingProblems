#include <iostream>
#include <iomanip>
#include <string>
#include "PPP.h"

//1
void enterData(int* pLength, int* pWidth, int* pHeight)
{
	//receive the dimensions for the building
	std::cout << "Enter the length of the building: ";
	std::cin >> *pLength;
	std::cout << "Enter the width of the building: ";
	std::cin >> *pWidth;
	std::cout << "Enter the height of the building: ";
	std::cin >> *pHeight;


}
void calculateAirVolume(int* pLength, int* pWidth, int* pHeight, int* pVolume)
{
	*pVolume = (*pLength) * (*pWidth) * (*pHeight);
}
void printAirvolume(int *pVolume)
{
	std::cout << "The building can hold a total of " << *pVolume << " cubic feet of air." << std::endl;
}

//2
void fillName(char* pName)
{
	//ask user to enter the name
	std::cout << "Enter a name: ";
	std::cin >> pName;
}

void printBackwards(char* pName)
{
	int l;
	char *begin_p, *end_p, temp_p;
	 
	//take the length of the entered the name
	l = std::strlen(pName);

	//set the begin and end pointers to the initial position of the string	
	begin_p = pName;
	end_p = pName;

	//set the initial position of end pointer to the last character of the name
	for (int i = 0; i < l-1; i++)
		end_p++;

	//swap characters from the start and the end
	//range of loop is half the length of the name for an even split
	for (int i = 0; i < l / 2; i++) {

		//swap algorithm
		temp_p = *end_p;
		*end_p = *begin_p;
		*begin_p = temp_p;

		//update the position of the begin and end pointer
		begin_p++; end_p--;
	}
}

void sortArray(int p_intArray[], int length)
{
	std::cout << length << std::endl;
	int temp = 0;

	for (int j = 0; j < 10; j++) {
		for (int i = 0; i < 10; i++) {
			if (p_intArray[i] > p_intArray[i + 1]) {
				temp = p_intArray[i];
				p_intArray[i] = p_intArray[i + 1];
				p_intArray[i + 1] = temp;
			}
		}
	}
}
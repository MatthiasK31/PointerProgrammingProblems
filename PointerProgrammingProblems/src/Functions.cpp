#include <iostream>
#include <iomanip>
#include <string>
#include "PPP.h"

//1
void enterData(int* pLength, int* pWidth, int* pHeight)
{
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
void fillName(std::string* name)
{
	std::cout << "What is your name? ";
	std::cin >> *name;
}

void printBackwards(std::string* name)
{

}
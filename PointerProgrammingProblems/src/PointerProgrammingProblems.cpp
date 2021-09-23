/*
Matthias Kim
Pointer Programming Problems Lab
9/22/21
Extra: added an additional array to sort
*/

#include <iostream>
#include <iomanip>
#include <string>
#include "PPP.h"

int main()
{
	///////1
	std::cout << "#1:" << std::endl;
	int length = 0; //variables
	int width = 0;
	int height = 0;
	int volume = 0;

	//declaring functions
	enterData(&length, &width, &height);
	calculateAirVolume(&length, &width, &height, &volume);
	printAirvolume(&volume);
	std::cout << std::endl;


	///////2
	std::cout << "#2:" << std::endl;

	//create a character array that will hold the name
	std::string name = "";
	//call the function for the user to enter a name; then print
	fillName(&name);
	//call the function to reverse and print the new name
	printBackwards(&name);
	std::printf("Original Name (main): %s\n", name.c_str());
	std::cout << std::endl;

	///////3
	std::cout << "#3:" << std::endl;
	//create new array to heap
	int* intArray = new int[10]{2,4,6,8,10,1,3,5,7,9};
	int arrLength = 10;

	//print unsorted array
	std::cout << "Unsorted Array: ";
	for (int i = 0; i < arrLength; i++) {
		std::cout << intArray[i] << " ";
	}
	std::cout << std::endl;

	//NAME OF ARRAY IS ADDRESS OF THE ARRAY
	sortArray(intArray, arrLength);
	std::cout << "Sorted Array(in main): ";
	for (int i = 0; i < arrLength; i++) {
		std::cout << intArray[i] << " ";
	}
	std::cout << std::endl;

	//clear heap
	delete[] intArray;
	std::cout << std::endl;

	///////extra
	int* array2 = new int[10] {13, 4, 88, 65, 24, 33, 57, 71, 8, 19};
	descendSortArray(array2, arrLength);
	std::cout << "Sorted Array(in main): ";
	for (int i = 0; i < arrLength; i++) {
		std::cout << array2[i] << " ";
	}
	//clear heap
	delete[] array2;
	

}

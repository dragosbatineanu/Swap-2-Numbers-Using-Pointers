#include <iostream>
#include "Header.h"

//parameters are pointers
void swap(int* a, int* b) {
	//std::cout << a << " " << b;

	//temp variable is to hold one of the values
	int temp;

	//swapping of the values
	temp = *a;
	*a = *b;
	*b = temp;

	//output
	std::cout << *a << " " << *b << std::endl;

}
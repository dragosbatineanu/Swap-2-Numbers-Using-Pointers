#include <iostream>
#include "Header.h"

int main() {
	//declaring input variables
	int num1, num2;


	//user input for numbers
	std::cout << "Enter two numbers:" << std::endl;
	std::cin >> num1;
	std::cin >> num2;

	//calling the swapping function. See Swapper.cpp
	swap(&num1, &num2);



}
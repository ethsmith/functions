// Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

std::string GetTextFromUser(std::string message);
int GetNumbersFromUser(std::string num);

int main()
{

	std::cout << "Your word: " << GetTextFromUser("Enter a word: ");
	std::cout << std::endl;
	std::cout << "Your number: " << GetNumbersFromUser("Enter a number: ");
	std::cout << std::endl;

	system("pause");
}

std::string GetTextFromUser(std::string message)
{
	std::cout << message;

	std::string msg;
	std::cin >> msg;

	return msg;
}

int GetNumbersFromUser(std::string message)
{
	std::cout << message;

	std::string number;
	std::cin >> number;

	return std::stoi(number); // did some research and thought this would be neat
}



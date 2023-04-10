#pragma once
#include <iostream>

struct Person
{
	std::string Name = "No Name:";
	int Age = -1;
	std::string Job = "Empty";
	int Income = -1;
};

void Person_Data_COUT(const Person& P);
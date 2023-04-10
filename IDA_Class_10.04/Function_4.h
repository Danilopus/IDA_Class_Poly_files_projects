#pragma once
#include <iostream>;

//Function.cpp
double sum(double A, double B);

//Function_2.cpp
double sum2(double A, double B);


void Hello();

void Hello2()
{
	std::cout << "Hello wORld";
}

template <typename ANY> void Array_COUT(ANY* arr, int Size);

template<typename ANY>
inline void Array_COUT(ANY* arr, int Size)
{
	std::cout << "\n[";
	for (int i = 0; i < Size; i++)
		std::cout << arr[i] << " | ";
	std::cout << "\b\b]\n";
}

double sum3(double A, double B)
{
	return 2*A + 2 * B;
}
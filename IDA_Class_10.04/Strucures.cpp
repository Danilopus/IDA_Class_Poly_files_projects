#include "Strucures.h"
#include <iostream>
//#include "Data.h"; //��������� ���������� ���������� (������� �� ��������)

extern int _A; //����������� ���������� ����������� ����������� �� ��, ��� ��� ��� ��������� � ������ �����

int b = _A;

void Person_Data_COUT(const Person& P)
{
	std::cout << "\n" << "Name   " << P.Name;
	std::cout << "\n" << "Age    " << P.Age;
	std::cout << "\n" << "Job    " << P.Job;
	std::cout << "\n" << "Income " << P.Income;

	_A = 20;
	std::cout << "\n_A = " << _A;
}

_A = 30;
//std::cout << "\n_A = " << _A;


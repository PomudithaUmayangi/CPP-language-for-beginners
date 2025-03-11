// lab5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include"employee.h"
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	employee emp1;

	emp1.assignDetails(10, "Wimal", 50000);
	emp1.setAllowance(5000);
	emp1.calcSal();
	emp1.printPaySlip();

	char ch;
	cin >> ch;
	return 0;
}

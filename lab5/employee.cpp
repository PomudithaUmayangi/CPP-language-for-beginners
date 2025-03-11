#include "employee.h"
#include <iostream>
#include <cstring>
using namespace std;

void employee::assignDetails(int pempno, const char pname[], double pbasicSal)
{
	empno = pempno;
	strcpy_s(name, pname); //_s using for safest 
	basicSal = pbasicSal;
}

void employee::setAllowance(double pallowance)
{
	allowance = pallowance;
}

void employee::calcSal()
{
	salary = basicSal = allowance;
}

void employee::printPaySlip()
{
	cout << "___________________" << endl;
	cout << "Emp No\t :" <<empno<< endl;
	cout << "Name \t :"<<name << endl;
	cout << "Basic salary \t :"<<basicSal<< endl;
	cout << "Allowance \t :" <<allowance<< endl;
	cout << "Net Salary \t :" << salary << endl;
	cout << "___________________" << endl;
}
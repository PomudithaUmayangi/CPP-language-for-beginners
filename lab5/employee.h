#pragma once
class employee
{
private: // declare private attributes
	int empno;
	const char name[20]; // define as a constant
	double basicSal;
	double allowance;
	double salary;

public: // why all are void... we never return anything 
	void assignDetails(int pempno, char pname[], double pbasicSal); // declare the public methods
	void setAllowance(double allowance);
	void calcSal();
	void printPaySlip();
};


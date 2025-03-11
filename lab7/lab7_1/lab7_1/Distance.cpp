
#include<iostream>
#include "Distance.h"
using namespace std;

Distance::Distance()
{
	feet = 0;
	inches = 0.0;
}

Distance::Distance(int ft, float in) // value get from users
{
	feet = ft;
	inches = in;
}

void Distance::inputDistance()
{
	cout << "enter your feet : ";
	cin >> feet;
	cout << "enter your inches : ";
	cin >> inches;
}

void Distance::printDistance()
{
	cout << "feet = " << feet << "and inches = " << inches<< endl;
}

Distance::~Distance()
{
	cout << "Distance deleted" << "feet = " << feet << "and inches = " << inches<< endl;
}


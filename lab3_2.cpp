// lab3_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> //standerd header
#include<iomanip> // for functions
using namespace std; // standerd library

void findMarks(int t_marks1, int t_marks2, float& t_CA1, float& t_CA2); //define the function

struct marks//
{
	//struct membrs
	int t_marks1, t_marks2;
	int student;
	float t_CA1, t_CA2;
};
int main()
{
	marks details[5]; //array creation for 5 students

	for (int i = 0; i < 5; i++) //uses a loop for 
	{
		cout << "enter the marks 1 for student : " << i + 1 << endl;;
		cin >> details[i].t_marks1;

		cout << "enter the marks 2 for student : " << i + 1 << endl;;
		cin >> details[i].t_marks2;

		cout << endl;

		cout << setw(10) << student << setw(10) << "Mark1" << setw(10) << "Mark2" << set(10)
			<< "CA 1" << setw(10) << "CA 2" << endl;

		for (int i =0 ;)
	}



	

	cout << "enter the marks 2 : ";
	cin >> CA2;


}
void findMarks(int t_marks1, int t_marks2, float& t_CA1, float& t_CA2);
{
	&t_CA1 = t_marks1 * 0.2;
	&t_CA2 = t_marks2 * 0.3;


}

// ex4_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<iomanip>

using namespace std;

//create structs for circle, rectangle, square
struct circle {
    float radius;
};

struct rectangle {
    float length;
    float width;
};

struct square {
    float length;
};

float circleArea(circle c1);
float rectangleArea(rectangle r1);
float squarerea(square s1);


int main()
{
    //access to the struct
    struct circle cr1;
    struct rectangle recLarge,recSmall;
    struct square sq1;

    //define variable
    float cirArea, largeRecArea, smallRecArea, srqArea, totArea, grassArea;

    //get values and store in the struct
    cout << "enter the radius of the circle";
    cin >> cr1.radius;

    cout << "enter the length of the square shape";
    cin >> sq1.length;

    cout << "enter the width of the large rectangle";
    cin >> recLarge.width;

    cout << "enter the length of the large rectangle";
    cin >> recLarge.length;

    cout << "enter the width of the small rectangle";
    cin >> recSmall.width;

    cout << "enter the length of the small rectangle";
    cin >> recSmall.length; //finish the getting values

    //call the functions
    cirArea = circleArea(cr1);
    smallRecArea = rectangleArea(recLarge);
    largeRecArea = rectangleArea(recSmall);
    srqArea = squarerea(sq1);

    totArea = cirArea + smallRecArea + srqArea;
    grassArea = largeRecArea - totArea;

    //display with 3 decimal points
    cout << "grass area is" << setiosflags(ios::fixed) << setprecision(3) << grassArea << endl;
    
}

//create functions to calculate circleArea, rectangleArea,squareArea
float circleArea(circle c1)
{
    return 22.0 / 7 * c1.radius * c1.radius;
}

float rectangleArea(rectangle r1)
{
    return r1.width * r1.length;
}

float squarerea(square s1)
{
    return  s1.length * s1.length;
}


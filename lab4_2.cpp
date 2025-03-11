#include <iostream>
#include <iomanip>
using namespace std;

struct Circle {
    float radius;
};

struct Rectangle {
    float length;//members
    float width;//members
};

struct Square {
    float length;
};
float CalcAreaCircle(Circle x);
float CalcAreaRectangle(Rectangle x);
float CalcAreaSquare(Square x);
void CalcPerimeter(Rectangle x, float& perimeter);
float Calccost(float perimeter, float cost);
int main()
{
    struct Circle c1;
    struct Rectangle r1, r2;
    struct Square s1;

    cout << "Enter the circle radius of the circle: ";
    cin >> c1.radius;

    cout << endl;

    float AreaP = CalcAreaCircle(c1);

    cout << "Enter the length of the rectangular building: ";
    cin >> r1.length;
    //variable.member

    cout << "Enter the width of the rectangular building: ";
    cin >> r1.width;

    cout << endl;
    float AreaB = CalcAreaRectangle(r1);

    cout << "Enter the length of the square building: ";
    cin >> s1.length;

    cout << endl;
    float AreaBuildrest = CalcAreaSquare(s1);

    cout << "Enter the length of the whole land: ";
    cin >> r2.length;

    cout << "Enter the width of the whole land: ";
    cin >> r2.width;

    cout << endl;
    cout << endl;

    float totlant = CalcAreaRectangle(r2);

    float greenArea = totlant - (AreaP + AreaB + AreaBuildrest);

    cout << "The Total area of green area: " << setprecision(3) << setiosflags(ios::fixed) << greenArea << endl;

    float perimeter,cost=10;
    CalcPerimeter(r2, perimeter);
    Calccost(perimeter,cost);

    cout << "Cost is: "<<setprecision(2) << setiosflags(ios::fixed) << Calccost(perimeter, cost) << endl;
    return 0;
}
//type//use meaningful name instead of x
float CalcAreaCircle(Circle x)
{//radius is a member. So we don't have to define
    return (22.0 / 7.0) * x.radius * x.radius;
}

float CalcAreaRectangle(Rectangle x)
{
    return x.length * x.width;
}

float CalcAreaSquare(Square x)
{
    return x.length * x.length;
}
void CalcPerimeter(Rectangle x,float &perimeter)
{
    perimeter = (x.width + x.length) * 2;
}
float Calccost(float perimeter,float cost)
{
    return perimeter*cost;
}

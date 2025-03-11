#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// Structure for Circle
struct Circle {
    float radius;
};

// Structure for Rectangle
struct Rectangle {
    float length;
    float width;
};

// Structure for Square
struct Square {
    float length;
};

// Function to calculate area of a Circle
float calculateCircleArea(Circle c) {
    return M_PI * c.radius * c.radius;
}

// Function to calculate area of a Rectangle
float calculateRectangleArea(Rectangle r) {
    return r.length * r.width;
}

// Function to calculate area of a Square
float calculateSquareArea(Square s) {
    return s.length * s.length;
}

int main() {
    Circle pond;
    Rectangle building;
    Square grass;

    // Input data
    cout << "Enter the radius of the pond: ";
    cin >> pond.radius;
    cout << "Enter the length and width of the building: ";
    cin >> building.length >> building.width;
    cout << "Enter the length of one side of the square area: ";
    cin >> grass.length;

    // Calculate total area
    float totalArea = calculateCircleArea(pond) + calculateRectangleArea(building) + calculateSquareArea(grass);

    // Calculate green color area
    float greenArea = totalArea - calculateCircleArea(pond) - calculateRectangleArea(building);

    // Output result with 3 decimal places
    cout << fixed << setprecision(3);
    cout << "The green color area is: " << greenArea << " square units" << endl;

    return 0;
}


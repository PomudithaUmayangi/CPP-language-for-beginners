#include <iostream>
#include <iomanip>

using namespace std;

// Structure for Rectangle
struct Rectangle {
    float length;
    float width;
};

// Function to calculate perimeter of a Rectangle
void calculatePerimeter(Rectangle& r, float& perimeter) {
    perimeter = 2 * (r.length + r.width);
}

// Function to calculate cost of building a fence
float calculateFenceCost(float perimeter, float costPerUnit) {
    return perimeter * costPerUnit;
}

int main() {
    Rectangle land;
    float costPerUnit, perimeter, totalCost;

    // Input data
    cout << "Enter the length and width of the land: ";
    cin >> land.length >> land.width;
    cout << "Enter the cost per unit length of the fence: ";
    cin >> costPerUnit;

    // Calculate perimeter
    calculatePerimeter(land, perimeter);

    // Calculate total cost
    totalCost = calculateFenceCost(perimeter, costPerUnit);

    // Output result with 2 decimal places
    cout << fixed << setprecision(2);
    cout << "The total cost of building the fence is: $" << totalCost << endl;

    return 0;
}


#include <iostream>
using namespace std;

// Function Prototypes
double area(double r);                // For Circle
double area(double b, double h);     // For Triangle

int main() {
    double r, b, h;

    // Circle Area
    cout << "Enter radius of circle: ";
    cin >> r;
    cout << "Area of circle: " << area(r) << endl;

    // Triangle Area
    cout << "\nEnter base and height of triangle: ";
    cin >> b >> h;
    cout << "Area of triangle: " << area(b, h) << endl;

    return 0;
}

// Function definition for Circle
double area(double r) {
    double a = 3.14 * r * r;
    return a;
}

// Function definition for Triangle
double area(double b, double h) {
    double a = 0.5 * b * h;
    return a;
}

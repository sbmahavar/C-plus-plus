#include <iostream>
using namespace std; // Fixed "stel" to "std"

// Inline function to calculate square
inline double square(int a) {
    return a * a;
}

// Inline function to calculate cube
inline double cube(int a) { // Fixed "Cube" to "cube" for consistency
    return a * a * a;
}

int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;

    // Displaying the results
    cout << "\nSquare: " << square(a) << endl; // Fixed "squatre" and "0"
    cout << "\nCube: " << cube(a) << endl;

    return 0;
}

#include <iostream>
using namespace std;

// Function declaration/prototype
// The '&' symbol indicates that parameters are passed by reference
void change(int &x, int &y);

int main() {
    int a, b;

    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;

    cout << "\nValues before change:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    // Calling the function
    change(a, b);

    cout << "\nValues after change:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}

// Function definition
void change(int &x, int &y) {
    x = x + 10;
    y = y + 10;
}

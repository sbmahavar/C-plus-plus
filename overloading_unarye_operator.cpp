#include <iostream>
using namespace std;

class Number {
    int a, b;

public:
    // Function to take input
    void input(int x, int y) {
        a = x;
        b = y;
    }

    // Function to display the values
    void show() {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }

    // Declaration of overloaded unary minus operator
    void operator -();
};

// Definition of overloaded unary minus operator
void Number :: operator -() {
    a = -a; // Negate value of a
    b = -b; // Negate value of b
}

int main() {
    Number n1;
    n1.input(10, 20); // Assign initial values
    
    cout << "Before operator overloading:" << endl;
    n1.show();

    -n1; // Activating the overloaded '-' operator

    cout << "\nAfter operator overloading:" << endl;
    n1.show();

    return 0;
}

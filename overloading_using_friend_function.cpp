#include <iostream>
using namespace std;

class Number {
    float a, b;

public:
    void get(float x, float y) {
        a = x;
        b = y;
    }

    void display() {
        cout << "a = " << a << ", ";
        cout << "b = " << b << endl;
    }

    // Declaration of friend function for operator overloading
    friend Number operator*(Number n1, Number n2);
};

// Definition of the friend function
Number operator*(Number n1, Number n2) {
    Number n;
    n.a = n1.a * n2.a; // Multiplies 'a' components
    n.b = n1.b * n2.b; // Multiplies 'b' components
    return n;
}

int main() {
    Number n1;
    n1.get(5, 7);
    cout << "n1: ";
    n1.display();

    Number n2;
    n2.get(2, 3);
    cout << "n2: ";
    n2.display();

    Number n3;
    n3 = n1 * n2; // Using the overloaded * operator

    cout << "\nAfter multiplying n1 and n2:" << endl;
    n3.display();

    return 0;
}

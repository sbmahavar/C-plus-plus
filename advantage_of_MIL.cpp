#include<iostream>
using namespace std;

class Test {
    int a, b; // Private member variables

public:
    // Constructor using Member Initializer List (MIL)
    Test(int x, int y) : a(x), b(y) {
        cout << "Constructor using MIL:" << endl;
    }

    void display() {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

int main() {
    Test t(11, 22); // Corrected object creation syntax
    t.display();
    return 0;
}

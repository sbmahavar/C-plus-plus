#include <iostream>
using namespace std;

class Test {
    int a, b; // Private data members

public:
    // Parameterized Constructor
    Test(int x, int y) {
        a = x;
        b = y;
    }

    void show() {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

int main() {
    // Explicit call to the constructor
    Test t1 = Test(10, 20);
    t1.show();

    // Implicit call to the constructor
    Test t2(111, 222);
    t2.show();

    return 0;
}

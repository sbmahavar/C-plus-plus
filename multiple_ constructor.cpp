#include <iostream>
using namespace std;

class Box {
    double h, w, d; // Height, Width, Depth

public:
    // 1. Default Constructor
    Box() {
        h = w = d = 0;
    }

    // 2. Parameterized Constructor (Single value for a cube)
    Box(double length) {
        h = w = d = length;
    }

    // 3. Parameterized Constructor (Three different values)
    Box(double h1, double w1, double d1) {
        h = h1;
        w = w1;
        d = d1;
    }

    void show() {
        cout << "h=" << h << ", w=" << w << ", d=" << d << endl;
    }

    void volume() {
        double v = h * w * d;
        cout << "Volume: " << v << endl << endl;
    }
};

int main() {
    Box b1;               // Calls default constructor
    Box b2(10);           // Calls constructor with 1 argument
    Box b3(10, 20, 30);   // Calls constructor with 3 arguments

    cout << "--- Box 1 ---" << endl;
    b1.show();
    b1.volume();

    cout << "--- Box 2 ---" << endl;
    b2.show();
    b2.volume();

    cout << "--- Box 3 ---" << endl;
    b3.show();
    b3.volume();

    return 0;
}

#include <iostream>
using namespace std;

class Test {
    int a, b; // Private data members by default

public:
    // Default Constructor
    Test() {
        a = 0;
        b = 0;
    }

    // Member function to display values
    void show() {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

int main() {
    Test t;      // Object 't' is created, and the constructor is called
    t.show();    // Calls the show function to print values
    return 0;
}

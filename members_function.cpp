#include <iostream>
using namespace std;

class Test {
    int a, b; // Private data members by default

public:
    // Default Constructor: Initializes a and b to 0
    Test() {
        a = 0;
        b = 0;
    }

    // Member function to display the values
    void show() {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

int main() {
    Test t;      // Object creation (calls the constructor)
    t.show();    // Calling the show() function
    return 0;
}

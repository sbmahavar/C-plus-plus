#include <iostream>
using namespace std;

// Function prototype: returns a reference to an integer
int& min(int &, int &);

int main() {
    int a, b;
    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;

    // The function returns a reference to either 'a' or 'b' (whichever is smaller).
    // Assigning 0 to the function call modifies the original variable.
    min(a, b) = 0;

    cout << "a = " << a;
    cout << "\nb = " << b;

    return 0;
}

// Function definition
int& min(int &x, int &y) {
    if (x < y)
        return x; // Returns reference to a
    else
        return y; // Returns reference to b
}

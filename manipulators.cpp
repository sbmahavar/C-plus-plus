#include <iostream>
#include <iomanip>  // Required for manipulators like setw, setprecision
#include <conio.h>

using namespace std;

int main() {
    int G = 123;
    float b = 12.345;

    // Part 1: Using setprecision
    cout << "Precision example:" << endl;
    // Displays 'b' with 2 significant digits
    cout << setprecision(2) << b << endl; 

    // Part 2: Using setw and setfill
    cout << "\nSetw and Setfill example:" << endl;
    for (int i = 1; i <= 5; i++) {
        // Sets width to 5 and fills empty spaces with '#'
        cout << setw(5) << setfill('#') << i << endl;
    }

    // Part 3: Printing 1 to 10 in Octal
    cout << "\nPRINTING 1 to 10 in OCTAL:" << endl;
    for (int i = 1; i <= 10; i++) {
        // Uses setiosflags to change base to octal
        cout << setiosflags(ios::oct) << i << " ";
    }

    return 0;
}

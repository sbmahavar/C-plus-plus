#include <iostream>
#include <conio.h>
using namespace std;

class Number {
    int a;
    static int count; // Declaration of static data member

public:
    void showNum() {
        count++; // Increments the shared counter
        a = count;
        cout << "Number: " << a << endl;
    }

    static void showCount() {
        // Static function accessing static member
        cout << "Count: " << count << endl;
    }
};

// Definition and initialization of static data member (Required in C++)
int Number::count = 0;

int main() {
    Number n1, n2, n3;

    // Initial count
    Number::showCount(); 

    // Objects calling member functions
    n1.showNum();
    n2.showNum();
    n3.showNum();

    // Showing final count using different call methods
    Number::showCount();
    n1.showCount(); // Also valid, though Class::func() is preferred

    getch();
    return 0;
}

#include <iostream.h>  // Standard I/O (Old compiler style)
#include <conio.h>     // For clrscr() and getch()

class Numbers {
    int a, b;

public:
    // Function to initialize data members
    void input(int x, int y) {
        a = x;
        b = y;
    }

    // Function taking objects (n1, n2) as arguments
    void sum(Numbers n1, Numbers n2) {
        a = n1.a + n2.a;
        b = n1.b + n2.b;
    }

    // Function to display data
    void output() {
        cout << "a = " << a << " b = " << b << endl;
    }
};

int main() {
    clrscr(); // Clears the console screen
    
    Numbers n1, n2, n3;

    n1.input(100, 200);  // Setting values for n1
    n2.input(10, 20);    // Setting values for n2

    // Passing n1 and n2 as arguments to n3's sum function
    n3.sum(n1, n2);

    // Displaying the results
    n1.output();
    n2.output();
    n3.output();

    getch(); // Waits for a key press
    return 0;
}

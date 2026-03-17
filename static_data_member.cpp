
#include<iostream.h>
#include<conio.h>

class staticEx {
    int a;           // Regular data member (unique to each object)
    static int b;    // Static data member (shared by all objects)

public:
    void getvalue(int x) {
        a = x;
        b++;         // Increments the shared variable
        cout << a << endl;
    }

    void getstatic() {
        cout << b << endl;
    }
};

// Definition of static data member (Required outside the class)
int staticEx::b; 

int main() {
    clrscr();
    staticEx s1, s2; // Two objects created

    // Initial state: b is 0 by default
    cout << "Static value for s1: "; s1.getstatic();
    cout << "Static value for s2: "; s2.getstatic();

    // Modifying values
    cout << "Value for s1: "; s1.getvalue(111); // s1.a = 111, b becomes 1
    cout << "Value for s2: "; s2.getvalue(222); // s2.a = 222, b becomes 2

    // Final state: both objects see the same value for 'b'
    cout << "Static value for s1: "; s1.getstatic();
    cout << "Static value for s2: "; s2.getstatic();

    getch();
    return 0;
}
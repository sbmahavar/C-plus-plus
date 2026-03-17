#include <iostream.h>
#include <conio.h>

class FriendEx {
    int a, b; // Private members by default

public:
    void setvalue(int x, int y) {
        a = x;
        b = y;
    }

    void display() {
        cout << "a = " << a << " b = " << b << endl;
    }

    // Declaration of friend function
    friend void sum(FriendEx f);
};

// Definition of friend function
// Note: It does not use the class name or scope resolution operator (::)
void sum(FriendEx f) {
    int s = f.a + f.b; // Accessing private members 'a' and 'b'
    cout << "Sum: " << s << endl;
}

int main() {
    clrscr(); // Clears the console screen (specific to conio.h)

    FriendEx f1;
    f1.setvalue(100, 200);
    f1.display();
    
    sum(f1); // Passing the object to the friend function

    getch(); // Holds the output screen
    return 0;
}

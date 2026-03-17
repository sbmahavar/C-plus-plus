#include <iostream>
#include <conio.h> // For clrscr() and getch()

using namespace std;

class Test {
    int a, b;      // 4 bytes + 4 bytes
    char c[10];    // 10 bytes
    float d;       // 4 bytes
};

int main() {
    // clrscr();   // Usually used in Turbo C++, modern IDEs don't need this
    
    Test t1;       // Object creation
    
    cout << "Size of t1: " << sizeof(t1) << " Bytes";
    
    getch();
    return 0;
}

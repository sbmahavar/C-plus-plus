#include <iostream>
using namespace std;

class Pointer {
    int a, b;
public:
    void setvalue(int p, int q) {
        a = p;
        b = q;
    }
    void display() {
        cout << "A = " << a << endl;
        cout << "B = " << b << endl;
    }
    friend void add(Pointer p);
    friend void sub(Pointer p);
};

void add(Pointer p) {
    int Pointer::*p1 = &Pointer::a;
    int Pointer::*p2 = &Pointer::b;
    Pointer *pp = &p;
    int s = pp->*p1 + pp->*p2;
    cout << "Addition: " << s << endl;
}

void sub(Pointer p) {
    int Pointer::*p1 = &Pointer::a;
    int Pointer::*p2 = &Pointer::b;
    Pointer *pp = &p;
    int s = pp->*p1 - pp->*p2;
    cout << "Subtraction: " << s << endl;
}

int main() {
    Pointer p;
    p.setvalue(50, 20);
    p.display();
    add(p);
    sub(p);
    return 0;
}

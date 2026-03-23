#include <iostream>
using namespace std;

// Base Class
class base {
    int b; // Private by default
public:
    void getbase(int x) {
        b = x;
    }
    void showbase() {
        cout << "Base: " << b << endl;
    }
};

// Derived Class inheriting from base class
class Derived : public base {
    int d; // Private by default
public:
    void getDerived(int x) {
        d = x;
    }
    void showDerived() {
        cout << "Derived: " << d << endl;
    }
};

int main() {
    Derived d; // Object of the derived class

    // Accessing base class member via derived class object
    d.getbase(100);
    
    // Accessing derived class member
    d.getDerived(200);

    // Displaying values
    d.showbase();
    d.showDerived();

    return 0;
}

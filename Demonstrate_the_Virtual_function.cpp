#include <iostream>
using namespace std;

class baseclass {
public:
    void Nonvirtual() {
        cout << "Non virtual function of base class" << endl;
    }
    
    virtual void virtual_f() {
        cout << "Virtual function of base class" << endl;
    }
};

class Derivedclass : public baseclass {
public:
    void Nonvirtual() {
        cout << "Non virtual function of Derived class" << endl;
    }
    
    void virtual_f() {
        cout << "Virtual function of Derived class" << endl;
    }
};

int main() {
    baseclass b, *bptr;
    bptr = &b;
    
    // Points to base class object
    bptr->virtual_f();     // Calls base class version
    bptr->Nonvirtual();    // Calls base class version

    Derivedclass d;
    bptr = &d;
    
    // Points to derived class object
    bptr->virtual_f();     // Calls Derived class version (Late Binding)
    bptr->Nonvirtual();    // Calls base class version (Early Binding)

    return 0;
}

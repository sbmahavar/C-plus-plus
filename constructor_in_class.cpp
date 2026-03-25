#include <iostream>
#include <conio.h> // Common in Turbo C++ for getch()
using namespace std;

// Base Class (Grandparent)
class Grandparent {
public:
    Grandparent() {
        cout << "Grandparent class constructor called" << endl;
    }
};

// Intermediate Base Class (Parent) inherited from Grandparent
class Parent : public Grandparent {
public:
    Parent() {
        cout << "Parent class constructor called" << endl;
    }
};

// Derived Class (Child) inherited from Parent
class Child : public Parent {
public:
    Child() {
        cout << "Child class constructor called" << endl;
    }
};

int main() {
    // Creating an object of the most derived class
    Child c; 
    
    return 0;
}

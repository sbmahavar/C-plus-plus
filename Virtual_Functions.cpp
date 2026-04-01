#include <iostream>
using namespace std;

// Base Class: Shape (Abstract Class)
class Shape {
protected:
    float d1, d2;
public:
    Shape(float d1, float d2) {
        this->d1 = d1;
        this->d2 = d2;
    }
    // Pure Virtual Function
    virtual void area() = 0; 
};

// Derived Class: Triangle
class Triangle : public Shape {
public:
    Triangle(float b, float h) : Shape(b, h) {}

    void area() {
        cout << "Area of triangle: " << (0.5 * d1 * d2) << endl;
    }
};

// Derived Class: Rectangle
class Rectangle : public Shape {
public:
    Rectangle(float l, float b) : Shape(l, b) {}

    void area() {
        cout << "Area of Rectangle: " << (d1 * d2) << endl;
    }
};

int main() {
    Shape *s; // Base class pointer

    Triangle t(10, 20);
    s = &t;
    s->area(); // Calls Triangle's area

    Rectangle r(10, 20);
    s = &r;
    s->area(); // Calls Rectangle's area

    return 0;
}

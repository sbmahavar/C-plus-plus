#include <iostream>
using namespace std;

// Base Class
class Shape {
protected:
    float dim1, dim2;

public:
    void get_data(float a, float b = 0) {
        dim1 = a;
        dim2 = b;
    }
    
    virtual void area() {
        cout << "Area of shape is 0" << endl;
    }
};

// Derived Class 1: Triangle
class Triangle : public Shape {
public:
    void get_data(float base, float height) {
        dim1 = base;
        dim2 = height;
    }

    void area() {
        float a = 0.5 * dim1 * dim2;
        cout << "Area of Triangle: " << a << endl;
    }
};

// Derived Class 2: Circle
class Circle : public Shape {
public:
    void get_data(float radius) {
        dim1 = radius;
    }

    void area() {
        float a = 3.14 * dim1 * dim1;
        cout << "Area of Circle: " << a << endl;
    }
};

int main() {
    Triangle t;
    t.get_data(10, 20);
    t.area();

    Circle c;
    c.get_data(10);
    c.area();

    return 0;
}

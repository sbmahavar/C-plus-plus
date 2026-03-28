// Program to show the use of pointers to objects
#include <iostream>
using namespace std;

class Student {
    int r_no;
    float per;

public:
    void input(int r, float p) {
        r_no = r;
        per = p;
    }

    void display() {
        cout << "Roll number: " << r_no << endl;
        cout << "Percentage: " << per << endl;
    }
};

int main() {
    int r;
    float p;

    // Creating an array of 3 Student objects dynamically
    Student *s = new Student[3];
    // Creating a temporary pointer to keep track of the start
    Student *temp = s; 

    for (int i = 0; i < 3; i++) {
        cout << "Enter roll number and percentage: ";
        cin >> r >> p;
        s->input(r, p); // Accessing member function using pointer
        s++;            // Moving pointer to the next object
    }

    // Resetting pointer to the beginning for display
    for (int i = 0; i < 3; i++) {
        temp->display();
        temp++;
    }

    return 0;
}

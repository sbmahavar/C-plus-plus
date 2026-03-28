#include<iostream>
#include<cstring> // Needed for strcpy
using namespace std;

class student {
    int r_no;
    float per;
    char name[20]; // Using an array for simplicity/safety

public:
    student(int r, float p, const char* n) {
        r_no = r;
        per = p;
        strcpy(name, n);
    }

    // Returns the student object with the higher percentage
    student& higher(student &s) {
        if (per >= s.per)
            return *this;
        else
            return s;
    }

    void display() {
        cout << "Roll number: " << r_no << endl;
        cout << "Percentage: " << per << endl;
        cout << "Name: " << name << endl;
    }
};

int main() {
    student s1(11, 67.89, "Hwan");
    student s2(22, 66.78, "Peri");

    s1.display();
    s2.display();

    // Finding the student with the higher marks
    student s = s1.higher(s2);
    
    cout << "\nStudent with higher percentage is: " << s.name << endl;

    return 0;
}

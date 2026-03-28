#include <iostream>
using namespace std;

class Time {
    int hours, minutes;

public:
    // Default Constructor
    Time() {
        hours = minutes = 0;
    }

    // Parameterized Constructor (Converts minutes to hours/mins)
    Time(int t) {
        hours = t / 60;
        minutes = t % 60;
    }

    void display() {
        cout << "Hours: " << hours << endl;
        cout << "Minutes: " << minutes << endl;
    }
};

int main() {
    int t;
    cout << "Enter time in minutes: ";
    cin >> t;

    // Creating object 't1' and initializing with total minutes 't'
    Time t1 = t; 
    
    t1.display();

    return 0;
}

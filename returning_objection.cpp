#include <iostream>
using namespace std;

class Time {
    int h, m;
public:
    void settime(int hrs, int mnt) {
        h = hrs;
        m = mnt;
    }

    void display() {
        cout << "Hours: " << h << endl;
        cout << "Minutes: " << m << endl;
    }

    // Declaring the friend function
    friend Time add(Time t1, Time t2);
};

// Definition of the friend function
Time add(Time t1, Time t2) {
    Time t;
    t.m = t1.m + t2.m;
    t.h = t.m / 60;      // Calculate carry-over hours
    t.m = t.m % 60;      // Remainder minutes
    t.h = t.h + t1.h + t2.h;
    return t;
}

int main() {
    Time t1, t2, t3;
    
    t1.settime(1, 30);
    t2.settime(2, 40);
    
    // Using the friend function to add t1 and t2
    t3 = add(t1, t2);
    
    cout << "Time 1:" << endl;
    t1.display();
    
    cout << "\nTime 2:" << endl;
    t2.display();
    
    cout << "\nTotal Time (Added):" << endl;
    t3.display();
    
    return 0;
}

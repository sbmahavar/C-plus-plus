#include <iostream>
using namespace std;

class Interest {
    double p; // Principal
    int n;    // Number of years
    double r; // Rate of interest

public:
    // Constructor with a default argument for the rate (r1 = 12)
    Interest(double p1, int n1, double r1 = 12) {
        p = p1;
        n = n1;
        r = r1;
    }

    void showInterest() {
        double i = (p * r * n) / 100;
        cout << "Simple Interest: " << i << endl;
    }
};

int main() {
    // 1. Calling constructor WITHOUT using the default argument
    cout << "Constructor without default argument: " << endl;
    Interest i1(5000, 5, 10); 
    i1.showInterest();

    // 2. Calling constructor WITH the default argument (rate defaults to 12)
    cout << "\nConstructor with default argument: " << endl;
    Interest i2(5000, 5); 
    i2.showInterest();

    return 0;
}

#include <iostream>
using namespace std;

// Base Class Definition
class BaseClass {
private:
    int pri; // Accessible only within this class

protected:
    int pro; // Accessible within this class and derived classes

public:
    int pub; // Accessible from anywhere

    // Function to set values for all members
    void setValues(int a, int b, int c) {
        pri = a;
        pro = b;
        pub = c;
    }

    // Function to display values from within the base class
    void showValue() {
        cout << "\nAccessing values from Base Class:" << endl;
        cout << "Private: " << pri << endl;
        cout << "Protected: " << pro << endl;
        cout << "Public: " << pub << endl;
    }
};

// Derived Class inheriting publicly from BaseClass
class DerivedClass : public BaseClass {
public:
    void accessValues() {
        cout << "\nAccessing values from Derived Class:" << endl;
        // cout << "Private: " << pri << endl; // Error: private member not accessible
        cout << "Protected: " << pro << endl; // Accessible because it's protected
        cout << "Public: " << pub << endl;    // Accessible because it's public
    }
};

int main() {
    DerivedClass d;
    
    // Setting values using the inherited public method
    d.setValues(111, 222, 333);
    
    // 1. Access via Base Class method
    d.showValue();
    
    // 2. Access via Derived Class method
    d.accessValues();
    
    // 3. Access from the main function
    cout << "\nAccessing values from main function:" << endl;
    // cout << "Private: " << d.pri << endl;   // Error: private
    // cout << "Protected: " << d.pro << endl; // Error: protected
    cout << "Public: " << d.pub << endl;       // Only public is accessible here
    
    return 0;
}

#include <iostream>
using namespace std;

class Outer {
public:
    // Nested class definition
    class Inner {
    public:
        void showInner() {
            cout << "Inner class" << endl;
        }
    };

    // Member function of the Outer class
    void showOuter() {
        cout << "Outer class" << endl;
        
        // Creating an object of the Inner class inside the Outer class
        Inner i;
        i.showInner();
    }
};

int main() {
    // Creating an object of the Outer class
    Outer o1;
    
    // Calling the function that triggers both Outer and Inner output
    o1.showOuter();
    
    return 0;
}

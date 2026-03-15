#include <iostream>
using namespace std;

class number {
private:
    int a; // Data member
    int get(); // Private member function declaration

public:
    void display(); // Public member function declaration
};

// Definition of private member function
int number::get() {
    cout << "Enter number: ";
    cin >> a;
    return a;
}

// Definition of public member function
void number::display() {
    // Calling the private function inside a public one
    cout << "The number is: " << get() << endl;
}

int main() {
    number n;      // Creating an object
    n.display();   // Calling the public function
    return 0;
}

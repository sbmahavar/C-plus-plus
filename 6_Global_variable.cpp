#include <iostream>
using namespace std;

int a = 999; // Global variable

int main() {
    int a = 1; // Local variable

    cout << "Local a: " << a << endl;           // Accesses local variable
    cout << "In global a: " << ::a << endl;    // Accesses global variable using ::
    
    return 0;
}

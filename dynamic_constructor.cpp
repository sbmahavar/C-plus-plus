#include <iostream>
#include <cstring> // Required for strlen and strcpy

using namespace std;

class Text {
    char* name;
    int len;

public:
    // Default Constructor
    Text() {
        len = 0;
        name = new char[1];
        name[0] = '\0'; // Initialize with empty string
    }

    // Parameterized Constructor (Dynamic Constructor)
    Text(const char* n) {
        len = strlen(n);
        name = new char[len + 1]; // Dynamically allocate memory
        strcpy(name, n);
    }

    void show() {
        cout << "Name is: " << name << endl;
    }
    
    // Destructor to free dynamically allocated memory
    ~Text() {
        delete[] name;
    }
};

int main() {
    const char* n = "C jamanadas";
    Text t1;           // Calls default constructor
    Text t2(n);        // Calls parameterized constructor
    
    t1.show();
    t2.show();
    
    return 0;
}

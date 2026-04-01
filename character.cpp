#include <iostream>
#include <cstring> // Required for strlen()

using namespace std;

int main() {
    char name[20];

    cout << "Enter a string: ";
    cin.getline(name, 20);
    cout << endl;

    // First Loop: Prints the string building up (1 char, then 2, then 3...)
    for (int i = 1; i <= strlen(name); i++) {
        cout.write(name, i);
        cout << endl;
    }

    // Second Loop: Prints the string in decreasing length
    for (int i = strlen(name) - 1; i >= 1; i--) {
        cout.write(name, i);
        cout << endl;
    }

    return 0;
}

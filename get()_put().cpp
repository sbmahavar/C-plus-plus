#include <iostream>
using namespace std;

int main() {
    int count = 0;
    char c;

    cout << "Enter your text.\n";

    // Read first character
    cin.get(c);

    // Loop until the newline character ('\n') is found
    while (c != '\n') {
        count++;        // Increment character count
        cout.put(c);    // Output the character
        cin.get(c);     // Read the next character
    }

    cout << "\nTotal number of characters: " << count;

    return 0;
}

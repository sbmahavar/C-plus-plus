#include <iostream>
using namespace std;

// Defining the enumeration
enum week { mon = 1, tue, wed, thu, fri, sat, sun };

int main() {
    int d;
    cout << "Enter Day Number (1-7): ";
    cin >> d;

    // Switch statement using the enum values
    switch (d) {
        case mon:
            cout << "It's Monday";
            break;
        case tue:
            cout << "It's Tuesday";
            break;
        case wed:
            cout << "It's Wednesday";
            break;
        case thu:
            cout << "It's Thursday";
            break;
        case fri:
            cout << "It's Friday";
            break;
        case sat:
            cout << "It's Saturday";
            break;
        case sun:
            cout << "It's Sunday";
            break;
        default:
            cout << "Invalid Day";
            break;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int i, j, k;

    // 1. While loop to print 1 to 5
    i = 1;
    cout << "while loop to print 1 to 5..." << endl;
    while (i <= 5) {
        cout << "i: " << i << endl;
        i++;
    }

    // 2. Do-while loop to print 10 down to 6
    j = 10;
    cout << "Do while loop to print 10 to 6..." << endl;
    do {
        cout << "j: " << j << endl;
        j--;
    } while (j >= 6);

    // 3. For loop to print 11 to 15
    cout << "for loop to print 11 to 15..." << endl;
    for (k = 11; k <= 15; k++) {
        cout << "k: " << k << endl;
    }

    return 0;
}

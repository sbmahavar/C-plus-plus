#include<iostream>
using namespace std;

int main()
{
    char a[10];           // Declares a character array of size 10
    cin.getline(a, 5);    // Reads up to 4 characters (leaving 1 for '\0')
    cout << endl;         // Moves the cursor to a new line
    cout.write(a, 5);     // Outputs 5 characters from the array
    return 0;
}

#include <iostream>
using namespace std;

class Matrix {
    int r, c;     // Rows and Columns
    int **m;      // Pointer to pointer for 2D array

public:
    // Constructor to allocate memory
    Matrix(int x, int y) {
        r = x;
        c = y;
        m = new int*[r]; // Allocate row pointers
        for (int i = 0; i < r; i++) {
            m[i] = new int[c]; // Allocate columns for each row
        }
    }

    // Function to set values at specific indices
    void set_val(int i, int j, int val) {
        m[i][j] = val;
    }

    // Function to display the matrix
    void display() {
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cout << m[i][j] << " ";
            }
            cout << endl;
        }
    }
    
    // Destructor to free memory (Recommended practice)
    ~Matrix() {
        for (int i = 0; i < r; i++) {
            delete[] m[i];
        }
        delete[] m;
    }
};

int main() {
    int r, c, val;
    cout << "Enter size of matrix (rows and columns): ";
    cin >> r >> c;

    Matrix m1(r, c); // Constructor is called here

    cout << "Enter " << r * c << " elements:" << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> val;
            m.set_val(i, j, val);
        }
    }

    cout << "\nThe Matrix is:" << endl;
    m.display();

    return 0;
}

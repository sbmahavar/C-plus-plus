#include <iostream>
using namespace std;

class book {
    // Private by default
    int b_id;
    char name[20];
    float price;

public:
    void input() {
        cout << "Enter book id: ";
        cin >> b_id;
        cout << "Enter book name: ";
        cin >> name;
        cout << "Enter book price: ";
        cin >> price;
    }

    void display() {
        cout << "Book Details..." << endl;
        cout << "Book id: " << b_id << endl;
        cout << "Book name: " << name << endl;
        cout << "Book price: " << price << endl;
    }
};

int main() {
    book b;       // Create object 'b' of class 'book'
    b.input();    // Call input function
    b.display();  // Call display function
    return 0;
}

#include <iostream>
using namespace std;

class book {
    // Private data members
    int b_id;
    char name[20];
    char author[20];

public:
    // Function declarations (prototypes) inside the class
    void input();
    void display();
};

// Defining the 'input' member function outside the class
void book::input() {
    cout << "Enter book id: ";
    cin >> b_id;
    cout << "Enter book name: ";
    cin >> name;
    cout << "Enter author name: ";
    cin >> author;
}

// Defining the 'display' member function outside the class
void book::display() {
    cout << "\n--- book details ---" << endl;
    cout << "book id: " << b_id << endl;
    cout << "book name: " << name << endl;
    cout << "book author: " << author << endl;
}

int main() {
    book b;       // Creating an object of class 'book'
    b.input();    // Calling the input function
    b.display();  // Calling the display function
    
    return 0;
}

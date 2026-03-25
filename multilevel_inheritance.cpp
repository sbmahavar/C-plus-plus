#include <iostream>
using namespace std;

// Base Class
class book {
protected:
    int b_id;
    char b_name[50]; // Changed from pointer to array for simplicity
public:
    void getdata() {
        cout << "Enter book ID: ";
        cin >> b_id;
        cout << "Enter book name: ";
        cin >> b_name;
    }
    void showbook() {
        cout << "Book ID: " << b_id << endl;
        cout << "Book Name: " << b_name << endl;
    }
};

// Intermediate Class inheriting from book
class bookprice : public book {
protected:
    float price;
public:
    void getprice() {
        cout << "Enter book price: ";
        cin >> price;
    }
    void showprice() {
        cout << "Book Price: " << price << endl;
    }
};

// Derived Class inheriting from bookprice
class bookauthor : public bookprice {
    char author[50];
public:
    void get() {
        cout << "Enter Author name: ";
        cin >> author;
    }
    void show() {
        showbook();  // From base class 'book'
        showprice(); // From intermediate class 'bookprice'
        cout << "Book Author: " << author << endl;
    }
};

int main() {
    bookauthor b;
    
    // Inputting data
    b.getdata();
    b.getprice();
    b.get();
    
    cout << "\n--- Book Details ---" << endl;
    // Displaying data using the most derived class method
    b.show();
    
    return 0;
}

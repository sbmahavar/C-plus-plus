#include <iostream>
#include <string.h>
using namespace std;

// Base Class
class Book {
protected:
    int b_id;
    char name[20];
public:
    void getbook() {
        cout << "Enter book id: ";
        cin >> b_id;
        cout << "Enter book name: ";
        cin >> name;
    }
    void showbook() {
        cout << "\nBook ID: " << b_id;
        cout << "\nBook Name: " << name;
    }
};

// Heirarchical Inheritance from Book
class BookPrice : public Book {
protected:
    double price;
public:
    void getprice() {
        cout << "Enter book price: ";
        cin >> price;
    }
    void showprice() {
        cout << "\nBook Price: " << price;
    }
};

// Independent Base Class for Discount
class Discount {
protected:
    double d;
public:
    void getdiscount() {
        cout << "Enter discount (%): ";
        cin >> d;
    }
    void showdiscount() {
        cout << "\nDiscount: " << d << "%";
    }
};

// Hybrid Inheritance: Inherits from BookPrice and Discount
class Publisher : public BookPrice, public Discount {
    double finalPrice;
    char pub[20];
public:
    void getdetails() {
        getbook();      // From Book (via BookPrice)
        getprice();     // From BookPrice
        getdiscount();  // From Discount
        cout << "Enter publisher name: ";
        cin >> pub;
    }

    void display() {
        finalPrice = price - (price * d / 100);
        showbook();
        showprice();
        showdiscount();
        cout << "\nPublisher: " << pub;
        cout << "\nFinal Price after Discount: " << finalPrice << endl;
    }
};

int main() {
    Publisher p;
    p.getdetails();
    p.display();
    return 0;
}

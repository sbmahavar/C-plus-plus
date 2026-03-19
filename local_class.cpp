#include <iostream>
using namespace std;

class test {
public:
    void demo();
};

void test::demo() {
    // Local class definition
    class xyz {
    public:
        void show() {
            cout << "This is show function";
        }
    };

    cout << "Calling show function inside demo: " << endl;
    xyz x;
    x.show();
}

int main() {
    test t1;
    t1.demo();
    return 0;
}

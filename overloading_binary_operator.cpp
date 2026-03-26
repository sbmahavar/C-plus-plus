
// Overloding Binary Opeльна
#include <iostream>
using namespace std;
Class Number
{
    float a, b;
public:
    void input (int x, int y)
    {
        a = x;
        b = y;
    }
    void show()
    {
        cout << "a = " << a;
        cout << " b=" << b << endl;
    }
    Number operator + (Number N2)
    {
        Number n;
        n.a = a + N2.a;
        n.b = b + N2.b;
        return n;
    }
};

int main()
{
    Number n1;
    n1.input(10, 20);
    n1.show();
    Number n2;
    n2.input(100, 300);
    n2.show();
    Number n3 = n1 + n2;
    cout << "After adding n1, n2;" << endl;
    n3.show();
    return 0;
}

#include <iostream>
using namespace std;

class Test
{
    int x;
public:
    Test()
    {
    }
    Test(int a)
    {
        x = a;
    }
    void display()
    {
        cout << "x=" << x << endl;
    }
};

class demo
{
    int d;
    Test t;
public:
    demo(Test t1, int a) : t(t1)
    {
        d = a;
    }
    void show()
    {
        cout << "d=" << d << endl;
    }
};

int main()
{
    Test t(20);
    demo d(t, 20);
    d.show();
    t.display();
    return 0;
}
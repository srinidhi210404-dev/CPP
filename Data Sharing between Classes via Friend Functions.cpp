#include <iostream>
using namespace std;

class B;

class A
{
    int a;
public:
    void getdata()
{
        cout << "Enter the value of A: ";
        cin >> a;
    }
    friend class B;
    int getA()
{
        return a;
    }
};

class B
{
    int b;
public:
    void getdata()
{
        cout << "Enter the value of B: ";
        cin >> b;
    }
    friend class A;
    int getB()
{
        return b;
    }
};
int add(A a1, B b1)
{
    int sum, multiply;
    sum = a1.getA() + b1.getB();
    multiply = a1.getA() * b1.getB();
    cout << "Sum = " << sum << endl;
    cout << "Multiply = " << multiply << endl;
    return 0;
}

int main()
{
    A a1;
    B b1;
    a1.getdata();
    b1.getdata();
    add(a1, b1);
    return 0;
}

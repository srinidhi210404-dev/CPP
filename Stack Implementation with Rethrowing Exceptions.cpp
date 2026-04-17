#include <iostream>
using namespace std;

class stack
{
private:
    int *arr;
    int top, capacity;
public:
    stack(int size)
    {
        arr = new int[size];
        capacity = size;
        top = -1;
    }
    void push(int value)
    {
        if (top == capacity - 1)  // Fixed: == instead of =
        {
            throw int(1);
        }
        arr[++top] = value;
    }
    int pop()
    {
        if (top == -1)
        {
            throw float(2.5);
        }
        return arr[top--];
    }
};

void over(stack &s)
{
    try
    {
        s.push(40);
    }
    catch (int e)
    {
        cout << "rethrow the value" << endl;
        throw;
    }
}

void under(stack &s)
{
    try
    {
        s.pop();
    }
    catch (float e)
    {
        cout << "rethrow the value" << endl;
        throw;
    }
}

int main()
{
    stack s(3);
    s.push(4);
    s.push(7);
    s.push(2);
    try
    {
        over(s);
    }
    catch (int e)
    {
        cout << "stack overflow" << endl;
    }
    s.pop();
    s.pop();
    s.pop();
    try
    {
        under(s);
    }
    catch (float e)
    {
        cout << "under flow" << endl;
    }
    return 0;
}

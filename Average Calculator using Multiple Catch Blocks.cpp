#include <iostream>
using namespace std;

class average
{
public:
    float calci(int a, int b, int c)
    {
        if (a < 0 || b < 0 || c < 0)
        {
            throw int(4);
        }
        if (a + b + c == 0)
        {
            throw float(4.7);
        }
        float x = (a + b + c) / 3;
        return x;
    }
};

void a(average &avg, int a, int b, int c)
{
    try
    {
        float result = avg.calci(a, b, c);
        cout << "average:" << result << endl;
    }
    catch (int e)
    {
        cout << "error caught" << endl;
        throw;
    }
    catch (float e)
    {
        cout << "error caught" << endl;
        throw;
    }
}

int main()
{
    average avg;
    try
    {
        avg.calci(10, -5, 4);
    }
    catch (int e)
    {
        cout << "negative value exception" << endl;
    }
    try
    {
        avg.calci(0, 0, 0);
    }
    catch (float e)
    {
        cout << "divide by zero exception" << endl;
    }
    try
    {
        throw 'a';
    }
    catch (char x)
    {
        cout << "default exception" << endl;
    }
    try
    {
        a(avg, 10, -5, 20);
    }
    catch (int e)
    {
        cout << "rethrown handled" << endl;
    }
    catch (float e)
    {
        cout << "float exception handled" << endl;
    }
    return 0;
}

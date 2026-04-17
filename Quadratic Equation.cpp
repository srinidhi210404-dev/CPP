#include <iostream>
#include <cmath>
using namespace std;
template <typename T>
void root(T a, T b, T c)
{
    T d = b * b - (4 * a * c);

    if (d > 0)
        {
        T root1 = (-b + sqrt(d)) / (2 * a);
        T root2 = (-b - sqrt(d)) / (2 * a);
        cout << "Two distinct real roots:" << endl;
        cout << "Root 1: " << root1 << endl;
        cout << "Root 2: " << root2 << endl;
    }
    else if (d == 0)
        {
        T root1 = -b / (2 * a);
        cout << "One real, repeated root:" << endl;
        cout << "Root: " << root1 << endl;
    }
    else
        {
        T real = -b / (2 * a);
        T imag = sqrt(-d) / (2 * a);
        cout << "Two complex roots:" << endl;
        cout << "Root 1: " << real << " + i" << imag << endl;
        cout << "Root 2: " << real<< " - i" << imag << endl;
    }
}

int main() {
    root(1, -3, 2);
    root(4, 4, 1);
    root(4.5, 7.5, 9.5);
    return 0;
}

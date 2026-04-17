#include <iostream>
using namespace std;
template <typename T>
class Matrix {
public:
    T mat[2][2];
    void get()
        {
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                cin >> mat[i][j];
    }
    void display()
        {
        for (int i = 0; i < 2; i++)
                {
            for (int j = 0; j < 2; j++)
                cout << mat[i][j] << " ";
            cout << endl;
        }
    }

    Matrix<T> add(Matrix<T> b)
        {
        Matrix<T> result;
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                result.mat[i][j] = mat[i][j] + b.mat[i][j];
        return result;
    }

    Matrix<T> multiply(Matrix<T> b)
        {
        Matrix<T> result;
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                        {
                result.mat[i][j] = 0;
                for (int k = 0; k < 2; k++)
                    result.mat[i][j] += mat[i][k] * b.mat[k][j];
            }
        return result;
    }
};
int main()
{
    Matrix<int> A, B;
    cout << "Enter elements of Matrix A (2x2):" << endl;
    A.get();
    cout << "Enter elements of Matrix B (2x2):" << endl;
    B.get();
    Matrix<int> C = A.add(B);
    Matrix<int> D = A.multiply(B);
    C.display();
    D.display();

    Matrix<float> F, G;
    cout << "Enter elements of Float Matrix F (2x2):" << endl;
    F.get();
    cout << "Enter elements of Float Matrix G (2x2):" << endl;
    G.get();
    Matrix<float> H = F.add(G);
    Matrix<float> I = F.multiply(G);
    H.display();
    I.display();
    return 0;
}

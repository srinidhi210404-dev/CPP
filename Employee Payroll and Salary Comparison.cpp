#include <iostream>
using namespace std;
class employee
{
    int no;
    string name;
    float basic, da;
   public:
    float net;
    employee()
    {
        no = 0;
        name = "";
        basic = 0;
        da = 0;
        net = 0;
    }
    void getdata()
    {
        cout << "Enter the employee number: ";
        cin >> no;
        cout << "Enter the employee name: ";
        cin >> name;
        cout << "Enter the basic salary: ";
        cin >> basic;
        cout << "Enter the da: ";
        cin >> da;
    }
    float total()
    {
        net = basic + da;
        return net;
    }
    void print()
    {
        cout << "Employee number: " << no << endl;
        cout << "Employee name: " << name << endl;
        cout << "Employee basic salary: " << basic << endl;
        cout << "Employee da: " << da << endl;
        cout << "Employee net salary: " << net << endl;
    }
};

int main()
{
    employee e[4];


    for (int i = 0; i < 4; i++) {
        cout << "\nEnter details for employee " << i + 1 << ":";
        e[i].getdata();
        e[i].total();
        e[i].print();
    }

    int max = 0, min = 0;

    for (int i = 1; i < 4; i++)
    {
        if (e[i].net > e[max].net)
        {
            max = i;
        }
        if (e[i].net < e[min].net)
        {
            min = i;
        }
    }

    cout << "Employee with Highest Salary";
    e[max].print();

    cout << "\nEmployee with Lowest Salary";
    e[min].print();

    return 0;

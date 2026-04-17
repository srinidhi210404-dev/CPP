#include<iostream>
using namespace std;
class product
{
   int a, b, c;
   public:
   void getdata()
   {
      cout << "Enter the values (3) to be multiplied: ";
      cin >> a >> b >> c;
   }
   void display()
   {
      cout << "a = " << a << endl;
      cout << "b = " << b << endl;
      cout << "c = " << c << endl;
   }
   friend product operator*(product p, int q);
   friend product operator*(int q, product p);
};
product operator*(product p, int q)
{
   product temp;
   temp.a = p.a * q;
   temp.b = p.b * q;
   temp.c = p.c * q;
   return temp;
}
product operator*(int q, product p)
{
   product temp1;
   temp1.a = p.a * q;
   temp1.b = p.b * q;
   temp1.c = p.c * q;
   return temp1;
}
int main()
{
   product p1, p2, p3;
   p1.getdata();
   p2 = p1 * 2;
   p3 = 3 * p1;
   p2.display();
   cout<<" "<<endl;
   p3.display();
   return 0;
}

#include <iostream>
using namespace std;
class student
{
   int regno;
   string name;
   int a, b, c, d, e;
   public:
   student(int x, string y, int z, int l, int m, int n, int o)
   {
      regno = x;
      name = y;
      a = z;
      b = l;
      c = m;
      d = n;
      e = o;
   }
   void display()
   {
      cout << "Register number: " << regno << endl;
      cout << "Name: " << name << endl;
      cout << "Marks" << endl;
      cout << "English: " << a << endl;
      cout << "Maths: " << b << endl;
      cout << "Tamil: " << c << endl;
      cout << "Science: " << d << endl;
      cout << "Social science: " << e << endl << endl;
   }

   student(const student &p)
   {
      regno = p.regno;
      name = p.name;
      a = p.a;
      b = p.b;
      c = p.c;
      d = p.d;
      e = p.e;
   }
};

int main()
{
   student s1(16, "srinidhi", 90, 92,97, 89, 88);
   s1.display();
   student s2(60, "srinivas", 90, 92, 94, 96, 98);
   s2.display();
   student s3(s1);
   student s4 = s1;
   s3.display();
   s4.display();
   return 0;
}

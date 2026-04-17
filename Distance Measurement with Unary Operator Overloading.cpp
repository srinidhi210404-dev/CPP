#include<iostream>
using namespace std;
class dis
{
   int m,cm;
   public:
   void get()
   {
      cout<<"enter meter value:"<<endl;
      cin>>m;
      cout<<"enter the cm value:"<<endl;
      cin>>cm;
   }
   dis operator++()
   {
      dis temp;
      temp.m=++m;
      temp.cm=++cm;
      if (temp.cm>100)
      {
         temp.cm=temp.cm-100;
         temp.m++;
      }
      return temp;
   }
   dis operator++(int)
   {
      dis temp1;
      temp1.m=++m;
      temp1.cm=++cm;
      if(temp1.cm>=100)
      {
         temp1.cm=temp1.cm-100;
         temp1.m++;
      }
      return temp1;
   }
   dis operator--()
   {
      dis temp2;
      temp2.m=--m;
      temp2.cm=--cm;
      if(temp2.cm==0)
      {
         temp2.cm=temp2.cm+100;
         temp2.m--;
      }
      return temp2;
   }
   dis operator--(int)
   {
      dis temp3;
      temp3.m=--m;
      temp3.cm=--cm;
      if(temp3.cm<0)
      {
         temp3.cm=temp3.cm+100;
         temp3.m--;
      }
      return temp3;
   }
   void print()
   {
      cout<<m<<endl;
      cout<<cm<<endl;
   }
};
int main()
{
   dis d1;
   d1.get();
   dis d2=++d1;
   dis d3=d1++;
   dis d4=--d1;
   dis d5=d1--;
   cout<<"++d:";
   d2.print();
    cout<<"d++:";
   d3.print();
    cout<<"--d:";
   d4.print();
    cout<<"d--:";
   d5.print();
   return 0;
}

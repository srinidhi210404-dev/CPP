#include<iostream>
using namespace std;
class calci
{
int temp,dec,i,count;
public:
calci()
{
   count=0;
cout<<"enter the decimal number";
cin>>dec;
}
void data()
{
temp=dec;
while(dec!=0)
{
   dec=dec/2;
   count++;
}
int*bcd=new int[count+1];
for(i=0;temp>0;i++)
{
   bcd[i]=temp%2;
   temp=temp/2;
}
for(count=count-1;count>=0;count--)
{
cout<<bcd[count];
}
}
};
int main()
{
calci b1;
b1.data();
return 0;
}

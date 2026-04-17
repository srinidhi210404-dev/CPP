

#include<iostream>
#include<cstring>
using namespace std;
class String
{
   int t_length;
   char*data;
public:
String()
{
data=new char[1];
data[0]='\0';
}
String(const char*str)
{
data=new char[strlen(str)+1];
strcpy(data,str);
}
String(const char*str1,const char*str2)
{
t_length=strlen(str1)+strlen(str2);
data=new char[t_length+1];
strcpy(data,str1);
strcat(data,str2);
}
~String()
{
delete[]data;
}
void display()
{
cout<<data<<endl;
}
};
int main()
{
String s1;
s1.display();
String s2("sarmi");
s2.display();
String s3("sarmi","sweety");
s3.display();
return 0;
}

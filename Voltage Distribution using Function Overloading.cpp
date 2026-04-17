#include<iostream>
using namespace std;
class calci
{
        float I,v1,v2,v3;
        public:
                void Resistence (float a,float b)
                {
                        I=100/(a+b);
                        v1=I*a;
                        v2=I*b;
                        cout<<"Voltage across R1="<<v1<<endl;
                        cout<<"Voltage across R2="<<v2<<endl;

                }
                void Resistence (float a,float b,float c)
                {
                        I=100/(a+b+c);
                        v1=I*a;
                        v2=I*b;
                        v3=I+c;
                        cout<<"\nVoltage across R1="<<v1<<endl;
                        cout<<"Voltage across R2="<<v2<<endl;
                        cout<<"Voltage across R3="<<v3<<endl;
                }
};
int main()
{
        calci a1;
        a1.Resistence(167.6,220.5);
        a1.Resistence(225.6,66.7,120.5);
        return 0;
}

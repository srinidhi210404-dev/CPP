#include<iostream>
using namespace std;
class generator
{
        float E,I1,I2;
        public:
                void series(float b=1.2,float c=6,float d=220)
                {
                        float a=15.5;
                        E=d+a*(b+c);
                        cout<<"EMF induced in series Dc generator:"<<E<<endl;
                }
                void series(int a,float b=220,float c=75,float d=1.2)
                {
                        I1=b/c;
                        I2=a+I1;
                        E=b+(I2*d);
                        cout<<"EMF induced in series shunt generator:"<<E<<endl;
                }
                void series(float a,int b,float c=220,float d=75,float e=1.2,float f=6)
                {
                        I1=a+b;
                        E=c+I1*(e+f);
                        cout<<"EMF induced in compound DC generator:"<<E<<endl;
                }
};
int main()
{
        generator g1;
        g1.series(15);
        g1.series(16.2,17);
        g1.series();
        return 0;
}

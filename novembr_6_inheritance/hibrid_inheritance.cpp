// 09/11/2024
// hibrid inheritance
// it is collection of diffrent types of inheritance 
#include <iostream>
using namespace std;
class RBI
{
    public:void f1()
    {
       cout<<"\nRBI Class";
    }
};
class SBI:virtual public RBI
{
    public:void f3()
    {
        cout<<"\nSBI Class";
    }
};
class AXIS:virtual public RBI
{
    public:void f2()
    {
        cout<<"\nAXIS Class";
    }
};
class customer:public AXIS,public SBI
{
    public:void f4()
    {
        cout<<"\npaisa doob gaya";
    }
};
int main()
{
    customer c;
    c.f1();
    c.f2();
    c.f3();
    c.f4();
}
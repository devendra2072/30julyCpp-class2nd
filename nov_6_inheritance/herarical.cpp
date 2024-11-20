// 08/11/2024

#include <iostream>
using namespace std;
class RBI
{
 public:void f1()
 {
    cout<<"\nRBI";
 }
};
class AXIS:public RBI
{
 public:void f2()
 {
    cout<<"\nAXIS";
 }
};
class SBI:public RBI
{
    public:void f3()
    {
        cout<<"\nSBI";
    }
};
class PNB:public RBI
{
    public:void f4()
    {
        cout<<"\nPNB";
    }
};

int main()
{
  PNB obj;
  obj.f4();
  obj.f1();
}
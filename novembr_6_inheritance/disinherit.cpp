// tu protect from inherit
#include<iostream>
using namespace std;
class RBI final  // disinherit from final keywords
{
    public:void msg()
    {
        cout<<"\nRbi class \n";
    }
};
class SBI:public RBI
{
    public:void show()
    {
        cout<<"\nSBI class\n";
    }
};
int main()
{
    SBI s;
    s.show();
}
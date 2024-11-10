// 9/11/2024
#include<iostream>
using namespace std;
int axis(int code, int pwd)
{
    if (code==111 && pwd==101)
    {
        return 10000;
    }
}
int sbi(int code ,int pwd)
{
    if (code==222 && pwd==201)
    {
        return 20000;
    }  
}
int main()
{
    int (*atm) (int ,int);
    int c,p;
    cout<<"enter code & pwd\n";
    cin>>c>>p;
    atm=sbi;
    cout<<"balance of sbi acnt="<<atm(c,p)<<"\n";
    atm=axis;
    cout<<"balance of axis acnt="<<atm(c,p);
}
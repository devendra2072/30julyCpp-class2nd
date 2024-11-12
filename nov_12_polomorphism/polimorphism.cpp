// function overiding:- main function ke name same parameter same signature same
// wap to vertual class


//diamond problem does not work on single inherit class.
//polymorphism top to bottom approach
//concept function over-rinding in this signature is same and without parameter int void in both
//compile time and run time polymorphism.here we get the output in runtime.
//in polymorphism you have to make normal and pointer object---//in this we use function overriding--here we make two type of function (virtual and pure virtual function)
//and one more thing-- we make a super class and abstract class.
//every-time you have to make pointer object of root class//we have to create normal object of each class(sbi)//every process takes place so rbi should know from where the transition is happen
// -> this operator is used for pointer object. (we have to make rbi virtual)//---- here Rbi is refer as a super class. every class inherit the root classd

#include<iostream>
using namespace std;
class RBI  // super classs 
{
    public:virtual void msg()
    {
        cout<<"\nRbi class \n";
    }
};

class SBI:public RBI 
{
    public:virtual void msg()
    {
        cout<<"\nsbi class \n";
    }
};
class AXIS:public RBI
{
    public:void msg()
    {
        cout<<"\nAXIS class \n";
    }
};
int main()
{
    RBI *rb;
    RBI p;
    rb= &p;
    rb->msg();
    // SBI obj;
    // AXIS obj2;
    // rb=&obj2;
    // rb->msg();
    // rb=&obj;
    // rb->msg();
}
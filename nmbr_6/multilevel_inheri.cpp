// date 07/11/2024
// #include<iostream>
// using namespace std;
// //in a multilevel inheritance there are more than two class and also there are multipl paraent and each child class inherits  the property of previous class
// class rbi
// {
//     public:void msg()
//     {
//         cout<<"\nclass rbi\n";
//     }
// };
// class sbi:public rbi
// {
//     public:void show()
//     {
//         cout<<"\nclass sbi\n";
//     }
// };
// class customer:public sbi
// {

//   public:void acnt()
// {
//     cout<<"paisa doob gya\n";
// }
// };
// int main()
// {
//     customer c;
//     c.acnt();
//     c.show();
//     c.msg();

// }


//  protected member ko child class function ke under hi access kar sakte hai 
#include<iostream>
using namespace std;
class rbi
{
    protected:int a=-1000;
    public:void msg()
    {
        cout<<"\nclass rbi\n";
    }
};
class sbi:public rbi
{
    public:void show()
    {
        cout<<"\nclass sbi\n";
    }
};
class customer:public sbi
{

  public:void acnt()
{
    cout<<"paisa doob gya\n";
    cout<<"rs apko dena hai\n";
}
};
int main()
{
    customer c;
    c.acnt();
    c.show();
    c.msg();

}
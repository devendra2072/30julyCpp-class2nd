// operator overloading:-  
// types = 1. unary operator overloading  2. binary operator overloading

// 1. unary operator overloading

// #include <iostream>
// using namespace std;
// class cyb
// {
//     public:int a;
//     public:cyb(int x)
//     {
//         a = x;
//     }
// };
// int main()
// {
//     cyb obj1(10);
//     cyb obj2(20);
//     cout<<obj1+obj2.a;
// }


// #include <iostream>
// using namespace std;
// class cyb
// {
//     public:int a;
//     public:cyb(int x)
//     {
//         a = x;
//     }
//     int operator ++()  //unary operator
//     {
//         a++;
//         return a;
//     }
//     int operator --() //unary operator
//     {
//         a--;
//         return a;
//     }
// };

// int main()
// {
//     cyb obj1(10);
//     cout<<--obj1<<"\n";
// }

// binary operator 
// wap to sum of two number  using in binary operator overloading  ke thorugh
#include <iostream>
using namespace std;
class cyb
{
    public:int a;
    public:cyb(int x)
    {
        a = x;
    }
    void operator+(cyb &cl)   // * , - , / ,+
    {
        a = a + cl.a;
        cout<<a;

    }
};

int main()
{
    cyb obj1(10);
    cyb obj2(20);
    obj1+(obj2);
}
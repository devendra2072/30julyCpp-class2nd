// #include<iostream>
// using namespace std;
// class SBI {
//     public:SBI()
//     {
//         cout << "\nclass SBI\n";
//     }
// };
// class AXIS
// {
//     public:AXIS()
//     {
//         cout << "\nclass AXIS\n";
//     }
// };
// class CUSTOMER:public AXIS, public SBI
// {
//     public: CUSTOMER()
//     {
//         cout << "paisa doob gaya\n";
//     }
// };

// int main()
// {
//     CUSTOMER c;
// }




// // ===========daimond problen===========
// #include <iostream>
// using namespace std;
// class SBI
// {
// public:void msg()
//     {
//         cout << "\n class SBI\n";
//     }
// };
// class AXIS
// {
// public:void info()
//     {
//         cout << "\nclass AXIS\n";
//     }
// };
// class customer : public AXIS, public SBI
// {
// public:void show()
//     {
//         cout << "paisa doob gaya\n";
//     }
// };
// int main()
// {
//     customer c;
//     c.show();
//     c.msg();
// }

//error aayenga ==
#include <iostream>
using namespace std;
class SBI
{
public:void msg()
    {
        cout << "\n class SBI\n";
    }
};
class AXIS
{
public:void msg()
    {
        cout << "\nclass AXIS\n";
    }
};
class customer : public AXIS, public SBI
{
public:void show()
    {
        cout << "paisa doob gaya\n";
    }
};
int main()
{
    customer c;
    c.show();
    c.msg();
}

// // daimond problem ko solve karne ke liye vertual keyword ka use karte hai 
// #include<iostream>
// using namespace std;
// class RBI
// {
//     public:int r=1000;
// };
// class SBI:virtual public RBI
// {
//    public:int s=2000;
// };
// class AXIS:virtual public RBI
// {
//    public:int a=3000;
// };
// class CUST:public SBI,public AXIS
// {
//    public:int c=500;
// };
// int main()
// {
//     CUST obj;
//     cout<<obj.a<<"\n";
//     cout<<obj.s<<"\n";
//     cout<<obj.c<<"\n";
//     cout<<obj.r;
// }


// #include<iostream>
// using namespace std;
// class SBI
// {
//     public:void fun()
//     {
//       cout<<"\nSBI";
//     }
// };
// class AXIS
// {
//     public:void fun()
//     {
//         cout<<"\nAXIS";
//     }
// };

// class CUST:public SBI,public AXIS
// {

// };
// int main()
// {
//  CUST obj;
//  obj.fun();
// }
// #include<iostream>
// using namespace  std;
// struct emp // collection of user defined datatypes
// {
//   int age;
//   char name[10];
//   float salary;
//   bool status;
//   void hello()
//   {
//     cout<<"\ndone";
//   }
// }v;
// int main()
// {
//  struct emp v;
//  cout<<"enter name \n";
//  cin>>v.name;
//  cout<<"enter age \n";
//  cin>>v.age;
//  cout<<"enter salary \n";
//  cin>>v.salary;
//  cout<<"u r merried \n";
//  cin>>v.status;
//  v.hello();
// };

// there are four pilllers in oops
// 1 class && object
// 2 encaplsulation
// 3 abstract
// 4 inheritance

// class :- blue print of object or collection of data members && member functions  class :- never ocupite the memory

// object:- instance of a class or  real world entity witch occupies space & having its own behaviors  , ocupie the 1 byte memory by default

// ==================================Single class================

// #include<iostream>
// using namespace  std;
// class student
// {
// public:void show()
// {
//     cout<<"\n hello \n";
// }
// };
// int main()
// {
// student obj;
// cout<<sizeof(obj);
// obj.show();  //access the function
// }

// #include <iostream>
// using namespace std;
// class student
// {
// public:int a = 10;
// };
// int main()
// {
//     student obj;
//     cout << obj.a;
// }

// function print karne ke liye
// #include <iostream>
// using namespace std;
// class student
// {
//     int balance = 10; // data members
// public:
//     void show() // member function
//     {
//         cout << balance;
//     }
// };
// int main()
// {
//     student obj;
//     obj.show(); // access the function
// }

// wap to  print the sum a+b and  table generate any number

// #include <iostream>
// using namespace std;
// class student
// {
// public:
//     void sum(int a, int b) // member function
//     {
//         cout << "sum=" << a + b << "\n";
//     }
//     void table(int d)
//     {
//         for (int i = 1; i <= 10; i++)
//         {
//             cout << i * d << "\t";
//         }
//     }
// };
// int main()
// {
//     student obj;
//     int x, y;
//     cout << "enter 2 number=";
//     cin >> x >> y;
//     obj.sum(x, y);
//     cout << "enter any number=";
//     cin >> x;
//     obj.table(x);
// }

// ismain class name nahi diya hai
// #include <iostream>
// using namespace std;
// class
// {
// public:
//     void sum(int a, int b) // member function
//     {
//         cout << "sum=" << a + b << "\n";
//     }
//     void table(int d)
//     {
//         for (int i = 1; i <= 10; i++)
//         {
//             cout << i * d << "\t";
//         }
//     }
// } obj;
// int main()
// {
//     int x, y;
//     cout << "enter 2 number=";
//     cin >> x >> y;
//     obj.sum(x, y);
//     cout << "enter any number=";
//     cin >> x;
//     obj.table(x);
// }


//========================================= types of classes===================
// 1 single class

// 2 anonymous class
// a class witch dosen not have  its own name as anonymous class

// #include <iostream>
// using namespace std;
// class h1
// {
//     int c;

// public:
//     int sum(int x, int y)
//     {
//         c = x + y;
//         return c;
//     }
//     void show()
//     {
//         cout << "sum=" << c << "\n";
//     }
// };

// int main()
// {
//     h1 obj;
//     cout << obj.sum(2, 5);
//     obj.show();
// }

// function decleare inside the  class and define outside the class
// scope resoluation :: oprator

// #include <iostream>
// using namespace std;
// int a = 90;
// int main()
// {
//     int a = 9;
//     cout << ::a;
// }



// #include <iostream>
// using namespace std;

// class cybrom {
//     int c;
//     public:int sum(int x,int y); // we have initialized the function;
//     void show();

// };
// int cybrom::sum(int x,int y){ // we have declared the functions
// // we cannot re-Define a function once its already define
// // We can only define the function only if the function is declared;
//      c = x+y;
//      return c;

// }
// void cybrom::show(){
//     cout<<c;
// }

// int main() {
//     cybrom obj;
//    int x,y;
//    cout<<"Enter two numbers";

//      cin>>x>>y;
//      obj.sum(x,y);
//      obj.show();

//     return 0;
// }








#include <iostream>
using namespace std;
class h1
{
int c;
public:int sum(int x, int y)
    {
        c=x+y;
    }
    void show()
    {
        cout<<c;
    }
};

int main()
{
    h1 obj;
    obj.sum(2, 5);
    cout<<obj.c;
}



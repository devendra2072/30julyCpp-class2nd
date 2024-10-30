
// //constructor is used to allocate the memory of object by default each class having their own constructor
// //there are following types of constructor
// //1. default constructor 2. parametrized constructor. 3. copy constructor(deep copy and swallow copy)
// //special function is called constructor.
// //constructor is by default public. class name and without parameter class name and function name should be same. is a default constructor.
// // any constructor does not any return type.it is used to allocate the memory.
// /// implicite calling  and object explicit
// // constructor ko spacial function bhi bola jata hai
// #include<iostream>
// using namespace std;
// class student
// {
//     public:student()  // default constructor
//     {
//         cout<<"memory allocated\n";
//     }
//     // public:classname( datatype variable){
//     //     statement/code;
//     // }
//     student(int a)//parametrized constructor
//     {
//         cout<<"value="<<a<<"\n";
//     }
// };
// int main()
// {
//     student p;
//     student t(40);
// }
// parameterized constructor in a pc we use parameter while  creating  it.
// if a class having more then 1 constructer is called constructor overloading

// this pointer use

// constant value ko reinitilized nahi kar sakte
// -> using this symbol

// #include<iostream>
// using namespace std;
// class student
// {
//     int info;

//     public:student(int info)//parametrized constructor
//     {
//       this->info = info;
//     }
//     void show()
//     {
//         cout<<"value="<<info;
//     }
// };
// int main()
// {
//     student t(40);
//     t.show();
// }

// initilizer:-
// iska use constant value ko re initilized karne ke liye initilizer ka use karne ke liye banay gaya hai

// #include <iostream>
// using namespace std;

// class Rbi {
//     int roi, amt;

// public:
//     // Corrected initializer list syntax
//     Rbi(int r, int a) : roi(r), amt(a) {
//         cout << "Roi=" << roi << "\n";
//         cout << "Amount=" << amt << "\n";
//     }
// };

// int main() {
//     Rbi xyz(7, 10000);
//     Rbi abc(8, 10000);
//     return 0; // Added return statement for main
// }

// constructor size 
#include<iostream>
using namespace std;
class cybrom
{
    int a;
    public:cybrom()
    {
        cout<<"memory  allocation\n";
    }
};
int main()
{
    cybrom m;
    cout<<sizeof(m);
}

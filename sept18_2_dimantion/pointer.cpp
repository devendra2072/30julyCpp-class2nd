// reference variable=---------------------------------------
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=12;     //local variable
//     int &b=a;      /reference variable
//     cout<<"address of a="<<&a<<"\n";
//     cout<<"adress of b="<<&b<<"\n";
//     cout<<"a="<<a<<"\n";
//     cout<<"b="<<b<<"\n";
//     b=40;
//     cout<<"a="<<a<<"\n";
//     cout<<"b="<<b<<"\n";
// }

// pointer variable----------------------
// work for reference
//pointer carry  the memory
// but reference not carry the memory
//wild pointer (awara pointer)

#include <iostream>
using namespace std;
int main()
{
    int k = 100;
    int *t;   //wild pointer
    int *ptr=NULL;   //NULL pointer
    ptr=&k;  //reference
    cout<<*ptr;    //de-reference
}

//reference=address and de-reference=value

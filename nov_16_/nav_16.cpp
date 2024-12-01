// // wap to print the number of objects.

// #include <iostream>
// using namespace std;
// int c;
// class cybrom {
// public:cybrom()
//   {
//     c++;
//     cout << "Object " << c << " created\n";
//   };                                                   
// };
// int main() {
//     cybrom c1;
//     cybrom c2;
//     cybrom c3;
// }

// W.A.P to find out the Elder Customer ?

// #include<iostream>
// #include<string>
// using namespace std;
// class person
// {
//     public:
//     string name1;
//     int age1;
//     person(string n,int a)
//     {
//         name1=n;
//         age1=a;
//     }
// };
// int main()
// {
//     person obj1("AMIT",20);
//     person obj2("AMIT",20);
// }


//W.A.P to find out the Elder Customer ?

#include <iostream>
#include<string>
using namespace std;
class person{
    public:int age;
    public:string Name;
    
    public:person(string n,int a){
        age = a;
        Name = n;
    }
};
int main() {   
    person b("devendra",54);
    person c("nimish",26);
    
    if(b.age>c.age){
        cout<<b.Name;
    }
    else{
        cout<<c.Name;
    }
// }
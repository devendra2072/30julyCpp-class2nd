// copy constructor
// 1 shallow copy by default hota hai
// 2 deep copy // hume banana hota hai

// 1 shallow copy
// #include <iostream>
// using namespace std;
// class Rbi
// {
//     int roi;

// public:Rbi(int r)
//     {
//         roi = r;
//     }
//     void show()
//     {
//         cout << "ROI: " << roi << "\n";
//     }
//     void incriment()
//     {
//         roi++;
//     }
// };
// int main()
// {
//     Rbi Axis(9);
//     Axis.show();
//     Rbi Sbi(Axis); // call copy constructor // shallow copy by default hota hai
//     Sbi.show();
//     Rbi pnb=Axis; // implicit asssinment copy constructor// shallow copy by default
//     pnb.show();
//     Axis.incriment();

// }

// #include<iostream>
// using namespace std;

// //swallow copy is by default it is there.
// //it will copy the object  (implisit assignment copy constructor).

// class Rbi
// {
//     int roi;
//     public:Rbi(int r)
//     {
//         roi=r;
//     }
//     void show()
//     {
//         cout<<"ROI="<<roi<<"\n";
//     }
// };
// int main()
// {
//     Rbi axis(9);
//     axis.show();
//     Rbi Sbi(axis);//call copy constructor.
//     Sbi.show();
//     Rbi Pnb=axis;//implicit assignment copy constructor
//     Pnb.show();
// }

// #include<iostream>
// using namespace std;
// class student
// {
//     int k;
//     public:student (int a)
//     {
//         k=a;
//     }
//     void show()
//     {
//         cout<<k<<"\n";
//     }
//     void add()
//     {
//         k++;
//     }
// };
// int main()
// {
//     student s1(3);
//     student s2(s1);
//     s1.show();
//     s2.show();
//     s2.add();
//     cout<<"\nvalue of s=";
//     s2.show();
//     s1.show();
// }

// jab bhi pointer hota hai shearing hoti hai
// stack main data copy hota hai
// #include <iostream>
// using namespace std;
// class cybrom
// {
//  int r;
//  public:cybrom(int a)
//  {
//     r=a;

//  }
//  void show()
//  {
//     cout<<r<<"\n";
//  }
//  void update()
//  {
//     r++;
//  }
// };
// int main()
// {
//   cybrom obj1(20); //obj=r=20
//   obj1.show();
//   cybrom obj2(obj1); // obj=r=20
//   obj2.update();
//   obj1.show();
//   obj2.show();
// }

// heap  memory share karta hai
// shallo copy  to deep cop

// #include <iostream>
// // #include<cstring>
// #include<string.h>
// using namespace std;

// class cybrom
// {
//     char *name;

// public:
//     cybrom(char *n)
//     {
//         name = new char[20];  // 20 is size of array 
//         strcpy(name, n);
//     }
//     void show()
//     {
//         cout << "name=" << name << "\n";
//     }
//     void merges(char *c)
//     {
//         strcat(name, c);
//     }
// };
// int main()
// {
//     cybrom c1("amit");
//     cybrom c2(c1);
//     c1.show();
    // c2.show();
    // c1.merges("sharma");
    // c1.show();
    // c2.show();
// }



//deep copy main new memory banate hai run time main 
// pointer* with new keyword 

// non primitive data type 
// dynamic memory  : use and delete memory
// ~ 

#include<iostream>
#include<string.h>
using namespace std;

class cybrom
{
    char *name;
    public:cybrom(char *n)
    {
        name=new char[30];
        strcpy(name,n);
    }
    void show()
    {
        cout<<"name="<<name<<"\n";
    }
    void merges(char *c)
    {
        strcat(name,c);
    }
    cybrom(cybrom &ob)
    {
        name=new char[30];
        strcpy(name,ob.name);
    }
    ~cybrom()
    {
        cout<<"\n memory relesed";
        delete []name;
    }
};
int main()
{
    cybrom obj1("rohan");
    cybrom obj2(obj1);
    obj1.show();
    obj2.show();
    obj1.merges("sharma");
    cout<<"\nmerge of obj1=";
    obj1.show();
    cout<<"\nmerge of obj2=";
    obj2.show();
    
}

// pointer* with new keyword 
// distructor ~ use 
// #include<iostream>
// using namespace std;
// class login{
//     public:login()
//     {
//         cout<<"memory created\n";
//     }
//     ~login()
//     {
//         cout<<"memory realeased";
//     }
// };
// int main()
// {
//     login d;
// }
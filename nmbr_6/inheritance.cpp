// 5/6=11=2024
/*  single     a->b
  multilevel  a->b->c                            d
  multiple    a      b     herarichal   a        |     c
              |-> c<-|                  |------> c < -----|
 */
//inheritance is used to acquire the proporty of parent class
//we neeed not create multiple objects we only create an object of
//child class and with the help of it we can acess the member function of child class
//as well as parent class


//when object is created firstly memery created for parent and than child
//but when we call any function firstly it check in its self class
//in which object is created and than go to parent class

/*#include<iostream>
using namespace  std;
class  college
{
    int a,b;
    public:void principal()
    {
        cout<<"hello"<<endl;

    }
};
class student:public college //student inherit the college class
{
    int c;
    public:void principal()
    {
        cout<<"a b c "<<endl;
    }
};
int main()
{
    student s;
    s.principle();// it call only function of student class

}*/

// #include<iostream>
// using namespace  std;
// class  college
// {
//     int a,b;
//     public:college()
//     {
//         cout<<"memory allocated to college class"<<endl;

//     }
// };
// class student:public college //student inherit the college class
// {
//     int c;
//     public:student()
//     {
//         cout<<"memory allocated to student class "<<endl;
//     }
// };
// int main()
// {
//     student s; //it show that memory allocated to parent first and
//             //than child class...

// }

// #include<iostream>
// using namespace std;
// class student2;
// class student1
// {
//     int marks= 450;
//     public:void show()
//     {
//         cout<<"\ntotal marks of tenth class of student1\n="<<marks;
//     }
//     friend void result(student1,student2);
// };
// class student2
// {
//     int marks=400;
//     public:void show()
//     {
//         cout<<"\ntotal marks of tenth class of student2\n="<<marks;
//     }
//     friend void result(student1,student2);
// };
// void result(student1 x,student2 y)
// {
//     if(x.marks>y.marks)
//     {
//         cout<<"\nhightest score of student1="<<x.marks;
//     }
//     else{
//         cout<<"\nhightest score of student1="<<y.marks;
//     }
// }
// int main()
// {
//     student1 st1;
//     st1.show();
//     student2 st2;
//     st2.show();
//     result(st1,st2);
// }
// //to access the private data member or a member function of any class we use the member function without making public.
// //you just have to declare the class
// //at the time we define the



// 06/11/2024




// #include<iostream>
// using namespace std;
// //types of inheritance
// //1.single
// //2.multiple
// //3.multilevel
// //4.Hierachical
// //5.hybrid.
// //in a single inheritance there are having only two class where the first class is called the parent class and the second one is called child class and child class always inherite the property of of parent class and we create the ovbject of chile class and with
// //the help of it we can access the member function of child class ands the parent class.
// //way to declare the single inheritance
// // class parent
// //{

// //};

// //class child:public parent
// //{

// //};
// class rbi
// {
//     public:void msg()
//     {
//         cout<<"class rbi\n";
//     }
// };
// class sbi:public rbi
// {
//     public:void info()
//     {
//         cout<<"class sbi\n";
//     }
// };
// int main()
// {
//     sbi customer;
//     customer.info();
//     customer.msg();
// }
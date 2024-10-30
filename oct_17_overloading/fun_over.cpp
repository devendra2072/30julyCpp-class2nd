// function overloading
// signature kahte hai
// if a class having more then one function with the same name but using diffrent is called function overloading in a class
// #include<iostream>
// using namespace std;
// class student
// {
//     public:void sum()
//     {
//         cout<<"sum program\n";

//     }
//     void sum (int a, int b)
//     {
//         cout<<"result: "<<a+b<<"\n";

//     }
// };
// int main()
// {
//     student s;
//     s.sum();
//     s.sum(5,6);
// }

// static function

// #include <iostream>
// using namespace std;
// class student
// {
// public:
//     static void show()
//     {
//         cout << "static function\n";
//     }

// public:
//     static void show1()
//     {
//         cout << "static function\n";
//     }
// };
// int main()
// {
//     student::show();
//     student::show1();
// }

// #include <iostream>
// using namespace std;
// class student
// {
// public:static int a;
// public:static void show()
//     {
//         cout << "static function\n";
//     }
//     void hello()
//     {
//         cout << "\n hello\n";
//     }
// };
// int student::a;
// int main()
// {
//     student::show();
//     student d;
//     d.hello();
//     cout << student::a;
// }

// #include <iostream>
// using namespace std;
// class student
// {
//     static int a, b;

// public:static void show()
//     {
//         a = 10;
//         b = 20;
//         cout << a + b;
//     }
//     void hello()
//     {
//         cout << "\n hello\n";
//     }
// };
// int student::a;
// int student::b;
// int main()
// {
//     student::show();
//     student d;
//     d.hello();
// }

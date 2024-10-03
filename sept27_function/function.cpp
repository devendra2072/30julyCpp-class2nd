// #include <iostream>
// #include <string.h>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int s = 81;
//     cout << sqrt(s) << "\n" : cout << pow(2, 3) << "\n" : cout << max(2, 3) << "\n" : cout << min(10, 34) << "\n":
// }
// #include <iostream>
// using namespace std;
// #include <string.h>
// int main()
// {
// char s[] = "welcome";
// char t[] = "CYBROM";

//     cout<<strlen(s)<<"\n"; //strlen (string); lenth of string
//     cout<<strrev(s)<<"\n"; //reverse of string
//     cout<<strupr(s)<<"\n"; //convert into uper latters
//     cout<<strlwr(t)<<"\n"; //convert lower latters
//     cout<<strcat(s,t)<<"\n"; // merge two strings  (contitinet)
//    // strcopy(s,t);  // get copy of second string into first string
//     cout<<"s="<<s<<"\n";
//     cout<<"t="<<t<<"\n";

// char pwd[] = "welcome";
// char repwd[] = "welcome";
// if (strcmp(pwd, repwd) == 0) // GEt compare two strings
// {
//     cout << "pwd matched";
// }
// else
// {
//     cout << "repwd not matched";
// }
// }

// void :- ak data type type hot hai ye blank hota hai empty

// #include<iostream>
// using  namespace std;
// // non parameter no return value is used for read only
// int c;
// // function which dose not return value
// // 1 without parameter
// //syntex:
// // void functionname()
// // {
// //     statement/code;
// // }

// // without parameter
// void display ()
// {
//     cout<<"welcome \n";
// }
// void show()
// {
//     cout<<"sum="<<c;
// }
// // with parameter & no return  value
// //void functionname (datatype var, datattype var)
// // {
// //     statment/code;
// // }

// void sum (int a, int b)
// {
//     c=a+b;
// }
// int main()
// {
//     display();
//     int x,y;
//     cout<<"enetr 2 no\n";
//     cin>>x>>y;
//     sum(x,y);
//     show();
// }

// #include<iostream>
// using namespace std;
// // without parameter
// void msg()
// {
//     cout<<"welcome";
// }
// int main()
// {
// msg();
// }

// #include<iostream>
// using namespace std;
// // with parameter
// void cube(int s)
// {
//     cout<<s*s*s<<"\n";
// }
// int main()
// {
// cube(5);
// }

// #include <iostream>
// using namespace std;
// // with parameter value user se lena hai
// void cube(int s)
// {
//     cout << s * s * s << "\n";
// }
// int main()
// {
//     int t;
//     cout << "enter any to  no generate cube \n";
//     cin >> t;
//     cube(t);
// }

#include <iostream>
using namespace std;

int SI(int principal, int rate, int time) {
    int simpleInterest = (principal * rate * time) / 100;
    return simpleInterest;
}

int main() {
    int principal, rate, time;

    cout << "Enter principal amount: ";
    cin >> principal;

    cout << "Enter rate of interest: ";
    cin >> rate;

    cout << "Enter time period (in years): ";
    cin >> time;

    int simpleInterest = SI(principal, rate, time);
    cout << "Simple Interest: " << simpleInterest << endl;

    return 0;
}
// #include <iostream>
// using namespace std;
// // with parameter value user se lena hai
// void sqr(int a)
// {
//     cout<<"result="<<a*a<<"\n";
// }
// int main()
// {
//    int k;
//    cout<<"enter any no to generate sqr=" ;
//    cin>>k;
//    sqr(k);
// }

// #include <iostream>
// using namespace std;
// // with parameter value user se lena hai
// void swap(int x,int y)
// {
//     x=x+y;
//     y=x-y;
//     x=x-y;
// cout<<"after swapping x="<<x<<"\n";
// cout<<"after swapping y="<<y<<"\n";
// }
// int main()
// {
//    int k ,t;
//    cout<<"enter any no=" ;
//    cin>>k;
//    cout<<"enter any no=" ;
//    cin>>t;
//    swap(k,t);
// }

// #include <iostream>
// using namespace std;
// // with parameter value user se lena hai
// void mx(int a, int b)
// {
//     (a > b) ? cout << "max value=" << a : cout << "max value=" << b;
// }
// int main()
// {
//     int k, t;
//     cout << "enter 2 valuefor max\n";
//     cin >> k >> t;
//     mx(k, t);
// }

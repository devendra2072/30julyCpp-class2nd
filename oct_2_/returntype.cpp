// datatype functionname()
// {
// statement /code;
// return value;
// }
// #include <iostream>
// using namespace std;
// int bill() // return value without parameter
// {
//     int b = 200000;
//     return b;
// }
// int sqr(int d) // return valu with parameter
// {
//     return d *d;
// }
// int main()
// {
//     int g;
//     g = sqr(3);
//     cout << g + 3 << "\n";
//     // cout<<sqr(5)
// }

// this is the calll by refference

// #include<iostream>
// using namespace std;
// void sw (int &a) // formal parameter // call by reference
// {
//     a++;
// }
// int main()
// {
//     int p;
//     cout<<"enetr any no\n";
//     cin>>p;
//     sw(p);
//     cout<<p;
// }

// #include<iostream>
// using namespace std;
// void name (int &a,int &b) // formal parameter // call by value
// {
// a=a;
// a= b;
// b=t;
// cout<<"value of a="<<a<<"\n";
// cout<<"value of b="<<b<<"\n";
// }
// int main()
// {
//     int p,o;
//     cout<<"enetr 2 no\n";
//     cin>>p>>o;
//     name(p,o);
// }

// #include<iostream>
// using namespace std;
// void swp (int &a , int &b) // formal parameter // call by reference
// {
// int t;
//     t=a;
//     a=n;
//     b=t;

// }
// int main()
// {
//     int p, q;
//     cout<<"enetr 2 no\n";
//     cin>>p>>q;
//     swp(p,q);  // actual parameter / argument
//     cout<<"after swapped a="<<p<<"\n";
//     cout<<" after swapped b="<<q<<"\n";

// }

// #include <iostream>
// using namespace std;
// void swap(int a, int b, int c = 12) // default value
// {
//     cout << "value of a=" << a << "\n";
//     cout << "value of b=" << b << "\n";
//     cout << "value of c=" << c << "\n";
// }
// int main()
// {
//     swap(30, 39);
//     swap(21, 2);
// }



#include <iostream>
using namespace std;
void shift(int *a, int s)
{
    int tmp [s];
    int c=0;

    for (int i = 0; i <s; i++)
    {
        if (a[i] % 2!= 0)
        {
            tmp[c]=a[i];
            c++;
        }
    }
    while (c<s)
    {
       tmp[c]=0;
       c++;

    }
    for (int i = 0; i < s; i++)
    {
        cout<<tmp[i]<<"\t";
    }
    
    
}
int main()
{
   int a[]={3,20,0,5,0,8,};
   int s =sizeof(a)/sizeof(a[0]);
   for(int i =0; i<s;i++)
   {
    cout<<a[i]<<"\t";
   }
   cout<<"\n";
   shift(a,s);
}
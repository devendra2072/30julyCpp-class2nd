// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, p, last;
//     cout << "enter number";
//     cin >> n;
//     p = log(n);
//     cout << p + 1 << "\n";

// }/

// wap to print the sum of any digit number

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, m, sum = 0;
//     cout << "enter any digit="; 
//     cin >> n;
//     while (n > 0)
//     {
//         m = n % 10;
//         sum = sum + m;
//         n = n / 10;
//     }
//      cout << "sum=" << sum;
// }

// wap to display the table of any number of in revers order

// #include<iostream>
// using namespace std ;
// int main()
// {
//   int a ,i=10;
//   cout<<"enter any number=";
//   cin>>a;
//   do
//   {
//     cout<<a*i<<"\n";
//     i--;

//   } while (i>=0);

// }

// wap to check the year is leaf year or not

#include<iostream>
using namespace std ;
int main()
{
 int y;
 cout<<"enter any year=";
 cin>>y;
 if (((y%4==0) && (y%100!=0)) || (y%400==0))
 {
    cout<<"leap year";
 }
 else
 {
    cout<<"normal year";
 }
}

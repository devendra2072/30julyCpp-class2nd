// base condtition
// recursion relationship
// lifo
// #include<iostream>
// using namespace std;
// int rec (int k)
// {
//     if (k==0)
//     {
//         return 0;
//     }
//      rec(k-1);
//     cout<<k<<"\t";

// }
// int main()
// {
//     int n=5;
//     rec(n);
// }

// fifo
//  #include<iostream>
//  using namespace std;
//  int rec (int k)
//  {
//      if (k==0)
//      {
//          return 0;
//      }

//     cout<<k<<"\t";
//    rec(k-1);
// }
// int main()
// {
//     int n=5;
//     rec(n);
// }

// fectorial in recursion (recursive tree in explain in process)
// #include<iostream>
// using namespace std;
// int  fact(int n)
// {
//   int r=n;
//   if (n==1 || n==0)
//   {
//     return r;
//   }
//   r=r*fact(n-1);
// }
// int main()
// {
//     int n;
//     cout<<"enter any number= ";
//     cin>>n;
//     cout<<fact(n);
// }

// wap to display the febonicci serise of n turm

// #include<iostream>
// using namespace std;
// int fbci(int n)
// {
//   if (n==0||n==1)
//   {
//     return n;
//   }
//   return fbci(n-1)+fbci(n-2);
// }
// int main()
// {
//    int n;
//     cout<<"enter any number= ";
//     cin>>n;
//     cout<<fbci(n);
// }

// less coding and more result
// function calling itself it is recursion

// wap to print the generate the table
// #include <iostream>
// using namespace std;
// int table(int t, int a)
// {
//   int d;
//   if (a > 10)
//   {
//     return 0;
//   }
//   cout << t * a << "\n";
//   return table(t, a + 1);
// }
// int main()
// {
//   int n, a = 1;
//   cout << "enter any number=";
//   cin >> n;
//   table(n, a);
// }

// wap to print the number of 1 to 10
//  #include<iostream>
//  using namespace std;
//  int main()
//  {
//      int i=1;
//      while (i<=10)
//      {
//       cout<<i<<"\n";
//       i++;
//      }
// }

//wap to print the revers number======================


// #include<iostream>
// using namespace std;
// int  main()
// {
//     int n,r=0;
//     cout<<"enter any number \n";
//     cin>>n;
//     while (n>0)
//     {
//         r=r*10+n%10;
//         n=n/10;
//     }
//     cout<<"reverse of digit="<<r;

// }
// wap to decrement 10 to 1 print-----------------------------

// #include<iostream>
// using namespace std;
// int main()
// {
//     int i=10;
//       while(i>=1)
//     {
//         cout<<i<<"\n";
//         i--;
//     }
// }

// wap to print the even number 1 to 10
//  #include<iostream>
//  using namespace std;
//  int main()
//  {
//      int i=1;
//      while (i<=10)
//      {
//          if (i%2==0)
//          {
//              cout<<i<<"\n";
//          }
//          i++;
//      }
//  }

// wap to print the odd numbers 1 to 10
//  #include<iostream>
//  using namespace std;
//  int main()
//  {
//      int i=1;
//      while (i<=10)
//      {
//          if (i%2!=0)
//          {
//              cout<<i<<"\n";
//          }
//          i++;
//      }
//  }

// wap to print the table of any number

// #include<iostream>
// using namespace std;
// int main()
// {
//     int i=1,a;
//     cout<<"enter any number=";
//     cin>>a;
//     while (i<=10)
//     {
//         cout<<a*i<<"\n";
//         i++;
//     }
// }

// wap to print the sum of digits 1 to 10
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i = 1;
//     int sum = 0;
//     while (i <= 10)
//     {
//         sum = sum + i;
//         cout << sum << "\n";
//         i++;
//     }
// }

// wap to print the sum of even numbers 1 to 10

// #include <iostream>
// using namespace std;
// int main()
// {
//     int sumEven = 0;
//     int i = 1;
//     while (i <= 10)
//     {
//         if (i % 2 == 0)
//         {
//             cout << i << "\n";
//             sumEven = sumEven + i;
//         }
//         i++;
//     }
//     cout << "Sum of even numbers from 1 to 10: " << sumEven;
// }

// wap to print sum of odd numbers 1 to 10------------------

// #include <iostream>
// using namespace std;
// int main()
// {
//     int sumodd = 0;
//     int i = 1;
//     while (i <= 10)
//     {
//         if (i % 2 != 0)
//         {
//             cout << i << "\n";
//             sumodd = sumodd + i;
//         }
//         i++;
//     }
//     cout << "Sum of even numbers from 1 to 10: " << sumodd;
// }

// wap to find out the given number prime or not prime

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, i = 2;
//     cout << "enter no\n";
//     cin >> n;
//     while (n % i == 0);
//     {
//         if (i < n)
//         {
//         i++;
//         }
//     }
//     if (i==n)
//     {
//         cout<<"prime";
//     }
//     else
//     {
//         cout<<"not prime";
//     }
// }

// wap to generate the power---------------------------------------

// #include <iostream>
// using namespace std;
// int main()
// {
//     int base, power, r = 1;
//     cout << "enter base= \n";
//     cin >> base;
//     cout << "enter power=\n";
//     cin >> power;
//     while (power >= 1)
//     {
//         r = r * base;
//         power--;
//     }
//     cout << "result=" << r;
// }

// wap to print the sum of any digis========================

// #include <iostream>
// using namespace std;
// int main()
// {
//     long int n,sum =0;
//     cout << "enter a number= \n";
//     cin >> n;
//     while (n!= 0)
//     {
//         sum =sum+n%10;
//         n=n/10;
//     }
//     cout << "sum of digits=" << sum;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     long int n,m,sum =0;
//     cout << "enter a number= \n";
//     cin >> n;
//     while (n> 0)
//     {
//         m=n%10;
//         sum =sum+m;
//         n=n/10;
//     }
//     cout << "sum of digits=" << sum;
// }

// wap to the valid square root of any number

// #include<iostream>
// using namespace std;
// int main()
// {
//   int c,i=1;
//   cout<<"enter any number to generate square root=";
//   cin>>c;
//   while (i<=c/2)
//   {
//     if (i*i==c)
//     {
//         cout<<"square root="<<i;
//         break;
//     }
//    i++;
//   }

// }

// wap to print the revers any digit

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,r=0;
//     cout<<"enter any digits=";
//     cin>>n;
//     while (n>0)
//     {
//         r=r*10+n%10;
//         n=n/10;
//     }
//     cout<<"revers digits="<<r;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,rv=0,rm=0;
//     cout<<"enter any digits=";
//     cin>>n;
//     while (n!=0)
//     {
//         rm=n%10;
//         rv=rv*10+rm;
//         n=n/10;
//     }
//     cout<<"revers digits="<<rv;
// }

// wap to find out the lcm of any two number

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, m, lcm;
//     cout << "enter any two number=";
//     cin >> n >> m;
//     lcm = (n > m) ? n : m;
//     while (n > 0 && m > 0)
//     {
//         if (lcm % n == 0 && lcm % m == 0)
//         {
//             break;
//         }
//         lcm++;
//     }
//     cout << "lcm= " << lcm;
// }



// wap to find out the hcf of any two number

#include <iostream>
using namespace std;
int main()
{
    int n, m, hcf;
    cout << "enter any two number=";
    cin >> n >> m;
    hcf = (n > m) ? m : n;
    while (hcf>0)
    {
        if (n%hcf==0 && m%hcf==0)
        {
            break;
        }
        hcf--;
    }
    cout << "hcf= " << hcf;
}

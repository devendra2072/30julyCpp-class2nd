// do while loop

// wap to print 1 to 10 incriment
// #include<iostream>
// using namespace std;
// int main()
// {
//     int i=1;
//     do
//     {
//         cout<<i<<"\n";
//         i++;
//     }while (i<=10);
// }

// wasp to decrement 10 to 1 print

// #include<iostream>
// using namespace std;
// int main()
// {
//     int i=10;
//     do
//     {
//         cout<<i<<"\n";
//         i--;
//     }while (i>0);
// }

// wap to print even number 1 to 10
// #include<iostream>
// using namespace std;
// int main()
// {
//     int i=1;
//     do
//     {
//         if (i%2==0)
//         {
//             cout<<i<<"\n";
//         }
//         i++;
//     }while (i<=10);
// }

// wap to print odd number between 1 to 10
// #include<iostream>
// using namespace std;
// int main()
// {
//     int i=1;
//     do
//     {
//         if (i%2!=0)
//         {
//             cout<<i<<"\n";
//         }
//         i++;
//     }while (i<=10);
// }

// wap to print the table of any number
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,i=1;
//     cout<<"enter any number\n";
//     cin>>a;
//     do
//     {
//         cout<<a*i<<"\n";    //cout<<i<<"*"<<c<<"="<<c*i<<"\n";
//         i++;
//     }while (i<=10);
// }

// wap to print sum of numbers 1 to 10

// #include <iostream>
// using namespace std;
// int main()
// {
//     int sum = 0;
//     int i = 1;
//     do {
//             cout<<i<<"\n";
//             sum += i;
//         i++;
//     } while (i <= 10);
//     cout << "Sum of even numbers from 1 to 10: " << sum ;
// }

// wap to print sum of even numbers 1 to 10

// #include <iostream>
// using namespace std;
// int main()
// {
//     int sumEven = 0;
//     int i = 1;
//     do {
//         if (i % 2 == 0)
//         {
//             cout<<i<<"\n";
//             sumEven=sumEven + i;
//         }
//         i++;
//     } while (i <= 10);
//     cout << "Sum of even numbers from 1 to 10: " << sumEven ;
// }

// wap to print sum of odd numbers 1 to 10

// #include <iostream>
// using namespace std;
// int main()
// {
//     int sumodd = 0;
//     int i = 1;
//     do {
//         if (i % 2 != 0)
//         {
//             cout<<i<<"\n";
//             sumodd=sumodd + i;
//         }
//         i++;
//     } while (i <= 10);
//     cout << "Sum of odd   numbers from 1 to 10: " << sumodd ;
// }

// wap to print any number fectorial
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, m;
//     int i = 1;
//     cout << "enter any number=";
//     cin >> n;
//     m = n - 1;
//     do
//     {
//         n = n * m;
//         m--;
//     } while (i <= m);
//     cout << "feactorial of=" << n;
// }

// wap to find out the given number prime or not prinme

#include <iostream>
using namespace std;
int main()
{
    int n, i = 2;
    cout << "enter no\n";
    cin >> n;
    do
    {
        if (n % i == 0)
        {
            break;
        }
        i++;
    } while (i < n);
    if (i==n)
    {
        cout<<"prime";
    }
    else
    {
        cout<<"not prime";
    } 
}
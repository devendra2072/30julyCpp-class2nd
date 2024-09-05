//wap to count the any digit---------------


// #include <iostream>
// #include<math.h>
// using namespace std;
// int main()
// {
//     int n, p, last;
//     cout << "enter number";
//     cin >> n;
//     p = log(n);
//     cout << p + 1 << "\n";

// }

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

// #include<iostream>
// using namespace std ;
// int main()
// {
//  int y;
//  cout<<"enter any year=";
//  cin>>y;
//  if (((y%4==0) && (y%100!=0)) || (y%400==0))
//  {
//     cout<<"leap year";
//  }
//  else
//  {
//     cout<<"normal year";
//  }
// }

// #include<iostream>
// using namespace std ;
// int main()
// {
//      int n,rv=0,rm=0;
//     cout<<"enter any digits=";
//     cin>>n;
//     while (n>0)
//     {
//         rm=n%10;
//         rv=rv*10+rm;
//         n=n/10;
//     }
//     cout<<"revers digits="<<rv;
// }

// wap to count any digit
// #include<iostream>
// using namespace std ;
// #include<math.h>
// int main()
// {
//    int a;
//    int p=0;
//    cout<<"enter any digits=";
//    cin>>a;

//    //p=log10(a)+1;
//    // cout<<p;

//    while (a>0)
//    {
//       p++;
//       a=a/10;
//    }
//   cout<<"count="<<p;
// }

// wap to find out the given 3 digit number is armstorng or not  1+5+3 all ka cube
// #include <iostream>
// #include <cmath> // For pow function
// using namespace std;
// int main()
// {
//    int n;
//    cout<<"enter 3 digit number=";
//    cin>>n;
//    if (n<100)
//    {
//      cout<<"invalid no.";
//    }
//    else if (n>999)
//    {
//      cout<<"invalid no.";
//    }
//    else
//    {

//     int r,sum=0,bk;
//     bk=n;
//     while (n>0)
//     {
//       r=n%10;
//       sum=sum+pow(r,3);
//       n=n/10;
//     }
//      if (sum==bk)
//      {
//         cout<<"it is armstrong";
//      }
//      else
//      {
//         cout<<"not";
//      }
//    }
// }

// #include <iostream>
// #include <cmath>
// using namespace std;

// int main()
// {
//     int num, originalNum, remainder, sum = 0;

//     cout << "Enter a three-digit positive integer: ";
//     cin >> num;

//     if (num < 100 || num > 999)
//     {
//         cout << "Please enter a valid three-digit positive integer." << endl;
//         return 1;
//     }

//     originalNum = num;

//     while (num > 0)
//     {
//         remainder = num % 10;
//         sum += pow(remainder, 3);
//         num /= 10;
//     }

//     if (sum == originalNum)
//     {
//         cout << originalNum << " is an Armstrong number." << endl;
//     }
//     else
//     {
//         cout << originalNum << " is not an Armstrong number." << endl;
//     }

//     return 0;
// }

// wap to find the given number is perfect or not  6,28 is perfect

// #include <iostream>

// using namespace std;

// int main()
// {
//     int num, sum = 0;

//     cout << "Enter a positive integer: ";
//     cin >> num;

//     // if (num <= 0)
//     // {
//     //     cout << "Please enter a positive integer." << endl;
//     //     return 1;
//     // }
//     for (int i = 1; i < num; i++)
//     {
//         if (num % i == 0)
//         {
//             sum += i;
//         }
//     }
//     if (sum == num)
//     {
//         cout << num << " is a perfect number." << endl;
//     }
//     else
//     {
//         cout << num << " is not a perfect number." << endl;
//     }
//     return 0;
// }

// wap to find the given number pelindrom
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, rem, rev = 0, digit = 0, org;
//     org = n;

//     cout << "Enter any number";
//     cin >> n;

//     while (n > 0)
//     {
//         rem = n % 10;
//         rev = (rev * 10) + rem;
//         n = n / 10;
//         digit++;
//     }
//     if (org == rev)
//     {
//         cout << "Pallidrome";
//     }
//     else
//     {
//         cout << "Not pallidrome";
//     }

//     cout << "Rev is = " << rev;
//     cout << "Count is = " << digit;

// int a,p=0,rev=0,n;
// cout<<"enter any digit=";
// cin>>a;
// n=a;
// while (a>0)
// {
//     p++;
//     rev=rev*10+a%10;
//     a=a/10;
// }
//  cout<<"count="<<p;
//  cout<<"reverse="<<rev;
//  if (rev==n)
//  {
//     cout<<"it is palindrome";
//  }
//  else{
//     cout<<"it is not palindrome";
//  }
// }


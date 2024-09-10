// A
// A       B
// A       B       C
// A       B       C       D
// #include<iostream>
// using namespace std;
// int main()
// {
//     for (int r = 65; r <= 68; r++)
//     {
//       for (int c = 65; c <= r; c++)
//       {
//         cout<<char(c)<<"\t";
//       }
//       cout<<"\n";
//     }
// }

// A
// B       C
// D       E       F
// G       H       I       J
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=65;
//     for (int r = 65; r <= 68; r++)
//     {
//       for (int c = 65; c <= r; c++)
//       {
//         cout<<char(a)<<"\t";
//         a++;
//       }
//       cout<<"\n";
//     }
// }

// A       B       C       D
// A       B       C
// A       B
// A

// #include<iostream>
// using namespace std;
// int main()
// {
//     for (int r = 'D'; r >= 'A'; r--)
//     {
//       for (int c = 'A'; c <= r; c++)
//       {
//         cout<<char(c)<<"\t";
//       }
//       cout<<"\n";
//     }
// }

// A       B       C       D
// E       F       G
// H       I
// J
// #include<iostream>
// using namespace std;
// int main()
// {
//     char a=65;
//     for (int r = 'D'; r >= 'A'; r--)
//     {
//       for (int c = 'A'; c <= r; c++)
//       {
//         cout<<a<<"\t";
//         a++;
//       }
//       cout<<"\n";
//     }
// }
// J
// H       I
// E       F       G
// A       B       C       D
// #include <iostream>
// using namespace std;
// int main()
// {
//      char c='J';
//      int count=3;
//     for (int i = 1; i <= 4; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout <<c << "\t";
//             c++;
//         }
//         c=c-count;
//         count=count+2;
//         cout << "\n";
//     }
// }

// wap to genrate the border pattern
// ******
// *    *
// *    *
// *    *
// *    *
// ******
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cout<<"enter any number";
//     cin>>a;
//     for (int r = 1; r <= a; r++)
//     {
//         for (int c = 1; c <= a; c++)
//         {
//             if (r==a || r==1 || c==1 || c==a)
//             {
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<"\n";
//     }
// }

//     1
//    1 1
//   1 2 1
//  1 3 3 1
// 1 4 6 4 1
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter any number=";
//     cin >> n;
//     for (int i = 0; i < n; ++i)
//     {
//         int num = 1;
//         for (int j = 0; j < n - i - 1; ++j)
//         {
//             cout << " ";
//         }
//         for (int k = 0; k <= i; ++k)
//         {
//             cout << num << " ";
//             num = num * (i - k) / (k + 1);
//         }
//         cout << "\n";
//     }
// }

//     1
//    1 1
//   1 2 1
//  1 3 3 1
// 1 4 6 4 1
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter any number =";
//     cin >> n;
//     for (int r = 1; r <= n; r++)
//     {
//         int coef = 1;
//         for (int s = n - r; s > 0; s--)
//         {
//             cout << " ";
//         }
//         for (int c = 1; c <= r; c++)
//         {
//             cout << coef << " ";
//             coef = coef * (r - c) / c;
//         }
//         cout << "\n";
//     }
// }

// #include<iostream>
// using namespace std;
// int cyb(int a, int b)
// {
//     return a+b;
// }
// int main()
// {
//     int (*fun )(int ,int); // function pointer
//     fun=cyb;
//     int k=fun(3,4);
//     cout<<k;
// }
// wap to print factorial 
// #include <iostream>
// using namespace std;
// void fact(int a)
// {
//     int k = a - 1;
//     while (k > 1)
//     {
//         a = a * k;
//         k--;
//     }
//     cout << a;
// }
// int main()
// {
//     int d;
//     cout << "enter any no to generate factorial=";
//     cin >> d;
//     fact(d);
// }

// wap to display the even number between start and end value using n value

// #include <iostream>
// using namespace std;
// void even(int start, int end)
// {
//     if (end > start)
//     {
//         for (int x = start; x <= end; x++)
//         {
//             if (x % 2 == 0)
//             {
//                 cout << x << "\t";
//             }
//         }
//     }
// }
// int main()
// {
//     int a, b;
//     cout << "enetr 2 value";
//     cin >> a >> b;
//     even(a, b);
// }

// #include <iostream>
// using namespace std;
// void arr(int a[], int s)
// {
//     for (int i = 0; i < s; i++)
//     {
//         if (a[i] == 0)
//         {
//             cout << a[i] << "\t";
//         }
//     }
// }
// int main()
// {
//     int b[] = {3, 2, 1, 9, 5};
//     int s = sizeof(a) / sizeof(b[0]);
//     arr(a,s);
// }

// #include <iostream>
// using namespace std;
// void ranges(int *a, int s)
// {
//     for (int i = 0; i < s; i++)
//     {
//        a[i]=a[i]+1;
//     }
// }
// int main()
// {
//     int a[] = {3, 2, 1, 90, 50};
//     int s = sizeof(a) / sizeof(a[0]);
//     ranges(a, s);
//     for (int i = 0; i < s; i++)
//     {
//         cout << a[i] << "\t";
//     }
// }

// #include <iostream>
// using namespace std;
// void fact(int a[], int s)
// {
//     for (int i = 0; i <= s; i++)
//     {
//         if (a[i] % 2 == 0)
//         {
//             cout << a[i] << "\n";
//         }
//     }
// }
// int main()
// {
//     int a[] = {3,2,1,4,5};
//     int s = sizeof(a)/sizeof(a[0]);
//     fact (a,s);
// }



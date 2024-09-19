// wap to print the duplicate data
// enter size of array=6
// value1
// 1
// 2
// 3
// 5
// 2
// output
// 1 2
// #include <iostream>
// using namespace std;
// int main()
// {
//     // int ary[]={1,2,1,4,2,7,4}
//     int n;
//     cout << "enter size of array=";
//     cin >> n;
//     int a[n];
//     cout << "value";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     cout << "output\n";
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             if (a[i] == a[j + 1])
//             {
//                 cout << a[i] << " ";
//             }
//         }
//     }
// }

// write the data to rearrange the  array wich is having prifix and 0 sufix
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Size of array\n";
//     cin >> n;
//     int a[n];
//     cout << "Values";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     int t;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n - 1; j++)
//         {
//             if (a[i] > a[j + 1])
//             {
//                 t = a[i];
//                 a[i] = a[j + 1];
//                 a[j + 1] = t;
//             }
//         }
//     }
//     cout << "output\n";
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << "  ";
//     }
//     return 0;
// }

// write a prpgram to rearrange the data by putting alast but reliment shoud be mantain
// 6
// Values2
// 3
// 6
// 4
// 1
// 5
// output
// 6  5  4  3  2  1
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Size of array\n";
//     cin >> n;
//     int a[n];
//     cout << "Values";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     int t;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n - 1; j++)
//         {
//             if (a[i] < a[j + 1])
//             {
//                 t = a[i];
//                 a[i] = a[j + 1];
//                 a[j + 1] = t;
//             }
//         }
//     }
//     cout << "output\n";
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << "  ";
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int a[] = {20, 45, 3, 60};
    int s = sizeof(a) / sizeof(a[0]);
    int t;
    for (int i = 0; i < s; i++)
    {
        cout << a[i] << "\t";
    }
    for (int i = 0; i < s; i++)
    {
        for (int j = i; j < s - 1; j++)
        {
            if (a[i] < a[j + 1])
            {
                t = a[i];
                a[i] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    cout<<"\nasc order=\n";
    for (int i = 0; i < s; i++)
    {
        cout<<a[i]<<"\t";
    }
    
}
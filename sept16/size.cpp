// wap to print the revers order array
//  #include <iostream>
//  using namespace std;
//  int main()
//  {
//      int a[5] = {2, 45, 3, 6, 7};
//      int s = sizeof(a) / sizeof(a[0]);
//      for (s = s - 1; s >= 0; s--)
//      {
//          cout << a[s] << "\t";
//      }
//  }

//  wap to the sum of array
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a[5] = {2, 45, 3, 6, 7};
//     int s = sizeof(a) / sizeof(a[0]);
//     int c=0;
//     for (int i= 0; i < s; i++)
//     {
//     c =c+a[i];
//     }
//     cout<<"total sum="<<c;
// }
// wap to find the check number divisible by 4
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a[5] = {2, 15, 3, 6, 20};
//     int s = sizeof(a) / sizeof(a[0]);
//     int c = 0;
//     for (int i = 0; i < s; i++)
//     {
//         if (a[i] % 4 == 0)
//         {
//             cout << a[i] << "\t";
//         }
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a[5] = {2, 45, 3, 6, 7};
//     int s = sizeof(a) / sizeof(a[0]);
//     int c = 0;
//     for (int i = 0; i < s; i++)
//     {
//         for (int  j = 0; j < ; i++)
//         {
//             /* code */
//         }

//     }
// }

// wap to display the duplicate data
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter the size =";
//     cin >> n;
//     int a[n];
//     cout << "values";
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

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {8, 0, 2, 0, 5, 1};
//     int s = sizeof(arr) / sizeof(arr[0]);
//     int tmp[s];
//     int k = 0;
//     for (int i = 0; i < s; i++)
//     {
//         cout << arr[i] << "\n";
//     }
//     cout << "\nresult=\n";
//     for (int i = 0; i < s; i++)
//     {
//         if (arr[i] = 0)
//         {
//             tmp[k] = arr[i];
//             k++;
//         }
//     }
//     while (k < s)
//     {
//         tmp[k] = 0;
//         k++;
//     }
//     for (int i = 0; i < k; i++)
//     {
//         cout << tmp[i] << "\t";
//     }
// }


#include<iostream>
using namespace std;
int main()
{
    int arr[3]={40,9,8};
    cout<<arr[1];
    cout<<arr[-2];
    
}
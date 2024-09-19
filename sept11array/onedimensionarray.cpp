// #include <iostream>
// using namespace std;
// int main()
// {
//     // datatype arrayname [size];
//     int cybrom[2];
//     cybrom[0] = 90;
//     cybrom[1] = 345;
//     cout << cybrom << "\n";     // address of 0 loacation
//     cout << &cybrom[0] << "\n"; // address of 0 loacation
//     cout << &cybrom[1] << "\n"; // address of 1 loacation
//     cout << cybrom[0] << "\n";  // value of 0 indexing
//     cout << cybrom[1] << "\n";  // value of 1 indexing
// }

// // 2nd variation == == == == == == == == == == == == == ==
// #include <iostream>
// using namespace std;
// int main()
// {
//     // datatype arrayname [size];
//     int cybrom[2];
//     cybrom[0] = 90;
//     cybrom[1] = 345;
//     cybrom[2] = 256;
//     cout << cybrom << "\n";     // address of 0 loacation
//     cout << &cybrom[0] << "\n"; // address of 0 loacation
//     cout << &cybrom[1] << "\n"; // address of 1 loacation
//     cout << cybrom[0] << "\n";  // value of 0 indexing
//     cout << cybrom[1] << "\n";  // value of 1 indexing
//     cout << cybrom[2] << "\n";  // value of 2 indexing
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     // datatype arrayname [size];
//     int cybrom[2] = {10, 20};
//     cout << cybrom << "\n";     // address of 0 loacation
//     cout << &cybrom[0] << "\n"; // address of 0 loacation
//     cout << &cybrom[1] << "\n"; // address of 1 loacation
//     cout << cybrom[0] << "\n";  // value of 0 indexing
//     cout << cybrom[1] << "\n";  // value of 1 indexing
//     cout << cybrom[2] << "\n";  // value of 2 indexing
// }

// error aayenga-- -- -- -- -- -- -- -- -- -- -
// #include <iostream>
//     using namespace std;
// int main()
// {
//     // datatype arrayname [size];
//     int cybrom[2] = {10, 20, 30, 40};
//     cout << cybrom << "\n";     // address of 0 loacation
//     cout << &cybrom[0] << "\n"; // address of 0 loacation
//     cout << &cybrom[1] << "\n"; // address of 1 loacation
//     cout << cybrom[0] << "\n";  // value of 0 indexing
//     cout << cybrom[1] << "\n";  // value of 1 indexing
//     cout << cybrom[2] << "\n";  // value of 2 indexing
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     // datatype arrayname [size];
//     int cybrom[] = {10, 20, 30, 40};
//     cout << cybrom << "\n";     // address of 0 loacation
//     cout << &cybrom[0] << "\n"; // address of 0 loacation
//     cout << &cybrom[1] << "\n"; // address of 1 loacation
//     cout << cybrom[0] << "\n";  // value of 0 indexing
//     cout << cybrom[1] << "\n";  // value of 1 indexing
//     cout << cybrom[2] << "\n";  // value of 2 indexing
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     // datatype arrayname [size];
//     int cybrom[2] = {10, 20};
//     cybrom[3] = 6546;
//     cout << cybrom << "\n";     // address of 0 loacation
//     cout << &cybrom[0] << "\n"; // address of 0 loacation
//     cout << &cybrom[1] << "\n"; // address of 1 loacation
//     cout << cybrom[0] << "\n";  // value of 0 indexing
//     cout << cybrom[1] << "\n";  // value of 1 indexing
//     cout << cybrom[2] << "\n";  // value of 2 indexing
//     cout << cybrom[3] << "\n";  // value of 3 indexing
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     // // datatype arrayname [size];
//     // int cybrom[2] ={10,20};
//     // cybrom[3]=6546;
//     // cout << sizeof(cybrom) << "\n";     // address of 0 loacation
//     // // cout<<INT_MAX;
//     int cybrom[3] = {10, 20, 12};
//     for (int i = 0; i < 3; i++)
//     {
//         cout << cybrom[i] << "\t";
//     }
// }

// // Q) W.A.P to enter the dynamic input using an array?
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Size of Array";
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "Stored here is your data\n";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << "  ";
//     }
// }

// // Q) W.A.P to print the MAX and MIN value of an ARRAY
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Size ofan array";
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int max = arr[0];
//     int min = arr[0];
//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//         if (arr[i] < min)
//         {
//             min = arr[i];
//         }
//     }
//     cout << "Max no = " << max << "\n";
//     cout << "Min no = " << min;
//     return 0;
// }
// // Q81) W.A.P to print the sum of array?
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Size ofan array";
//     cin >> n;
//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum = sum + arr[i];
//     }
//     cout << sum;

//     return 0;
// }

// // Q82) W.A.P to find the index of the key element?
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Size ofan array";
//     cin >> n;
//     int arr[n];
//     cout << "Enter the array";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int key;
//     cout << "Enter the key";
//     cin >> key;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == key)
//         {
//             cout << i << " th index";
//         }
//     }
//     //  cout<<sum;
//     return 0;
// }
// // STATIC AND DYNAMIC MEMORY
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a[8] = {1, 2, 3};
//     cout << sizeof(a) << "\n"; // We have declared the size before is kn own as static memory allocation
//     for (int i = 0; i < 8; i++)
//     {
//         cout << a[i] << "\n";
//     }
//     cout << "Another output";
//     int a1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; // We have not declared the size it allocates the memory with the help of Dynamic memory allocation
//     int s = sizeof(a) / sizeof(a[0]);
//     for (int i = 0; i < s; i++)
//     {
//         cout << a1[i] << "\n";
//     }
//     return 0;
// }

// // Q84) W.A.P to display the even values in a given array?
// //        Int arr[5] = {1,2,3,4,5};
// // Output:
// //     -1, 3, 5 because they are at 0, 2, 4 index which are even
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the size of array";
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] % 2 == 0)
//         {
//             cout << arr[i] << "  ";
//         }
//     }
//     return 0;
// }

// // Q85) W.A.P to display the square of each number of an array?
// //        Int arr[5] = {1,2,3,4,5};
// // Output:
// //     -1 4 9 16 25
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the size of array";
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < n; i++)
//     {

//         cout << arr[i] * arr[i] << "  ";
//     }

//     return 0;
// }
// Q86) W.A.P to display the value of an array in reverse order?

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Size of an array";
//     cin >> n;
//     int arr[n];
//     cout << "Enter the values";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[(n - 1) - i] << "  ";
//     }
//     return 0;
// }

// // Q87) W.A.P to display those value which is divisible by 4?

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Size";
    cin >> n;
    int arr[n];
    cout << "Values";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Output" << "\n";
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 4 == 0)
        {
            cout << arr[i] << "  ";
        }
    }
}
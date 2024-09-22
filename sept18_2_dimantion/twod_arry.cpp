// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[2][3]={40,9,8,1,2,5};
//     cout<<arr[0][0]<<"\n";
//     cout<<arr[0][1]<<"\n";
//     cout<<arr[0][2]<<"\n";
//     cout<<arr[1][0]<<"\n";
//     cout<<arr[1][1]<<"\n";
//     cout<<arr[1][2]<<"\n";
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[2][3] = {40,9,8,1,2,5,};
//     for (int r = 0; r < 2; r++)
//     {
//         for (int c = 0; c < 3; c++)
//         {
//             cout << arr[r][c] << "\t";
//         }
//         cout << "\n";
//     }
// }

// wap to print
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[3][3];
//     int n;
//     cout << "enter the size =";
//     cin >> n;
//     cout<<"values=\n";
//     for (int r = 0; r < 3; r++)
//     {
//         for (int c = 0; c < 3; c++)
//         {
//             cin >> arr[r][c];
//         }
//     }

//     cout<<"output=\n";
//     for (int r = 0; r < 3; r++)
//     {
//         for (int c = 0; c < 3; c++)
//         {
//             cout << arr[r][c] << "\t";
//         }
//         cout <<"\n";
//     }
// }

// wap to print the sum of any array
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[3][3];
//     int n;
//     cout << "enter the size =";
//     cin >> n;
//     cout<<"values=\n";
//     for (int r = 0; r < 3; r++)
//     {
//         for (int c = 0; c < 3; c++)
//         {
//             cin >> arr[r][c];
//         }
//     }
//     cout<<"output=\n";
//     int sum=0;
//     for (int r = 0; r < 3; r++)
//     {
//         for (int c = 0; c < 3; c++)
//         {
//             sum=sum+arr[r][c];

//         }
//     }
//     cout <<sum;
// }

// waqp to display the replace 0

// wap to diplay the sum of the values of two arry

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[2][3] = {1, 2, 3, 4, 5, 6};
//     int arr2[2][3] = {1, 1, 1, 1, 1, 1};
//     cout << "values=\n";
//     for (int r = 0; r < 2; r++)
//     {
//         for (int c = 0; c < 3; c++)
//         {
//             cout << arr[r][c] + arr2[r][c] << "\t";
//         }
//         cout << "\n";
//     }
// }



// 3 dimantion array 
#include<iostream>
using namespace std;
int main()
{
    int arr [2][2][3]={1,2,3,4,5,6,7,8,9,10,11,12};
    for (int t = 0; t < 2; t++)
    {
        for (int r = 0; r < 2; r++)
        {
         for (int c = 0; c < 3; c++)
         {
        cout<<arr[t][r][c]<<"\t";
         }
         cout<<"\n";
        }
        cout<<"\n";
    }   
}

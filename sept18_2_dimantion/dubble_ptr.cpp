// double pointer
// #include<iostream>
// using namespace std;
// int main()
// {
//     // char a[]="sbi";   // a = 'sbi'
//     // cout<<a;

//     char a[]="sbi";   // a = 'sbi'
//     cout<<a[0];

// // char a[]="sbi" "hsx";   // a = "sbi","hjgs"  o/t= error
// //     cout<<a[0];

// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     const char *c[] = {"tennis", "carrom", "football", "cric"};
//     cout << *c << "\n";
//     cout << *c + 1 << "\n";
//     cout << *(c + 1) + 3 << "\n";
//     cout << *(c + 2) + 4 << "\n";
//     cout << *(c + 3) + 2 << "\n";
//     cout << *(c + 2) + 2 << "\n";
//     cout << *(c) << *(c + 1) << "\n";
// }

// double dimantion main  pointer to pointer use hota hai

#include <iostream>
using namespace std;
int main()
{
    int c, r;
    cout << "enter size of row=";
    cin >> r;
    cout << "enter size of column=";
    cin >> c;
    // Create 2d array for different row and column

    int **arr = new int *[r];
    // create
    for (int i = 0; i < r; ++i)
    {
        arr[i] = new int[c];
    }
    // input
    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            cin >> arr[i][j];
        }
    }

    cout << "output are\n";
    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            cout << arr[i][j] << "\t";
        }
        cout << "\n";
    }
    delete[] arr;
    // arr=NULL;
}
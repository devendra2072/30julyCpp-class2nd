// #include<iostream>
// using namespace std;
// int main() {
//     int a, b;
//     cout << "Enter 1st num= ";
//     cin >> a;
//     cout << "Enter 2nd num= ";
//     cin >> b;
//     try
//     {
//         if (b == 0)
//         {
//             throw b;
//         }
//         int result = a / b;
//         cout << "Result = " << result <<"\n";
//     }
//     catch (int t)
//     {
//         cout << "\ndenominator can not be zero\n";
//     }
//     cout << "\n finished";
// }


// #include<iostream>
// using namespace std;
// int main() {
//     int a, b;
//     cout << "Enter 1st num= ";
//     cin >> a;
//     cout << "Enter 2nd num= ";
//     cin >> b;
//     try
//     {
//         if (b == 0)
//         {
//             throw 9;
//         }
//         int result = a / b;
//         cout << "Result = " << result <<"\n";
//     }
//     catch (int t)
//     {
//         cout << "\ndenominator can not be zero\n";
//     }
//     cout << "\n finished";
// }




#include<iostream>
using namespace std;
int main() {
    int a[5] ,s;
    cout << "Enter size of array= ";
    cin >> s;
    try
    {
        if (s>5)
        {
            throw s;
        }
        for (int i = 0; i < s; i++)
        {
           cin>>a[i];
        }
        cout<<"\n";
        for (int i = 0; i < s; i++)
        {
            cout<<a[i]<<"\t";
        }
    }
    catch (int t)
    {
        cout << "\n index is out of range\n";
    }
    cout << "\n finished";
}
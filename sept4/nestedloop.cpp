// nested looop ka use pattern bananane ke liye use karte hai
//paturn * 
    //   * *
    //   * * *
// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int r = 1; r <= 3; r++)
//     {
//         for (int c = 1; c <= r; c++)
//         {
//             cout << "*" << "\t";
//         }
//         cout << "\n";
//     }
// }




// 1
// 2       2
// 3       3       3

// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int r = 1; r <= 3; r++)
//     {
//         for (int c = 1; c <= r; c++)
//         {
//             cout <<r << "\t";
//         }
//         cout << "\n";
//     }
// }


// 1
// 1       2
// 1       2       3
// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int r = 1; r <= 3; r++)
//     {
//         for (int c = 1; c <= r; c++)
//         {
//             cout <<c << "\t";
//         }
//         cout << "\n";
//     }
// }


// 1
// 2       3
// 4       5       6
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a=1;
//     for (int r = 1; r <= 3; r++)
//     {
//         for (int c = 1; c <= r; c++)
//         {
//             cout <<a << "\t";
//             a++;
//         }
//         cout << "\n";
//     }
// }

// 1
// 3       5
// 7       9       11
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a=1;
//     for (int r = 1; r <= 3; r++)
//     {
//         for (int c = 1; c <= r; c++)
//         {
//             cout <<a << "\t";
//             a=a+2;
//         }
//         cout << "\n";
//     }
// }


// 2 paturn *


#include <iostream>
using namespace std;
int main()
{
    for (int r = 1; r <= 3; r++)
    {
        for (int c = 3; c <= r; c--)
        {
            cout << "*" << "\t";
        }
        cout << "\n";
    }
}

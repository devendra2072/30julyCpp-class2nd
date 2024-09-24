// W.A..P to display only unique value in an array?

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a[] = {4, 2, 4, 2, 8, 9};
//     int s = sizeof(a) / sizeof(a[0]);
//     int flag = 1;
//     for (int i = 0; i < s; i++)
//     {
//         for (int j = i + 1; j < s; j++)
//         {
//             if (a[i] == a[j])
//             {
//                 flag = 0;
//                 a[j] = '\0';
//             }
//         }
//         if (flag == 0 && a[i] != '\0')
//         {
//             cout << a[i] << "\t";
//         }
//     }
// }

// W.A..P.   to  only  display the prime values in an array?

#include <iostream>
using namespace std;
int main()
{
    int a[] = {4, 3, 4, 2, 7, 9};
    int s = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < s; i++)
    {
        int flag = 1;
        int k = a[i] - 1;
        while (k > 1)
        {
            if (a[i] % k == 0)
            {
                flag = 0;
                break;
            }
            k--;
        }
        if (flag == 1)
        {
            cout << a[i] << "\t";
        }
    }
}
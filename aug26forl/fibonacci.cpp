// wap to find the fibonacci number
// 0       1       1       2       3       5
#include <iostream>
using namespace std;
int main()
{
    int n1 = 0, n2 = 1, a, sum = 0;
    cout << "Enter the number=";
    cin >> a;
    cout<<n1<<"\t"<<n2<<"\t";
    for (int i = 1; i <= a; i++)
    {
        sum = n1 + n2;
        n1 = n2;
        n2 = sum;
        cout  << sum << "\t";
    }
    cout << sum;

    return 0;
}

// wap to print binary to decimal number

// #include <iostream>
// #include <math.h>
// using namespace std;

// int main()
// {
//     int b, digit, decimal = 0, m;
//     cout << "Enter the binary number";
//     cin >> b;
//     for (int i = 0; b > 0; i++)
//     {
//         m = b % 10;

//         decimal = decimal + (m * pow(2, i));
//         b = b / 10;
//     }
//     cout << decimal;

//     return 0;
// }

// wap to print decimal to binary  number

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int d, binary = 0, i = 1, m;
//     cout << "enter decimal num=";
//     cin >> d;
//     while (d > 0)
//     {
//         m = d % 2;
//         binary = binary + m * i;
//         i = i * 10;
//         d = d / 2;
//     }
//     cout << "binary number=" << binary;
// }
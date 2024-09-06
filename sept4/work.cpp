// A
// A       B
// A       B       C
// A       B       C       D
// #include<iostream>
// using namespace std;
// int main()
// {
//     for (int r = 65; r <= 68; r++)
//     {
//       for (int c = 65; c <= r; c++)
//       {
//         cout<<char(c)<<"\t";
//       }
//       cout<<"\n";
//     }
// }

// A
// B       C
// D       E       F
// G       H       I       J
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=65;
//     for (int r = 65; r <= 68; r++)
//     {
//       for (int c = 65; c <= r; c++)
//       {
//         cout<<char(a)<<"\t";
//         a++;
//       }
//       cout<<"\n";
//     }
// }

// A       B       C       D
// A       B       C
// A       B
// A

// #include<iostream>
// using namespace std;
// int main()
// {
//     for (int r = 'D'; r >= 'A'; r--)
//     {
//       for (int c = 'A'; c <= r; c++)
//       {
//         cout<<char(c)<<"\t";
//       }
//       cout<<"\n";
//     }
// }

// A       B       C       D
// E       F       G
// H       I
// J
// #include<iostream>
// using namespace std;
// int main()
// {
//     char a=65;
//     for (int r = 'D'; r >= 'A'; r--)
//     {
//       for (int c = 'A'; c <= r; c++)
//       {
//         cout<<a<<"\t";
//         a++;
//       }
//       cout<<"\n";
//     }
// }

#include <iostream>
using namespace std;
int main()
{
     char c='J';
     int count=3;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout <<c << "\t";
            c++;
        }
        c=c-count;
        count=count+2;
        cout << "\n";
    }
}
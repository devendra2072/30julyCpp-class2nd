// ladder condition
//WAP to find large number 
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b, c;
//     cout << "enter 1st num\n";
//     cin >> a;
//     cout << "enter 2nd num\n";
//     cin >> b;
//     cout << "enter 3rd num\n";
//     cin >> c;
//     if (a > b && a > c)
//     {
//         cout << "large num=" << a;
//     }
//     else if (b > a && b > c)
//     {
//         cout << "large num=" << b;
//     }
//     else
//     {
//         cout << "large num=" << c;
//     }
// }

// wap to display the month name accordind to days

// #include<iostream>
// using namespace std;
// int main()
// {
//     int m;
//     cout<<"enter total days\n";
//     cin>>m;
//     if (m==31)
//     {
//         cout<<"jan\n"<<"march\n"<<"may\n"<<"july\n"<<"aug\n"<<"oct\n"<<"dec\n";
//     }
//     else if (m==30)
//     {
//         cout<<"april\n"<<"june\n"<<"sept\n"<<"nov\n";
//     }
//     else if (m==28||m==29)
//     {
//         cout<<"feb";
//     }
//     else{
//         cout<<"not match";
//     }
// }

// wap to metter reading

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cout << "enter ur metter reading\n";
//     cin >> a;
//     if (a < 100)
//     {
//         cout << a * 10;
//     }
//     else if (a > 100 && a < 200)
//     {
//         cout << 100 * 10 + (a - 100) * 15;
//     }
//     else if (a > 200 && a < 300)
//     {
//         cout << 100 * 10 + 100 * 15 + (a - 200) * 20;
//     }
//     else
//         {
//             cout << 100 * 10 + 100 * 15 + 100 * 20 + (a - 300) * 25;
//         }
// }


//wap to display generate the % according to the 3 subject

#include <iostream>
using namespace std;
int main()
{
    int p, c, m, t;
    float per;
    cout << "enter marks phy.=\n";
    cin >> p;
    cout << "enter marks chem.\n";
    cin >> c;

    cout << "enter marks maths.\n";
    cin >> m;
    t = p + c + m;
    per = t / 3;
     if (p<33&&c>=33&&m>=33)
     {
        cout<<"u got supply in phy";
     }
     else if (c<33&&m>=33&&p>=33)
     {
        cout<<"u got supply in chem.";
     }
     else if (m<33&&p>=33&&c>=33)
     {
        cout<<"u got supply in maths.";
     }
    else if (per > 60 && per <= 100)
    {
        cout << "1st division";
    }
    else if (per > 50 && per <= 60)
        {
            cout << "2nd division";
        }
    else if (per > 40 && per <= 50)
        {
            cout << "3rd division";
        }
    
    else
    {
        cout << "fail";
    }
}

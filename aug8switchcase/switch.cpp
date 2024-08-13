// //all operater operation
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=3,b=5,c;
//     cout<<"enter the value";
//     cin>>c;
//     if (c==1)
//     {
//         cout<<a+b;
//     }
//     else if (c==2)
//     {
//        cout<<a*b;
//     }
//  else if (c==3)
//     {
//        cout<<a-b;
//     }
//      else if (c==4)
//     {
//        cout<<a/b;
//     }
//      else
//     {
//        cout<<"invalid";
//     }
// }
//wap to print addition , subtraction , multiplay, division
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b, c;
//     cout << "enter 1st num\n";
//     cin >> a;
//     cout << "Enter 2no\n";
//     cin >> b;
//     cout << "Enter 1 for add\n Enter 2 for subratract\nEnter 3 for multiply\nenter 4 for divide";
//     cin >> c;
//     switch (c)
//     {
//     case 1:
//     {
//         cout << a + b;
//         break;
//     }
//     case 2:
//     {
//         cout << a - b;
//         break;
//     }
//     case 3:
//     {
//         cout << a * b;
//         break;
//     }
//     case 4:
//     {
//         cout << a / b;
//         break;
//     }
//     default:
//     {
//         cout << "invalid";
//     }
//     }
// }

// switch case dose't support decimal value as well as any operator dosent suppport

// #include <iostream>
// using namespace std;
// int main()
// {
//     int v = 1;
//     switch(--v || 0) //&&
//     {
//     case 1:
//     {
//         cout << "a";
//         break;
//     }
//     case 2:
//     {
//         cout << "b";
//         break;
//     }
//     case 0:
//     {
//         cout << "p";
//     }
//     default:
//     {
//         cout << "invalid";
//         break;
//     }
//     }
// }

// wap to find 's' for swap and 'm'for max value

// #include<iostream>
// using namespace std;
// int main()
// {
//     char a,b,t;
//     char c;
//     cout<<"enter 2 no\n";
//     cin>>a>>b;
//     cout<<"select 's' for swap and 'm' for max value\n";
//     cin>>c;
//     switch (c)
//     {
//      case 's':
//      case 'S':
//         {
//             t=a;
//             a=b;
//             b=t;
//             cout<<"a="<<a<<"\t"<<"b="<<b<<"\n";
//         break;
//         }
//      case 'm':
//      case 'M': 
//      {
//         if (a>b)
//         {
//             cout<<a<<"is max";
//         }
//         else
//         {
//             cout<<b<<"max";
//         }
//        break; 
//      }  
    
//      default:
//     {
//         cout<<"invalid choise";
//         break;
//     }
//     }
// }


// wap to print 'v'  for vowel/consonent and 'g' for genter


// #include<iostream>
// using namespace std;
// int main()
// {
//      char n,c; 
//     cout <<"enter any character\n";
//     cin>>n;
//     cout<<"select v for vowel/consonent and G for gender\n";
//     cin>>c;
//     switch (c)
//     {
//     case 'v':
//     case 'V':
//     {
//         if (n=='a'|| n=='i'||n=='e'||n=='o'||n=='u'||n=='A' || n=='I'|| n=='O'||n=='E'||n=='U')
//         {
//             cout<<"vowel";
//         }
//        else
//        {
//         cout<<"consonant";
//        } 
//        break;
//     }
//     case 'g':
//     case 'G':
//     {
//           if (n=='m'||n=='M')
//         {
//             cout<<"male";
//         }
//         else if (n=='f'||n=='F')
//         {
//             cout<<"female";
//         }
//         else
//         {
//             cout<<"other";
//         }
//       break; 
//       }
//     default:
//     {
//         cout<<"invalid";
 //        break;
//     }
//     }
// }
// wap to print 1 for smallest number and 2 for simple intrest and 3 for similer or not 
#include<iostream>
using namespace std;
int main()
{
     int ans;
     float a, b, c; 
    cout <<"enter three number\n";
    cin>>a>>b>>c;
    cout<<"select 1 for smallest num ,2 for simple intrest and 3 for all similer value or not=";
    cin>>ans;
    switch (ans)
    {
    case 1:
    {
        if (a<b && a<c)
        {
            cout<<"small number="<<a;
        }
       else if (b<a &&b<c)
       {
        cout<<"small number is="<<b;
       } 
       else
       {
        cout<<"small number is ="<<c;
       }
       break;
    }
    case 2:
    {
            float SI;
        	cout<<"Answer is:\n"<<(SI=a*b*c/100);

      break;
    }
    case 3:
    {
        if (a==b&&b==c)
        {
            cout<<"the number are similar";
        }
        else
        {
            cout<<"not similer number";
        }
        break;   
    } 
    default:
    {
        cout<<"invalid";
        break;
    }   
    }
}
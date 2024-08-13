//do while loop 

// wap to print 1 to 10 incriment
// #include<iostream>
// using namespace std;
// int main()
// {
//     int i=1;
//     do 
//     {
//         cout<<i<<"\n";
//         i++;
//     }while (i<=10);
// }


// wasp to decrement 10 to 1 print


// #include<iostream>
// using namespace std;
// int main()
// {
//     int i=10;
//     do 
//     {
//         cout<<i<<"\n";
//         i--;
//     }while (i>0);
// }


// wap to print even number 1 to 10
// #include<iostream>
// using namespace std;
// int main()
// {
//     int i=1;
//     do 
//     {
//         if (i%2==0)
//         {
//             cout<<i<<"\n";
//         }
//         i++;
//     }while (i<=10);
// }


// wap to print odd number between 1 to 10 
// #include<iostream>
// using namespace std;
// int main()
// {
//     int i=1;
//     do 
//     {
//         if (i%2!=0)
//         {
//             cout<<i<<"\n";     
//         }
//         i++;
//     }while (i<=10);
// }

// wap to print the table of any number
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,i=1;
//     cout<<"enter any number\n";
//     cin>>a;
//     do 
//     {
//         cout<<a*i<<"\n";    //cout<<i<<"*"<<c<<"="<<c*i<<"\n";
//         i++;
//     }while (i<=10);
// }

//wap to print sum of numbers 1 to 10

// #include <iostream>
// using namespace std;
// int main() 
// {
//     int sum = 0;
//     int i = 1;
//     do {
//             cout<<i<<"\n";
//             sum += i;
//         i++;
//     } while (i <= 10);
//     cout << "Sum of even numbers from 1 to 10: " << sum ;
// }


//wap to print sum of even numbers 1 to 10

// #include <iostream>
// using namespace std;
// int main() 
// {
//     int sumEven = 0;
//     int i = 1;
//     do {
//         if (i % 2 == 0) 
//         { 
//             cout<<i<<"\n";
//             sumEven += i;
//         }
//         i++;
//     } while (i <= 10);
//     cout << "Sum of even numbers from 1 to 10: " << sumEven ;
// }

//wap to print sum of odd numbers 1 to 10

#include <iostream>
using namespace std;
int main() 
{
    int sumodd = 0;
    int i = 1;
    do {
        if (i % 2 != 0) 
        { 
            cout<<i<<"\n";
            sumodd += i;
        }
        i++;
    } while (i <= 10);
    cout << "Sum of even numbers from 1 to 10: " << sumodd ;
}

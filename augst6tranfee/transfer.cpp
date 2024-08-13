// #include<iostream>
// using namespace std;
// int main()
// {
//     //before 
//     cout<<"welcome\n";
//     goto school;
//     cout<<"students\n";
//     school:
//     cout<<"bye\n";
// }

//wap to print num 1 to 10
// #include<iostream>
// using namespace std;
// int main()
// {
//     int i=1;
//     rpt:
//     cout<<i<<"\n";
//     i++;
//     if (i<=10)
//     {
//       goto rpt;  
//     }
// }


// wap to generrate the table of any number using goto statement

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,i=1;
//     cout<<"enter any number=";
//     cin>>a;
//     gtp:
//     cout<<a*i<<"\n";
//     i++;
//     if (i<=10)
//     {
//        goto gtp;
//     }   
// }

//wap to print any number 10 to 1

// #include<iostream>
// using namespace std;
// int main()
// {
//     int i=10;
//     rpy:
//     cout<<i<<"\n";
//     i--;

//     if (i>=1)
//     {
//         goto rpy;
//     }
// }

//wap to print the display the even number 1 to 10

#include<iostream>
using namespace std;
int main()
{
    int i=1;
    rpy:
    if (i%2==0)
    {
        cout<<i<<"\n";
    }
    i++;

    if (i<=10)
    {
        goto rpy;
    }
}
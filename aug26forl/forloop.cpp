// #include <iostream>
// using namespace std;
// int main()
// {
//     int first, last, n, num, digit = 0;
//     cout << "enter any number\n";
//     cin >> n;
//     num = n;
//     last = n % 10;
//     while (n > 0)
//     {
//         digit++;
//         first = n % 10;
//         n = n / 10;
//     }
//     cout << "first=" << first << "\n";
//     cout << "last=" << last << "\n";
//     cout << "sum=" << first + last;
//     int a = first*pow(10, digit - 1);
//     cout << "a=" << a << "\n";
//     int b = num % a;
//     cout << "b" << b << "\n";
//     num = b / 10;
//     cout << "num=" << num << "\n";
//     int ans;
//     ans = last * pow(10, digit - 1) + num * 10+first;
//     cout << "swapped value=\n";
//     cout << ans;
// }


#include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"enter ant char =";
    cin>>c;
    cout<<"ASCII value of "<<c<<"=is="<<(int)c;
}












#include<iostream>
using namespace std;
#include<math.h>
int main() {
    /*
    int a ,i=1;
    for(i=1;i<=3;i++){
        cout<<"\nEnter the passward";
        cin>>a;
        if(a == 1234){
            cout<<"login Success";

            break;
        }


        else{
            cout<<"Try again\n";
        }


    }
    if(i==4){
        cout<<"your card is Blocked";
    }*/



    // Q54) W.A.P to find first and last digit of a number?

    int n,frst,lst,num,digit=0;

    cout<<"Enter the number";
    cin>>n; // 12345;
    num = n;

    lst =  n%10;


    while(n > 0){
            digit++;

        frst = n%10;
        n = n/10;
    }

    cout<<frst <<"\n";
    cout<<lst<<"\n";

    int sum = frst + lst;
    cout<<sum <<" is the sum \n";
    cout<<digit;

    int a = frst*pow(10,digit-1);

    int b = num%a;

    num = b/10;
    int ans = lst*pow(10,digit-1)+num*10 + frst;
    cout<<ans;


    //Q) Using Without loops


}
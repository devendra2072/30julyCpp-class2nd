// wap to print the number of 1 to 10
//  #include<iostream>
//  using namespace std;
//  int main()
//  {
//      int i=1;
//      while (i<=10)
//      {
//       cout<<i<<"\n";
//       i++;
//      }

// }

// wap to generate the power

#include <iostream>
using namespace std;
int main()
{
    int base, power, r = 1;
    cout << "enter base= \n";
    cin >> base;
    cout << "enter power=\n";
    cin >> power;
    while (power >= 1)
    {
        r = r * base;
        power--;
    }
    cout << "result=" << r;
}
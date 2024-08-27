#include <iostream>
using namespace std;
int main()
{
    int first, last, n, num, digit = 0;
    cout << "enter any number\n";
    cin >> n;
    num = n;
    last = n % 10;
    while (n > 0)
    {
        digit++;
        first = n % 10;
        n = n / 10;
    }
    cout << "first=" << first << "\n";
    cout << "last=" << last << "\n";
    cout << "sum=" << first + last;
    int a = first*pow(10, digit - 1);
    cout << "a=" << a << "\n";
    int b = num % a;
    cout << "b" << b << "\n";
    num = b / 10;
    cout << "num=" << num << "\n";
    int ans;
    ans = last * pow(10, digit - 1) + num * 10+first;
    cout << "swapped value=\n";
    cout << ans;
}
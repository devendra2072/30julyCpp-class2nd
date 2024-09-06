// wap to print ASCII charcater

#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i <= 255; i++)
    {
        cout << i << "value=" << char(i) << "\t";
    }
}
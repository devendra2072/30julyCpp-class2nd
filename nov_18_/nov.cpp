// shopping list
#include <iostream>
using namespace std;
const int n = 50;
class shopping
{
    int item[n];
    int price[n], cnts, total = 0;

public:
    void cnt()
    {
        cnts = 0;
    }
    void getorder();
    void display();
    void cancel();
};
void shopping::getorder()
{
    cout << "enter code\n";
    cin >> item[cnts];
    cout << "enter code\n";
    cin >> price[cnts];
    total = total + price[cnts];
    cnts++;
}
void shopping::cancel()
{
    int code;
    cout << "enter itemcode\n";
    cin >> code; // 1002
    for (int i = 0; i < cnts; i++)
    {
        if (item[i] == code)
        {
            total = total - price[i];
            price[i] = 0;
        }
    }
}
void shopping::display()
{
    for (int i = 0; i < cnts; i++)
    {
        cout << "Code=" << item[i] << "\t";
        cout << "Code=" << price[i] << "\n";
    }
    cout << "Total bill=" << total;
}
int main()
{
    shopping cust;
    cust.cnt();
    int ch;
    char c;
    do
    {
        cout << "Select 1 for get order \n select 2 for display\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            cust.getorder();
            break;
        }
        case 2:
        {
            cust.display();
            break;
        }
        case 3:
        {
            cust.cancel();
            break;
        }
        default:
        {
            cout << "\n Invalid Choice";
            break;
        }
        }
        cout << "\n Do u wanna Coutinue";
        cin >> ch;
    } while (c == 'y');
}

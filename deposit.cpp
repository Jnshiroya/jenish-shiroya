#include <iostream>
using namespace std;
class deposit
{
    int principal, year, returnamount;
    public:
    float rate;
    deposit(int p, int y, int r)
    {
        principal = p;
        year = y;
        rate = float(r) / 100;
        returnamount = principal;
    }
    void calculation()
    {
        for (int i = 0; i < year; i++)
        {
            returnamount = returnamount * (1 + rate);
        }
    }
    void show()
    {
        cout << "your principal amount is " << principal << "." << endl;
        cout << "deposit year is " << year << "."<<endl;
        cout << "deposit rate of interest " << rate * 100 << "% ." << endl;
        cout << "your return amount is " << returnamount << endl;
    }
};
int main()
{
    int a, b, c, d;
    cout << "enter principal:";
    cin >> a;
    cout << endl;

    cout << "enter year:";
    cin >> b;
    cout << endl;
    cout << "enter rate:";
    cin >> c;
    cout << endl;
    deposit j(a, b, c);
    j.calculation();
    j.show();

    return 0;
}
#include <iostream>
using namespace std;
class com
{
    int a, b;

public:
    com()
    {
        a = 0;
        b = 0;
    }
    com(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    int operator==(com &obj);
};
int com ::operator==(com &obj)
{
    if (a == obj.a && b == obj.b)
    {
        return 0;
    }
    return 1;
}

int main()
{
    com C1;
    com C2(0, 0);
    com C3(5, 6);
    if ((C1 == C2) == 0)
    {
        cout << "both object value are same." << endl;
    }
    else
    {
        cout << "value are not same." << endl;
    }
    if ((C3 == C2) == 0)
    {
        cout << "both object value are same." << endl;
    }
    else
    {
        cout << "value are not same." << endl;
    }
    return 0;
}
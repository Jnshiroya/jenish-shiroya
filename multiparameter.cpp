#include <iostream>
using namespace std;
template <class T1 = int, class T2 = float, class T3 = char>
class number
{
    T1 n1;
    T2 n2;
    T3 n3;

public:
    number(T1 a = 0, T2 b = 0, T3 c = 'a')
    {
        n1 = a;
        n2 = b;
        n3 = c;
    }
    display()
    {
        cout << "value of integer" << n1<<endl;
        cout << "value of float" << n2<<endl;
        cout << "value of char" << n3<<endl;
    }
};
int main()
{
    number<> N;
    N.display();
    return 0;
}
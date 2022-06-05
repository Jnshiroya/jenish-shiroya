#include <iostream>
using namespace std;
class complex
{
public:
    int a;
    int b;
    void setdata(int c, int d)
    {
        a = c;
        b = d;
    }
    void sumofcomplex(complex e, complex f)
    {
        a = e.a + f.a;
        b = e.b + f.b;
    }
    void display()
    {
        cout << "sum of complex number is:" << a << " + " << b << "i";
    }
};
int main()
{
    complex c1,c2,c3;
    c1.setdata(1,2);
    c2.setdata(3,4);
    c3.sumofcomplex(c1,c2);
    c3.display();

    return 0;
}
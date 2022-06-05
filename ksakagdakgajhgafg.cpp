#include <iostream>
using namespace std;
class jenish
{
public:
    int a;
    int b;
 jenish(){}
    jenish(int i, int j) : a(i), b(j) {}
    virtual void display()
    {
        cout << "value of a" << a;
        cout << "value of b" << b;
    }
};
class derived: public jenish{
    int derived1, derived2;
    public:
        Derived(int f, int g, int c, int d) : jenish(f,g)
        {
            derived1 = c;
            derived2 = d;
            cout<< "Derived class constructor called"<<endl;
        }
        void printDataDerived(void)
        {
            cout << "The value of derived1 is " << derived1 << endl;
            cout << "The value of derived2 is " << derived2 << endl;
        }
};
int main()
{
    jenish *ptr;
    derived ob(1,2,3,4);
    ptr=&ob;
    ptr->display();
    return 0;
}
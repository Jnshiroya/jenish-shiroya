#include <iostream>
using namespace std;
class A
{
    int a;

public:
    A  &set_data(int a)
    {
        this->a = a;
        return *this;
    }
    void getdata ()
    {
        cout<<a;
    }
};
int main()
{
     A j;
    j.set_data(4);
    j.getdata();

    return 0;
}
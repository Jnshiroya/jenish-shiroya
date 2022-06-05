#include <iostream>
using namespace std;
class base
{
    int n1, n2;

public:
    void setvalue()
    {
        cin >> n1 >> n2;
    }
    int setdata1()
    {
        return n1;
    }
    int setdata2()
    {
        return n2;
    }

};
class define :  public base{
    
    public:
    int sum;
    int ans(){
        
        sum= setdata1()+setdata2();
        return sum;
    }


};
int main()
{
    define j;
    j.setvalue();
    cout<<"ans:"<<j.ans();
    return 0;
}
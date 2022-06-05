#include <iostream>
using namespace std;
class student
{
protected:
    int rollnumber;

public:
    void set_number(int r1)
    {
        rollnumber = r1;
    }
    void numberdisplay()
    {
        cout << "your roo number is:" << rollnumber<<endl;
    }
};
class test : virtual public student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float p1)
    {
        maths = m1;
        physics = p1;
        
    }
    void marksdisplay()
    {
        cout << "your marks is:";
        cout << "maths:" << maths<<endl;
        cout << "physics:" << physics<<endl;
    }
};
class sports : virtual public student
{
protected:
    int credit;

public:
    void set_credit(int c1)
    {
        credit = c1;
        
    }
    void creditdisplay()
    {
        cout << "your credit is:"<<credit<<endl;
    }
};
class result : public test ,public sports{
    protected:
    float total;
    public:
    void display(){
        total = maths + physics + credit;
        numberdisplay();
        marksdisplay();
        creditdisplay();
        cout<<"your result:"<<total<<endl;


    }
};

int main()
{
    result j;
    j.set_number(1);
    j.set_marks(99.5,95.5);
    j.set_credit(91);
    j.display();
    return 0;
}
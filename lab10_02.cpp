#include <iostream>
using namespace std;
class shape
{
protected:
    float d1;
    float d2;

public:
    shape()
    {
        cout << "enter diamension 1: ";
        cin >> d1;
        cout << endl;
        cout << "enter diamension 2: ";
        cin >> d2;
        cout << endl;
    }
    void setdata(int a, int b)
    {
        d1 = a;
        d2 = b;
    }
    virtual void display() = 0;
};
class rectangle : public shape
{

public:
    rectangle()
    {
        cout << "your shape is rectangle.." << endl;
    }
    void display()
    {
        cout << "your ractangle area is  " << d1 * d2 << endl;
    }
};
class squar : public shape
{
public:
    squar()
    {
        cout << "your shape is squar.." << endl;
    }
    void display()
    {
        cout << "your squar area is  " << d1 * d2 << endl;
    }
};
class triangle : public shape
{
    public:
     triangle()
    {
        cout << "your shape is triangle.." << endl;
    }
    void display()
    {
        cout << "your triangle area is  " << 0.5*d1 * d2 << endl;
    }
};
int main()
{
   rectangle r1;
   r1.display();
   squar s1;
   s1.display();
   triangle t1;
   t1.display();
    return 0;
}
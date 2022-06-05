#include <iostream>
#include <cstring>
using namespace std;
class film
{
protected:
    float rating;
    string film_name;

public:
    film(string title, float a)
    {
        film_name = title;
        rating = a;
    }
    virtual void display() {}
};
class filmvideo : public film
{
    float vllen;

public:
    filmvideo(string title, float a, float len) : film(title, a)
    {
        vllen = len;
    }
    void display()
    {
        cout << "film name:" << film_name;
        cout << "film rating :" << rating << endl;
        cout << "film timing:" << vllen << endl;
        // cout<<film_name.at(0)<<""<<film_name.at(2);
    }
};
class filmprofit : public film
{
    int money;

public:
    filmprofit(string tit, float r, int rs) : film(tit, r)
    {
        money = rs;
    }
    void display()
    {
        //cout << "film name:" << film_name;
        //cout << "film rating :" << rating << endl;
        cout << "film timing:" << money << endl;
    }
};

int main()
{
    string title;
    float rating;
    float length;
    int rs;
    cin >> title >> rating >> length >> rs;

    filmvideo f1(title, rating, length);
    //f1.display();
    filmprofit f2(title, rating, rs);
    //f2.display();
    film *ptr[2];
    ptr[0] = &f1;
    ptr[1] = &f2;
    ptr[0]->display();
    (ptr[1])->display();

    return 0;
}
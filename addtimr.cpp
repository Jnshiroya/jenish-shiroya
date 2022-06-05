#include <iostream>
using namespace std;
class time
{
    int hours;
    int min;
    int sec;
    int remender;
    int remender1;

public:
    time()
    {
    }
    time(int a, int b, int c)
    {
        hours = a;
        min = b;
        sec = c;
    }
    void addtime(time t1, time t2)
    {
        hours = t1.hours + t2.hours;
        min = t1.min + t2.min;
        sec = t1.sec + t2.sec;
    
        if ((min / 60) >= 1)
        {
            hours = hours + (min / 60);
            min = min % 60;
        }
        if ((sec / 60) >= 1)
        {
            min = min + (sec / 60);
            sec = sec % 60;
        }
    }
    void display(){
        cout<<"time:"<<hours<<":"<<min<<":"<<sec;
    }
};
 int main()
{
    time t1(5,30,30),t2;
    t2=t1;
    time t3;
    t3.addtime(t1,t2);

    t3.display();
    return 0;
}
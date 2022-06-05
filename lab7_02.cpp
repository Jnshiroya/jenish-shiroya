#include <iostream>
#include <string.h>
using namespace std;
class animal
{
    string name;
    float speed;

public:
    animal()
    {
        cout << "enter animal name snd speed : ";
        cin >> name >> speed;
    }
    animal(string s1, float s)
    {
        name = s1;
        speed = s;
    }
    void display()
    {
        cout << "name of animal:  " << name << endl;
        cout << "speed of animal:  " << speed << endl;
    }
    int operator<=(animal obj)
    {
        if (speed < obj.speed)
        {
            return 1;
        }
          else if(speed == obj.speed)
        {
            return 2;
        }
        else
        {
            return 0;
        }
    }
    animal operator++()
    {
         speed++;
        return *this;
    }
    animal operator++( int dummy)
    {
        speed++;
        
        return *this;
    }
    string name1()
    {
        return name;
    }
};
int main()
{
    animal A1, A2("LION", 50);
    int a = (A1 <= A2);
    if (a == 1)
    
        cout << A1.name1() << "speed less than " << A2.name1() << "speed."<<endl;
    
    else if(a == 2)
    
        cout << A1.name1() << "speed same " << A2.name1() << "speed."<<endl;
    
    else if(a==0)
    
        cout << A1.name1() << "  speed greater than " << A2.name1() << "  speed."<<endl;
    A2.display();
    A2++;
    cout<<"speed after postfix :     "<<endl;
    A2.display();
    ++A2;
      cout<<"speed after prefix :     "<<endl;
    A2.display();
    return 0;
}
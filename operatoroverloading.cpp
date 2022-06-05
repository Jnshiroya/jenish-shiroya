#include <iostream>
#include <string.h>
using namespace std;
class operatorover
{
    char *p;
    int len;

public:
    operatorover()
    {
        len = 0;
        p = "\0";
    }
    operatorover(char *s)
    {
        len = strlen(s);
        p = new char[len + 1];
        strcpy(p, s);
    }
    void operator=(operatorover &o1)
    {
        len = o1.len;
        p = new char[len + 1];
        strcpy(p, o1.p);
    }
    void display()
    {
        cout<<len<<endl;
        cout << p << endl;
    }
    ~operatorover()
    {
        delete[] p;
    }

}; int main()
{
    char c1[10];
    char c2[10];
    cin>>c1;
    cin>>c2;
    operatorover O1(c1);
    operatorover O2(c2);
    O2=O1;
    O1.display();
    O2.display();
    

    return 0;
}
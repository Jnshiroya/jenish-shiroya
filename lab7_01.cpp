#include <iostream>
#include<string.h>
using namespace std;
class string1
{
    char *p;
    int length;

public:
    string1()
    {
    }
    string1(char *name)
    {
        length = strlen(name);
        p = new char[length + 1];
        strcpy(p, name);
    }
    string1 operator+(string1 obj)
    {
        string1 obj1;
        obj1.length = length + obj.length;
        obj1.p = new char[obj.length + 1];
        for (int i = 0; i < obj1.length + 1; i++)
        {
            if (i < length)
            {
                obj1.p[i] = p[i];
            }
            else
            {
                obj1.p[i] = obj.p[i - length];
            }
        }
        return obj1;
    }
    string1 operator+(int a){
        string1 obj3;
        obj3.length=length;
        obj3.p=new char[length+1];
        for(int i = a,j=0; i < length+1; i++,j++)
        {
            obj3.p[j]=p[i];
        }return obj3;
        
    }
    void operator=(string1 obj2)
    {
        length = obj2.length;
        p = new char[length + 1];
        strcpy(p, obj2.p);
    }
    void display()
    {

        cout << p << endl;
    }
    // ~string1(){
        // delete[] p;
    // }
    
    
};
int main()
{
     char name[10];
     cin>>name;
     char name2[15];
     cin>>name2;
      char name3[10];
     cin>>name3;
    
     
     string1 s1(name);
    string1 s2(name2);
    string1 s3;
    s3=s1+s2;
    s3.display();
    string1 s6;
    s6=s2+3;
    s6.display();
    string1 s4(name3);
    string1 s5;
    s5=s4;
    s5.display();

    return 0;
}
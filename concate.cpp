#include <iostream>
#include <string.h>
using namespace std;
class string1
{
    int length;
    char *p;

public:
    string1() {}
    string1(const char *s1)
    {
        length = strlen(s1);
        p = new char[length + 1];
        strcpy(p, s1);
    }
    void concate(string1 &str1, string1 &str2)
    {
        length = str1.length + str2.length;
        p = new char[length + 1];
        for (int i = 0; i < length; i++)
        {
            if (i < str1.length)
            {
                p[i] = str1.p[i];
            }
            else
            {
                p[i] = str2.p[i - str1.length];
            }
        }
    }
    void display()
    {
        cout << p;
    }
};
int main()
{
    string1 s("jenish");
    string1 s2("shiroya");
    string1 s3;
    s3.concate(s, s2);
    s3.display();

    return 0;
}
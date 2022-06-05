#include <iostream>
#include<string>
using namespace std;
class string1
{
    int len;
    char *p;
    string s;
    int count = 0;

public:
    string1()
    {
        cin >> len;
        p = new char[len];
        cin >> p;
    }
    void enetrs()
    {
        cin >> s;
    }
    int findocc(string1 &s1)
    {

        for (int j = 0; j < s1.len(); j++)
        {
            if (s == s1.at(j))
            {
                count++;
            }
        }
        return count;
    }

};
int main()
{
    string1 ss;
    return 0;
}
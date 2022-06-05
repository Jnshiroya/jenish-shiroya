#include <bits/stdc++.h>
using namespace std;
class string1
{
    char *p;
    int len;
    int cnt = 0;

public:
    string1()
    {
        cin >> len;
        p = new char[len];
        cin >> p;
    }
    string1(int x)
    {
    }
    string1(const char *&p)
    {
        cout << "copy constructor called"
             << "\n";
    }

    ~string1()
    {
        delete[] p;
    }
    int findocc(string1 &s2)
    {
        

        for (int i = 0; i < len; i++)
        {
            int j;
            int k = i;
            for (j = 0; j < s2.len and k < len; j++, k++)
            {
                if (s2.p[j] != p[k])
                {

                    break;
                }
            }
            if (j == s2.len)
            {
                cnt++;
            }
        }

        return cnt;
    }
    string1 replacees(string1 &s2, string1 &s4, string1 &s3)
    {

        s3.len = len;
        s3.p = p;

        for (int i = 0; i < len; i++)
        {
            int k = 0;
            int j;
            for (j = 0; j < s2.len and k < len; j++, k++)
            {
                if (p[k] != s2.p[j])
                {
                    break;
                }
            }
            if (j == s2.len)
            {
                for (int l = 0; l < s4.len; l++)
                {
                    s3.p[i + l] = s4.p[l];
                }
            }
        }

        return s3;
    }
    void display()
    {
        cout << p;
    }
};

int main()
{
    string1 s1;
    string1 s2;
    string1 s4;
    string1 ans(1);
    cout << s1.findocc(s2);
    string1 s3 = s1.replacees(s2, s4, ans);
    s3.display();
}
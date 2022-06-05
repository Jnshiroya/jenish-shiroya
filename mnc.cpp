#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int s;
    cin >> s;
    for (int j = 0; j < n; j++)
    {
        int sum = 0;
        for (int k = 0; k < n; k++)
        {
            if (k >= j)
            {
                sum = sum + a[k];
                if (sum == s)
                {
                    cout << j + 1 << "to" << k + 1 << endl;
                    return 0;
                }
            }
        }
    }
    return 0;
}
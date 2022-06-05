#include <iostream>
using namespace std;
int main()
{
    int a[7];
    for (int i = 0; i < 7; i++)
    {
        cin >> a[i];
    }
    int jenish=0;
    int ans = 0;
    for (int i = 0; i < 7; i++)
    {
        for(int j=0; j<7;j++){
            if (ans == a[i])
            {
                ans++;
                continue;
            }
    }
    jenish++;
    if(jenish!=ans){
        cout<<ans;
        return 0;
    }

    }

    return 0;
}
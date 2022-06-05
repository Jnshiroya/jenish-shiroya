#include <iostream>
using namespace std;
bool insafe(int **arr, int x, int y, int n)
{
    if (x < n && y < n && arr[x][y] == 1)
    {
        return true;
    }
    return false;
}
bool rateinmage(int **arr, int x, int y, int n, int **solarr)
{
    if ((x == (n - 1)) && (y == (n - 1)))
    {
        solarr[x][y] = 1;
        return true;
        /* code */
    }

    if (insafe(arr, x, y, n))
    {
        /* code */
        if (rateinmage(arr, x + 1, y, n, solarr))
        {
            /* code */
            return true;
        }
        if (rateinmage(arr, x, y + 1, n, solarr))
        {
            /* code */
            return true;
        }
        solarr[x][y] == 0;
        return false;
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int **solarr;
    solarr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        solarr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            /* code */
            solarr[i][j] = 0;
        }
    }
    if (rateinmage(arr, 0, 0, n, solarr))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; i++)
            {
                cout << solarr[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}
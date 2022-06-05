#include <iostream>
using namespace std;
void rearrange(int ab[], int n)
{
    int a[n];
    for(int m=0;m<n;m++){
        a[m]=ab[m];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i % 2 == 0 && j>i)
            {
                if (a[j] > a[i])
                {
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
            else if(i % 2 != 0 && j>i)
                {
                    if (a[j] < a[i])
                    {
                        int emp = a[i];
                        a[i] = a[j];
                        a[j] = emp;
                    }
                }
        }
    }
    for(int k=0;k<n;k++){
        cout<<a[k]<<" ";

    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    //int *ptr=arr;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    rearrange(arr, n);
    return 0;
}
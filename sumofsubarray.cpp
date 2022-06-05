#include <iostream>
void sumofsubarray(int arr[], int n)
{
    
    for (int k = 0; k < n; k++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum = sum + arr[j];
            
        }
cout<<sum;
    }
    
}
using namespace std;
int main()
{
    int n;
    cout << "given size of array:";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum;
    sum = sumofsubarray(arr, n);
    
    return 0;
}
#include <iostream>
using namespace std;
int searching(int arr[], int b, int key)
{
    for (int i = 0; i < b; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
 int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "what you search?";
    cin >> key;
    int position;
    position = searching(arr, n, key);
    cout << position;
    cout<<arr[position];
    return 0;
}
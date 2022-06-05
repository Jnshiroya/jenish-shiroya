#include <iostream>
using namespace std;
int binarysearch(int arr[], int n, int k)
{
    int s = 0;
    int m = n;
    int mid;
    while (s <= m)
    {
        mid = (s + m) / 2;
        if (arr[mid] == k)
        {
            return mid;
        }
        else if (arr[mid] > k)
        {
            m = mid - 1;
        }
        else
        {
            s = mid + 1;
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
    position = binarysearch(arr, n, key);
    cout << position;
    cout << arr[position];

    return 0;
}
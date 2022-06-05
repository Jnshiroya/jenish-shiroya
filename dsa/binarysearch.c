#include <stdio.h>
int binarysearch(int arr[], int size, int element)
{
    int low = 0;
    int high = size - 1;
    int mid;

    for (int i = 0; low <= high; i++)
    {

         mid = (low + high) / 2;
        if (element == arr[mid])
        {
            return mid;
        }
        else if (arr[mid] < element)
        {
            /* code */
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return 0;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = 9;
    int a = binarysearch(arr, size, 9);
    printf("%d", a);
    return 0;
}
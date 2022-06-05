#include <iostream>
using namespace std;
// template<class t>
class arraysort
{
    int *arr;
    int temp;
    int size;

public:
    arraysort(int size)
    {
        this->size = size;
        arr = new int[size + 1];
        for (int i = 0; i < size; i++)
        {
            /* code */
            cin >> arr[i];
        }
    }
    void sorta()
    {

        for (int i = size; i > 0; i--)
        {
            for (int j = 0; j < i; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
        for (int i = 0; i < size; i++)
        {
            /* code */
            cout << arr[i] << " ";
        }
    }
    void insertionsort()
    {
        int temp,j;
        for (int i = 1; i < size; i++)
        {
            temp = arr[i];
            j=i-1;

            
            while (arr[j] > temp && j >= 0)
            {
                /* code */
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = temp;
        }
        for (int i = 0; i < size; i++)
        {
            /* code */
            cout << arr[i] << " ";
        }
    }
};

int main()
{
    arraysort a1(4);
    a1.insertionsort();

    return 0;
}
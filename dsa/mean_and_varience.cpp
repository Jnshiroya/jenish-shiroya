//first number read from file and find mean and varience 
#include <bits/stdc++.h>
using namespace std;
float findmean(int arr[], int size)//function of find means
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        /* code */
        sum += arr[i];
    }
    return (sum / float(size));
}
float findvarience(int arr[], int size)//find varience 
{
    float avg = findmean(arr, size);
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + pow((arr[i] - avg), 2);
    }

    return sum / float(size-1);
}
int main()
{
    int arr[100];
    ifstream read;
    read.open("read.txt");//open txt file
    char ch;
    int i = 0;
    while (!read.eof())
    {
        ch = read.get();

            if (ch != ' ' && ch != '\n')
            {
                arr[i] = ch - 48;
                ch=read.get();
                if (ch != ' ' && ch != '\n')
                {
                    arr[i]=10*arr[i];
                    arr[i]=arr[i]+(ch-48);
                }
                
                i++;
            }
        
    }
    
    for (int j = 0; j < i - 1; j++)
    {
        cout << arr[j] << " ";
    }
    cout << endl;
    float mean = findmean(arr, i - 1);//call mean function and store data in mean variable
    cout << "mean : " << mean << endl;
    float verience = findvarience(arr, i - 1);//call find varience  function and store data in verience variable
    cout << "varience : " << verience << endl;
    read.close();
    return 0;
}
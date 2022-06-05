#include <iostream>
using namespace std;
template <class T>
class matrix
{
private:
    T arr[3][3];

public:
    matrix()
    {
        // arr=new T[3][3];
    }
    matrix(int size)
    {
        // arr=new T[3][3];
        for (int i = 0; i < size; i++)
        {

            for (int j = 0; j < size; j++)
            {
                cin >> arr[i][j];
            }
        }
    }
    void display()
    {
        for (int i = 0; i < 3; i++)
        {

            for (int j = 0; j < 3; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }

    void addition(matrix<int> &m1, matrix<float> &m2)
    {
        // matrix<float> m3;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                /* code */
                arr[i][j] = m1.arr[i][j] + m2.arr[i][j];
            }
        }
        // return m3;
    }
    int occu(matrix m4)
    {
        int min = arr[3][3];
        int count = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                /* code */
                if (min > arr[i][j])
                {
                    min > arr[i][j];
                    count = 0;
                }
                if (min = arr[i][j])
                {
                    return count;
                }
            }
        }
        return count;
    }
};

int main()
{
    matrix<int> m1(3);
    matrix<float> m2(3);
    matrix<float> m3;
    m3.addition(m1, m2);
    m3.display();
    int a = m1.occu(m1);
    cout << "your occurence of min element : " << a;

    return 0;
}
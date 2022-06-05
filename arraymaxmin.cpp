#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cout << "size of array:";
    cin >> n;
    int marks[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter element " << i<<":";
        cin >> marks[i];
        cout << endl;
    }
    int maxno = INT_MIN;
    int minno = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        maxno = max(maxno, marks[i]);
        minno = min(minno, marks[i]);
    }
    cout << "maximum marks:" << maxno << endl;
    cout << "minimum marks:" << minno << endl;

    return 0;
}
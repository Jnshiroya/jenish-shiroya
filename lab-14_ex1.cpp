#include <bits/stdc++.h>
using namespace std;
class it
{
    string name;
    int code;
    int cost;

public:
    void get()
    {
        cout << "enter iter name,code,cost" << endl;
        cin >> name >> code >> cost;
    }
    void display()
    {
        cout << right << setw(11) << setfill(' ') << name;
        cout << right << setw(11) << setfill(' ') << code;
        cout << right << setw(11) << setfill(' ') << cost;
        cout << endl;
    }
};
int main()
{
    int n;
    cout << "enter the number of item ::";
    cin >> n;
    it arr_of_obj[n];

    for (int i = 0; i < n; i++)
    {
        arr_of_obj[i].get();
    }
    cout << right << setw(11) << setfill(' ') << "name";
    cout << right << setw(11) << setfill(' ') << "code";
    cout << right << setw(11) << setfill(' ') << "cost";
    cout << endl;
    cout << right << setw(23) << setfill('-');
    for (int i = 0; i < 15; i++)
    {
        cout << "-";
    }

    cout << endl;
    for (int i = 0; i < n; i++)
    {
        arr_of_obj[i].display();
    }
    cout << endl;
}
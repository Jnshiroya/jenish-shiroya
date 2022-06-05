#include <iostream>
using namespace std;
class student
{
public:
    string name;
    int age;
    bool gender;
    void set()
    {
        cout << "enter name:";
        cin >> name;
        cout << "enter age:";
        cin >> age;
        cout << "enter gender:";
        cin >> gender;
    }
    void display()
    {
        cout << "name:" << name << endl;
        cout << "age:" << age << endl;
        if (gender == 0)
        {
            cout << "gender:male" << endl;
        }
        else
        {
            cout << "name:female" << endl;
        }
    }
};
int main()
{
    int n;
    cout << "how many student detail you enter:";
    cin >> n;
    student a[n];
    for (int i = 0; i < n; i++)
    {
        a[i].set();
        a[i].display();
    }
    return 0;
}

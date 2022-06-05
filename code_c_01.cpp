#include <iostream>
using namespace std;
class atm
{
    float cur_balance;
    float withdraw_amount;

public:
    atm()
    {
        cout << "enter cuurent amount: ";
        cin >> cur_balance;
    }
    atm(float a)
    {
        cur_balance = a;
    }
    int withdraw()
    {
        cout << "enter withdraw amount:  ";
        cin >> withdraw_amount;
        if (withdraw_amount > cur_balance)
        {
            cout << "not sufficient balance in your account.please enter amount less than" << cur_balance << "." << endl;
            return 0;
        }
        else if (withdraw_amount < 0)
        {
            cout << "please enter sufficient balance." << endl;
            return 0;
        }
        else
        {
            cur_balance = cur_balance - withdraw_amount;
            return 1;
        }
    }
    void display()
    {
        cout << "current amount in your acount is  " << cur_balance << endl;
    }
};

int main()
{

    atm consumer1;
    int a;
    a = consumer1.withdraw();
    if (a == 0)
    {
        // cout << "please try again!" << endl;
        while (a == 0)
        {
            cout << "please try again!" << endl;
            a = consumer1.withdraw();
            if (a == 1)
            {
                cout << "your withraw amount successfully." << endl;
                consumer1.display();
            }
        }
    }
    else
    {
        cout << "your withraw amount successfully." << endl;
        consumer1.display();
    }

    return 0;
}

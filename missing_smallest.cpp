#include <iostream>
using namespace std;
class bank
{
	int accno;
	string custname;
	string accounttype;
	float balance;

public:
	static int count;
	bank()
	{
		cout << "enter details for customer-" << count + 1 << endl;
		cout << "enter accno,name,accouttype and balance" << endl;
		cin >> accno >> custname >> accounttype >> balance;
		count++;
	}
	string name()
	{
		return custname;
	}
	void withdraww()
	{
		int withdraw;
		cout << "how many rupee you want to withdraw?" << endl;
		cin >> withdraw;
		if (withdraw > balance)
			cout << "not saficient balance...sorry!" << endl;
		else
			balance -= withdraw;
	}
	void depositt()
	{
		int deposit;
		cout << "how many rupee you want to deposit?" << endl;
		cin >> deposit;
		balance += deposit;
	}
	void display()
	{
		cout << "accno : " << accno << endl
			 << "your current balance: " << balance << endl;
	}
	void shaw()
	{
		cout << "enter detail for " << custname << endl;
	}
};
int bank::count = 0;
int main()
{
	static int count;
	int n;
	int choice;
	cout << "how many customer want to do contact with bank?" << endl;
	cin >> n;
	bank b[n];
	for (int i = 0; i < n; i++)
	{

		b[i].shaw();
		cout << "enter 1 for withdraw , enter 2 for deposit , enter 3 for display , enter 4 for exit" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			b[i].withdraww();
			break;
		case 2:
			b[i].depositt();
			break;
		case 3:
			b[i].display();
			break;
		case 4:
			break;

			//default:
			//	cout << "enter correct choice." << endl;
			//	break;
			if (choice == 5)
			{
				return 0;
			}
		}
	}
	return 0;
}
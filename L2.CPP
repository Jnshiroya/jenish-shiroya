#include<iostream>
using namespace std;
class bank{
	char name[50];
	char acc_no[20];
	public:
		void set()
		{
			cout<<"enter name and account number:"<<endl;
			cin>>name;
			cin>>acc_no;
		}
		void display()
		{
			cout<<"account no:"<<acc_no<<endl<<"name:"<<name<<endl;
		}
};
class saving:public bank{
	float balance;
	public:
		void input()
		{
			cout<<"enter balance:"<<endl;
			cin>>balance;
		}
		void show()
		{
			cout<<"your current balance:"<<balance<<endl;
		}
		void deposit()
		{
			int depositt;
			cout<<"how many rupees you want to deposit"<<endl;
			cin>>depositt;
			balance+=depositt;
		}
		void withdraw()
		{
			int withdraww;
			cout<<"how many rupees you want to withdraw"<<endl;
			cin>>withdraww;
			if(balance<withdraww)
			cout<<"not sufficient balance"<<endl;
			else
			balance-=withdraww;
		}		
};
int main()
{
	saving s;
	s.set();
	s.input();
	s.deposit();
	s.withdraw();
	s.display();
	s.show();
    return 0;
}
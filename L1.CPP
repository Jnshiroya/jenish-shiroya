#include<iostream>
using namespace std;
class time{
	int hour,minute,second;
	public:
		time(){
			hour=0;minute=0;second=0;
		};
		time(int h,int m,int s)
		{
			hour=h;minute=m;second=s;
		}
		void display()
		{
			cout<<"hours:"<<hour<<endl<<"minute:"<<minute<<endl<<"second:"<<second<<endl;
		}
		friend time operator +(time ,time );
		friend time operator ++(time &);
		friend time operator ++(time &,int);
		friend time operator +(int,time);	
};
time operator +(time t1,time t2)
{
	time t;
	t.second=(t1.second+t2.second)%60;
	t.minute=((t1.minute+t2.minute)+(t1.second+t2.second)/60)%60;
	t.hour=(t1.hour+t2.hour)+((t1.minute+t2.minute)+(t1.second+t2.second)/60)/60;
	return t;
}
time operator ++(time &t)
{
	time T;
	T.hour=++t.hour;
	T.minute=++t.minute;
	T.second=++t.second;
	return T;
}
time operator ++(time &t,int dummy)
{
	time T;
	T.hour=t.hour++;
	T.minute=t.minute++;
	T.second=t.second++;
	return T;
}
time operator +(int i,time t)
{
	time temp;
	temp.second=(t.second+i)%60;
	temp.minute=((t.minute+i)+(t.second+i)/60)%60;
	temp.hour=((t.hour+i)+((t.minute+i)+(t.second+i)/60)/60)%60;
	return temp;	
}
int main()
{
	time T1(7,57,15),T2(1,25,36);
	cout<<"first time:"<<endl;
	T1.display();
	cout<<"second time:"<<endl;
	T2.display();
	cout<<"addition of time:"<<endl;
	time T3=T1+T2;
	T3.display();
	time T4=2+T3;
	cout<<"addition of constant to time"<<endl;
	T4.display();
	cout<<"post-increment in time:"<<endl;
	time T5=T2++;
	T5.display();
	cout<<"pre-increment in time:"<<endl;
	time T6=++T2;
	T6.display();
}

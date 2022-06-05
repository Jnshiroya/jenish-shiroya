#include<iostream>
#include<string.h>
using namespace std;
class stringg{
	char *p,*p1,*p2,*q;
	int l,l1,l2;
	public:
		stringg(char *s,char *s1,char *s2)
		{
			l=strlen(s);
			p=new char[l+1];
			strcpy(p,s);
			
			l2=strlen(s2);
			p2=new char[l2+1];
			strcpy(p2,s2);
			l1=strlen(s1);
			p1=new char[l1+1];
			strcpy(p1,s1);
			q=new char[100];
		}
		int occurance_check()
		{
			int count=0,flag=1,k;
			for(int i=0;i<l+1-l1;i++)
			{flag=1;
				for(int j=i,k=0;j<i+l1;j++,k++)
				{
					if(p[j]==p1[k])
					continue;
					else
					{
						flag=0;break;
					}	
				}
				if(flag)
				{
					count++;
					q[count]=i;	
				}
			}
			return count;
		}
		void check(int count)
		{
			string s="";
			for(int i=0;i<l;i++)
			{
				s=s+p[i];
			}
			cout<<s<<endl;
			string s1="";
			for(int i=0;i<l1;i++)
			{
				s1=s1+p1[i];
			}
			string s2="";
			for(int i=0;i<l2;i++)
			{
				s2=s2+p2[i];
			}
		    for(int i=0;i<count;i++)
		    {
		    	s.replace(q[i+1],l1,s2);
			}
			cout<<s.replace(q[count],l1,s2)<<endl;	
		}
		string display()
		{
			return p1;
		}
		string display2()
		{
			return p;
		}	
};
int main()
{
	int r;
	string p,q;
	stringg s("I LOVE YOU,I love you,LOVE","LOVE","HATE");
	p=s.display();
	q=s.display2();
	cout<<"no. of times "<<p<<" is repeated in statement '"<<q<<"':-"<<s.occurance_check()<<endl;
	r=s.occurance_check();
	s.check(r);	
}
#include<iostream>
using namespace std;
class base
{
  public:
   int i;
    base(int x){i=x;}
    virtual  void func()
   {
     cout<<"base version\n";
     cout<<i<<endl;}
  };

class derived1:public base
{
  public:
   derived1(int x): base(x){}
   void func()
    {
    cout<<" derived 1 version\n";
   cout<<i*i<<endl;
  }
};
int main()
   {
    
    base *p;
    derived1 ob(10);
    p=&ob;
    p->func();
	return 0;
}



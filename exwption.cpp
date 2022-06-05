#include <iostream>
using namespace std;
  void test(int x) throw(int,double,char)
  {
    try
    {
    if(x==0) throw 'x';
    else if (x==1) throw x;
    else throw 1.0;
    cout<<"end of function\n";
    }
       catch(...)
    {
      cout<<"caught inside function\n";
}
    }
    int main()
    {
      try
      {
      cout<<" testing\n";
       test(0);
       }
       catch(char c)
       {
       cout<<"caught char exception\n";
       }
       catch(int m)
       {
         cout<<"caught integer\n";
         }
       cout<<"end of main\n";
       return 0;
       }
     



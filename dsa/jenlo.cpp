#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
class strtype
{
  char *p;
  int len;

public:

strtype(int n)
{
  len=n;
  p=new char[len];

}
friend ostream & operator<<(ostream &stream, strtype &ob);
friend istream & operator>>(istream &stream,strtype &ob);
};
ostream & operator<<(ostream &s,strtype &ob)
  {
    s<<ob.p;
    return s;

  }
 istream & operator>>(istream &s,strtype &ob)
  {
   cout<<"enter string\n";
    s>>ob.p;
    return s;

  }
    int main()
{
  strtype s1(10),s2(10);
  cin>>s1>>s2;
   cout<<s1<<"   "<<s2;
return 0;}

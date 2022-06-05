//By default all objects are passed by value to a function
#include <iostream>
using namespace std;
 class complex
{
  int r;
  int i;
 public:
complex()  {cout<<"default constructor\n"; r=0;i=0;}
complex (int a,int b) { r=a; i=b;
cout<<"constructing\n";}
  complex add_complex(complex c);  //void add_complex(complex, complex);
void display(){ cout<<r<<""<<i<<endl;}
~complex(){cout<<"destructing\n";}
};
complex complex::add_complex(complex d_c)  
{
   complex result;  
  result.r=r+d_c.r;         
  result.i=i+d_c.i;                
  return result;
}
int main()
{
  complex c1(1,2),c2(3,4);
  complex c3;
   c3=c1.add_complex(c2);    //c3.add_complex(c1,c2);
  c3.display();
return 0;
}





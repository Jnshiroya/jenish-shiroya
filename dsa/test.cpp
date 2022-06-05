#include<iostream>
#include <fstream>
using namespace std;
int main()
{
  ifstream in;
  
  in.open("ifile");
  
  char ch;
  while(in.read((char*)&ch,sizeof(ch)))
  {
      out.write((char*)&ch,sizeof(ch));

  }
  //while(!in.eof())
 // {
   // ch=in.get();
   // if(!in.eof())
   // out.put(ch);
 // }


}

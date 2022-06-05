#include<iostream>
#include <fstream>
using namespace std;
int main()
{
  ifstream in;
  ofstream out;
  in.open("ifile.txt");
  out.open("ofile1.txt");
  out<<"jenish shiroya";
  char ch;
//   while(in.read((char*)&ch,sizeof(ch)))
//   {
//       out.write((char*)&ch,sizeof(ch));

//   }
  while(!in.eof())
 {
   ch=in.get();
   if(!in.eof())
   out.put(ch);
 }
return 0;

}

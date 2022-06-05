#include<bits/stdc++.h>
using namespace std;
template<class t>
class filee{
   public:
   t arr[10];
   t getarr[10];
   t sum=0,avg=0;
   int j=0;
  
//    istream in;
   filee(){
        ofstream out;
   out.open("lab1301.txt");
       cout<<"enter  10 array element :";
       for (int i = 0; i < 10; i++)
       {
           /* code */
           cin>>arr[i];
           out<<arr[i]<<endl;
       }
       out.close();
       
   }
   void setdata(){
       ifstream in;
       in.open("lab1301.txt");
       t ch;
       int i=0;
       while (!in.eof())
       {
           in>>ch;
           if(ch>0 && !in.eof()){
               getarr[j]=ch;
               j++;
               
           }
           
       }
       

   }
   void find(){
       
       for(int i=0;i<j;i++){
          sum =sum + getarr[i];
       }
       avg=sum/j;

   }
   void display(){
       for (int i = 0; i < j; i++)
       {
           cout<<getarr[i]<<" ";
       }
       cout<<"sum : "<<sum<<endl<<"average : "<<avg<<endl;
       
   }

};

int main(){
    filee<int> f1;
    f1.setdata();
    f1.find();
    f1.display();

    return 0;
}
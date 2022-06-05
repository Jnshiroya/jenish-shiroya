#include<iostream>
using namespace std;
class number{
    float num;
    friend int operator>=(number ,number );
    public:
    number(){
        num=0;
    }
    number(int a){
        num=a;
    }
    float display(){
        return num;
    }
};
int operator>=(number n1,number n2){
    if(n1.num>n2.num){
        return 0;
    }
    else if(n1.num<n2.num){
        return 1;
    }
    else{
        return 2;
    }
}
int main(){
    number n1;
    number n2(1);
    int a=(n1>=n2);
    if(a==0){
        cout<<"class n1 number :"<<n1.display()<<" greater than class n2 num :"<<n2.display()<<endl;
    }
    else if(a==1){
        cout<<"class n1 number :"<<n1.display()<<" less than class n2 num :"<<n2.display()<<endl;
    }
    else if(a==0){
        cout<<"class n1 number :"<<n1.display()<<" same as class n2 num :"<<n2.display()<<endl;
    }
    return 0;
}
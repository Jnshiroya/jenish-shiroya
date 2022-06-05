#include<iostream>
using namespace std;
template<class t>
void swapp(t &a,t &b){
    t temp=a;
    a=b;
    b=temp;
}
int main(){
    char a='e';
    char b='f';
    swapp(a,b);
    cout<<a<<b;
    return 0;
}
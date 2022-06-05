#include<iostream>
using namespace std;
void print(int num){
    cout<<"value of n"<<num;
    return;
}
int sum(int a,int b)
{
    print(a);
    print(b);
    cout<<endl;
    int add=a+b;
    return add;
}
int main(){
    int n1,n2;
    cin>>n1;
    cin>>n2;
    cout<<sum(n1,n2);

    return 0;

}
#include<iostream>
using namespace std;
int factorial(int n){
    int factorial=1;
for(int i=1;i<=n;i++){factorial =factorial*i;}
return factorial;
}
int main(){
    int n;
    cout<<"which number factorial you get:";
    cin>>n;
    int ans;
    ans=factorial(n);
    cout<<ans;
    return 0;
}
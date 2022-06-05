#include<iostream>
using namespace std;
int fact(int n){
    int factorial=1;
    for(int i=1;i<=n;i++){
        
        factorial=factorial*i;
    }
    return factorial;

}
int main(){
    int n,r;
    float ncr;
    cout<<"enter value of n";
    cin>>n;
    cout<<"enter value of r";
    cin>>r;
  /*  fact(n);
    fact(r);
    fact(n-r);*/3
    ncr=fact(n)/(fact(n-r)*fact(r));
    cout<<ncr;
    return 0;
}
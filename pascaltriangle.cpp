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
    int n, ans;
    cout<<"enetr n:";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<(i+1);j++){
ans=fact(i)/(fact(i-j)*fact(j));
cout<<" "<<ans;
        }
        cout<<endl;
    }
    return 0;
}
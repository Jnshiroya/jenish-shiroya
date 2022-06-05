#include<iostream>
#include<cmath>
using namespace std;
bool prime(int x){
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
    }
}
int main(){
    int a,b;
    
    for(int i=a;i<=b;i++){
        if(primenum(i)){
            cout<<"this is not prime"<<i;

        }
    }
    return 0;
}
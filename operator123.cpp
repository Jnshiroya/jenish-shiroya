#include<iostream>
using namespace std;
class arrtype{
    int size;
    int *p;
    public:
    arrtype(){
        size=0;
    }
    arrtype(int s1){
        size=s1;
        p=new int[size];
        for(int i=0;i<size;i++){
            cin>>p[i];
        }
    }
    int operator[](int i){
        return p[i];
    }
};
int main(){
    int s;
    cin>>s;
    arrtype ob(s);
    for(int i=0;i<s;i++){
            cout<<ob[i];
        }
    
    return 0;
}
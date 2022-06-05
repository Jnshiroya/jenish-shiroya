#include<iostream>
using namespace std;
class jenish{
    int x,y;
    public:
    jenish(int a,int b=10){
        x=a;
        y=b;

    }
    jenish(int a){
        x=a;
        y=0;
    }
    void display(){
        cout<<"value of xand y"<<x<<" , "<<y<<endl;
    }
};
int main(){
    jenish j(5);
    j.display();
    return 0;
}
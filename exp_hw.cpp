// 1. WAP to find the roots of quadratic equation ax2+bx+c . Raise exception and handle if roots are complex

#include<iostream>
#include<cmath>
using namespace std;
class root{
    float a,b,c;
    float x;
    int s;
    public:
    root(){
        cout<<"enter constant value :";
        cin>>a>>b>>c;
        cout<<"enter x value : ";
        cin>>x;
    }
    void display(){
        try{
            if(a*x*x+b*x+c <0){
                throw a*x*x+b*x+c;
            }
            else{
               s=sqrt(a*x*x+b*x+c);
               cout<<"your quardic equation root is "<< s<<endl;

            }
        }
        catch(float f){
            cout<<"your bvalue is negative : "<<f<<endl;
        }
    }

};
int main(){
    root r1;
    r1.display();
    return 0;
}
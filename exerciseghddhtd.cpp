#include<iostream>
using namespace std;
class simplecalculater{
    protected:
    int a,b;
    int sum;
    int neg;
    int mul;
    public:
    void setvalue1(int x, int y){
        a=x;
        b=y;

    }
    void addition(){
        sum=a+b;
    }
    void substraction(){
        neg=a-b;
    }
    void multiplicatin(){
        mul=a*b;
    }
};
class scientificcalc{
    protected:
    int l,m;
    
    int factorial=1;
    int powerproduct;
        
    public:
    void setvalue2(int r,int s){
        l=r;
        m=s;
    }
    void factorialnum(){
        for(int i=1;i<=l;i++){
            factorial=factorial*i;
        }
    }
    void powerofx(){
        powerproduct=l;
        for(int i=0;i<m;i++){
            powerproduct = powerproduct*l;

        }
    }


};
class calc : public  simplecalculater,public scientificcalc{
    public:
    void display(){
        cout<<"sum:"<<sum<<endl;
        cout<<"abbstraction:"<<neg<<endl;
        cout<<"multiplication:"<<mul<<endl;
        cout<<"factorial:"<<factorial<<endl;
        cout<<"powerofx:"<<powerproduct<<endl;
    }
};
int main(){
    int p,q,r,s;
    cin>>p>>q>>r>>s;
    calc j;
    j.setvalue1(p,q);
    j.setvalue2(r,s);
    j.addition();
    j.substraction();
    j.multiplicatin();
    j.factorialnum();
    j.powerofx();
    j.display();

    return 0;
}
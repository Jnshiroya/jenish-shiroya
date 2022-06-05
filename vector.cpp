#include<iostream>
using namespace std;
class vector{
    int a,b,c;
    friend vector sumofvector(vector v1,vector v2);
    public:
    void intialization(int d,int e,int f){
        a=d;
        b=e;
        c=f;

    }
    void display(){
        cout<<a<<"i+"<<b<<"j+"<<c<<"k"<<endl;
    }

};
vector sumofvector(vector v1,vector v2){
    vector v3;
    v3.intialization(v1.a+v2.a,v1.b+v2.b,v1.c+v2.c);
    return v3;
}
int main(){
    vector v1,v2,v3;
    v1.intialization(1,2,3);
    v1.display();
    v2.intialization(4,5,6);
    v2.display();
    v3=sumofvector(v1,v2);
    v3.display();

    return 0;
}
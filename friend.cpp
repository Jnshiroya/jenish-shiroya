#include<iostream>
using namespace std;
class c2;
class c1{
    int val1;
    friend void swap(c1 &jen,c2 &jay);
    public:
    void setdata(){
        cin>>val1;
    }
    void display(){
        cout<<"val 1 value:"<<val1<<endl;
    }
};
class c2{
    int val2;
    friend void swap(c1 &jen,c2 &jay);
    public:
    void setdata(){
        cin>>val2;
    }
    void display(){
        cout<<"val 1 value:"<<val2<<endl;
    }
};
void swap(c1 &jen,c2 &jay){
    int temp=jen.val1;
    jen.val1=jay.val2;
    jay.val2=temp;
}
int main(){
    c1 a;
    c2 b;
    a.setdata();
    a.display();
    b.setdata();
    b.display();
    swap(a,b);
    cout<<"after swap:"<<endl;
    a.display();
    b.display();
    return 0;
}
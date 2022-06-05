#include<iostream>
using namespace std;
class bank{
    int accountno;
    string name;
    int balance;
    int withdraw;
    int deposit;
    public:
    void set(){
        cout<<"enter account number:";
        cin>>accountno;
        cout<<endl<<"enter name:";
        cin>>name;
        cout<<endl<<"enter current balance:";
        cin>>balance;
    }
    void withdrawamount(){
        cout<<"how many amount you are withdraw:";
        cin>>withdraw;
        if(withdraw>balance){
            cout<<"not sufficient balance";
        }
        else{
            balance=balance-withdraw;
        }

    }
    void depositamount(){
        cout<<"how many amount you are deposit:";
        cin>>deposit;
        balance=balance+deposit;


    }
    void display(){
        cout<<"accont no:"<<accountno<<endl<<"account persone name:"<<name<<endl<<"current available balance:"<<balance;
    }
};
int main (){
    bank b[5];
    for(int i=0;i<5;i++){
    b[i].set();
    b[i].withdrawamount();
    b[i].depositamount();
    b[i].display();

    }

}
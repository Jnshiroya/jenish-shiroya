#include<iostream>
using namespace std;
class time{
    int hour;
    int min;
    int sec;
    friend time operator+(time ,time );
    friend time operator+(int ,time );
    public:
    time(){
        hour=0;
        min=0;
        sec=0;
        // cout<<"enter time";
        // cin>>hour>>min>>second;
    }
    time(int a,int b=0,int c=0){
        hour=a;
        min=b;
        sec=c;
    }
    void displaytime(){
        cout<<"time is "<<hour<<":"<<min<<":"<<sec<<endl;
    }

};
time operator+(time t1,time t2){
    time t3;
     t3.hour = t1.hour + t2.hour;
        t3.min = t1.min + t2.min;
        t3.sec = t1.sec + t2.sec;
    
        if ((t3.min / 60) >= 1)
        {
            t3.hour = t3.hour + (t3.min / 60);
            t3.min = t3.min % 60;
        }
        if ((t3.sec / 60) >= 1)
        {
            t3.min = t3.min + (t3.sec / 60);
            t3.sec = t3.sec % 60;
        }
        return t3;
}
time operator+(int h,time t2){
    time t4;
     t4.hour = h + t2.hour;
        t4.min =  t2.min;
        t4.sec =  t2.sec;
        return t4;
}

int main(){
    time t1(10,30,30);
    time t2(5,30,35);
    time t3;
    t3=t1+t2;
    t3.displaytime();
    time t4;
    t4=2+t3;
    t4.displaytime();
    return 0;
}
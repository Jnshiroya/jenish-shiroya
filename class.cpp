#include<iostream>
#include<string.h>
using namespace std;
class student{
    char *name;
    int id;
    float spi;
    public:
    void set_detail( char *n,int i, float s){
        name = new char[strlen(n)+1];
        id=i;
        spi = s;
    
        strcpy(name,n);
    }
    void get_detail(){
        cout<<"name of student ="<<name<<endl;
        cout<<"id of student ="<<id<<endl;
        cout<<"spi of student ="<<spi<<endl;
    }
};
int main(){
    int n;
    cin>>n;
    char *ch;
    int id;
    float spi;
    student *ptr = new student[n];
    for(int i=0;i<n;i++){
        ch=new char[10];
        cin>>ch;
    
        cin>>id>>spi;
        (ptr+i)->set_detail(ch,id,spi);
        (ptr+i)->get_detail();
        

    }


    return 0;
}
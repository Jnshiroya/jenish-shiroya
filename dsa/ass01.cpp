/*Delcare a class called student having char *name, char * id_no, rank and SPI(semester performance index) as data members.
 Define following functions
Constructor(s)
Overload operator = to support as s1=s2, where s1 and s2 are objects of class student
Overload operator == to compare ranks of two student objects using a friend function support syntax as s1==s2.
Define main to illustrate use of above functions.*/
#include<iostream>
#include<string.h>
using namespace std;
class student{
    char *name;
    char *id;
    int rank;
    float SPI;
    public:
    student(){
        name=new char[20];
        id=new char[20];
    }
    student(char *s,char *i,int r,float SP)
    {
        name=new char[20];
        id=new char[10];
        strcpy(name,s);
         strcpy(id,i);
         rank=r;
         SPI=SP;
    } 
    student(const student& s) 
    {
        cout<<"copy constructor"<<endl;
        name=new char[20];
        id=new char[20];
        strcpy(name,s.name);
        strcpy(id,s.id);
        rank=s.rank;
        SPI=s.SPI;
    }
    void display(){
        cout<<"name of student: "<<name<<endl
            <<"ID :"<<id<<endl
            <<"rank :"<<rank<<endl
            <<"SPI :"<<SPI<<endl;
    }
    
    student operator =(student s){
        cout<<"opertaor = is called"<<endl;
       rank=s.rank;
        SPI=s.SPI;
        name=s.name;
        id=s.name;
        return *this;
    }
    friend bool operator ==(student,student);
    ~student()
    {
     cout<<"destructor"<<endl;
     delete name;
     delete id;
    }
    
};
bool operator ==(student s1,student s2){
    cout<<"operator == is called"<<endl;
        if(s1.rank==s2.rank)
        {
              return 1;
        }
        return 0;
    }

int main()
{
    student s1("parthiv","20cp080",1,8);
    student s2=s1;
    s2.display();
    if(s1==s2)
    {
        cout<<"rank of students is same"<<endl;
    }
    else
    cout<<"rank of student is not same"<<endl;
    return 0;
}
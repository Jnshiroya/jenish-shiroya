#include<iostream>
#include<string.h>
using namespace std;
class staff{
    protected:
    char  name[10];
    public:
        staff(){
            cout<<"enter your name"<<endl;
            cin>>name;
        }
        staff(char *nm){
            name=nm;
        }
        virtual void display(){
            cout<<"your staff member name is : "<<name;
        }

};
class teacher : public staff{
  int nos;
  char subnm[nos][10];
  int nop;
  public:
      teacher(){
      }
      teacher(char *tn,int no): staff(tn){
          nos=no
          cout<<name<<" taken subject  name enter : ";
          for(int i=0; i<nos; i++ ){
            cout<<"enter "<< i<<" subject name :";
            cin>>subnm[nos];
          }
          cout<<"enter no of publication : ";
          cin>>nop;
      }
          void dispaly(){
              cout<< "staff name : "<<name;
              for(int i=0; i<nos; i++ ){
            cout<< i<<" subject name is :"<<subnm;

          }
          cout<<"no of publication is : "<<nop;
          }

};
class officer : public staff{
    char grade;
public:
    officer(){

    }
    officer(char gd,char *on):staff(on){
        grade=gd;
    }
    void display(){
        cout<<"officer name is : "<<name<<" and grade is "<<grade;
    }
};
class typiest : public staff{
    protected:
    int typsp;
    public:
        typiest(int sp,char *tyn):staff(tyn){

            typsp=sp;

        }
        virtual void display(){
        cout<<"typist name is : "<<name<<" and speed  is "<<grade;
    }

};
class regular : public typiest{
protected:
    int salary;
public:
    regular(int sal,int spd,char *tyn):typiest(spd,tyn){
        salary=sal;
    }
    void display(){
         cout<<"typist name is : "<<name<<" and speed  is "<<typsp<<" salary is :"<<salary;

    }

};
using namespace std;
int main(){
    regular r(20000,12,"jenish");
    r.display();

    return 0;
}

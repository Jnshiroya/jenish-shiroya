#include<iostream>
#include<string.h>
using namespace Std;
class college{
    protected:

    char *clg;
    char *typ;
    public:
    college(){
        clg=new char[20];
        typ=new char[10];
        cout << "enter clg name and type : ";
        cin>>clg>>typ;

    }
    college(char* cl,char* ty){
        clg=new char[strlen(cl)+1];
         typ=new char[strlen(ty)+1];
         strcpy(clg,cl);
         strcpy(typ,ty);


    }
    void display_clg(){
        cout<<"college name : "<<clg<<endl;

    }
};
int main(){
    return 0;
}
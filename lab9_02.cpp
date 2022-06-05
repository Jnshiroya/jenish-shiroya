#include <iostream>
#include <string.h>
using namespace std;
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
    
     void display_clg(){
        cout<<"college name : "<<clg<<endl;
        cout<<"college typr : "<<typ<<endl;

    }
};
class department:public college{
    int nooffaculty;
    char *dep_name;
    
    public:
    department(){
        dep_name=new char[10];
        cout<<"enter department name : ";
        cin>>dep_name;
        cout<<"enter no of faculty member : ";
        cin>>nooffaculty;
        
    }
    void display_dep(){
        cout<<"********************************************************************"<<endl;
        display_clg();
        cout<<"depart ment name : "<<dep_name<<endl;
        cout<<"no of faculty member :"<<nooffaculty<<endl;
        

        
    }
    
       
};
int main(){
    department d1;
    d1.display_dep();
    return 0;
}

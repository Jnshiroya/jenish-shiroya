#include<iostream>
using namespace std;
class student{
    protected:
    string name;
    int id;
    public:
    student(){
        cout<<"enter name and id of student :";
        cin>>name>>id;
    }
    void display_std(){
        
    }
};

int main(){
    return 0;
}
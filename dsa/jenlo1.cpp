#include<bits/stdc++.h>
using namespace std;

class clg{
    char name[50];
    int id;
    int sem;
    char clg_name[30];
    

public:
clg(){

}

    
    friend ostream & operator<<(ostream &stream, clg &ob);
    friend istream & operator>>(istream &stream, clg &ob);
};
istream & operator>>(istream &s, clg &ob)
{
        cout<<"Enter name,id, sem, clg_name"<<endl;

    s>>ob.name>>ob.id>>ob.sem>>ob.clg_name;
    return s;
}
ostream & operator<<(ostream &s, clg &ob)
{
    s<<ob.name<<endl<<ob.id<<endl<<ob.sem<<endl<<ob.clg_name<<endl;
    return s;

}
int main(){
    clg c1;
    clg c2;
    cin>>c1>>c2;
    cout<<c1<<c2;
    return 0;
}
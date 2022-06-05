#include<iostream>
#include<string>
using namespace std;
class convertuppercase{
    string b;
    string c;
    public:
    convertuppercase(string a){
        b=a;
        for(int i=0;i<b.length();i++){
            if(b[i]>='a' && b[i]<='z'){
                b[i]=b[i]-32;
            }
        }

    }
    void onenumtobignum(string z){
        c=z;
        int max;
        for(int i=0;i<c.length();i++){
            for(int j=0;j<c.length();j++){
                if(j>i && c[j]>c[i]){
                      max=c[i];
                      c[i]=c[j];
                      c[j]=max;
                }
            }

        }
    }
    void display(){
        for(int i=0;i<b.length();i++){
            cout<<b[i];
        }
        
            cout<<c;
        
    }

};

int main(){
    string s;
    string sa;
    getline(cin,s);
        getline(cin,sa);

     convertuppercase s1(s);
     s1.onenumtobignum(sa);
     s1.display();
    return 0;
}
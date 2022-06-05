#include<iostream>
using namespace std;
class student{
    protected:
    int roll_no;
    public:
    void studentrollnumber(int a){
        roll_no=a;
    }
    void getrollno(){
        cout<<"studendt roll no is"<<roll_no;
    }
};
class marks : public student{
    int maths,phy,chem;
    public:
    void setmarks(int m,int p,int c){
        maths=m;
        phy=p;
        chem=c;
    }
    int retunmarksofmaths(){
        return maths;
    }
    int retunmarksofphysics(){
        return phy;
    }
    int retunmarksofchemistry(){
        return chem;
    }
};
class studentresult : private marks{
    float percentage ;
    public:
    float getpercentage(){
        percentage=(retunmarksofmaths()+retunmarksofphysics()+retunmarksofchemistry())/3;
        return percentage;

    }

}; 
int main(){
    int n;
    cout<<"how many student details you enter get back of student percentage:";
    cin>>n;
    int m[n],p[n],c[n];
    int rn[n];
    float pr[n];
    int jen[n];
    studentresult jen[100];
    for(int i=0;i<n;i++){
        cout<<"enter roll number:";
        cin>>rn[i];

        cout<<"enter maths marks:";
        cin>>m[i];
        cout<<"enter  physics marks:";
        cin>>p[i];
        cout<<"enter chem marks:";
        cin>>c[i];
        jen[i].studentrollnumber(r)
        pr[i]=jen[i].getpercentage();
        cout<<"roll number"<<rn[i]<<" percentage is"<<pr[i];
        
    }
    return 0;
}

#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
template <class t1,class t2>
void display(t1 &a1,t2 &a2){
       for (int i = 0; i < 3; i++)
       {
           /* code */
           cout<<"person name and age : "<<a1[i]<<" "<<a2[i]<<endl;
       }
       
}
int main(){
    int n;
    string na;
    int ag;
    vector<string> name;
    vector<int> age;
    cout<<"how many person enter detail :";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>na;
        cin>>ag;
        name.push_back(na);
        age.push_back(ag);
        
    }
    vector<int> :: iterator iter=age.begin();
    age.insert(iter+1,2,40);

    display(name,age);
    

    return 0;
}
#include<iostream>
#include<string.h>
using namespace std;
int count=0;
class string1{
    char *p1;
    int length;
    int start[],end[];
    

    public:
    string1(){}
    string1(char *s1){
        length=strlen(s1);
        p1 = new char[length+1];
        strcpy(p1,s1);
        
    }
    int findocc(string1 &str1,string1 &str2){
        
        for(int i=0,j=0;i<str1.length;i++){
            if(str1.p1[i]==str2.p1[j]){
                for(int k=1;k<str2.length;k++){
                    if(str1.p1[i+k]==str2.p1[j+k]){
                        if(k==str2.length-1){
                            start[count]=i;
                            end[count]=i+str2.length-1;
                            count++;
                            i=(i+k);
                            
                        }

                    }
                    
                    
                }
            }
            
        }
        return count;
    }
    void replace(string1 &str1,string1 &str2){
        
        for(int i=0,j=0;i<str1.length;i++){
            if(str1.p1[i]==str2.p1[j]){
                for(int k=1;k<str2.length;k++){
                    if(str1.p1[i+k]==str2.p1[j+k]){
                        if(k==str2.length-1){
                            for(int j=0;j<k;j++){
                                if(==str2.length){
                                str1.p1[i+j]=str2.p1[j]
                                }
                            }
                            
                        }

                    }
                    
                    
                }
            }
            
        }
        
    }
    ~string1(){
        delete[] p1;
    }

};

int main(){
    int ans;
    string1 j("jenish jenish jenish");
    string1 j1("jenish");
    string1 j2;
    ans=j2.findocc(j,j1);
    cout<<"no:"<< ans;
    return 0;
}
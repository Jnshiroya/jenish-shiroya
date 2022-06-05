#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
//find word in file function count number of times this word in file.
 int findwordinfile(char *findword){
    ifstream file("notes.txt");//resource file 
    
    int count=0;
    char *fword;
    fword=new char[strlen(findword)+1];
    strcpy(fword,findword);
    char word[50];

    
    
    while(!file.eof()){
        file>> word;
        if(!file.eof()){
            if(!strcmp(fword,word)){
            count++;
        }
    }
    }
    file.close();
    return count;
    
}
//find word word and replace with another word function
void replaceText(char replaceStr[], char replacementStr[])
    {
        ifstream filein("notes.txt");   //File to read 
        ofstream fileout("withrwplacenotes.txt"); //Temporary file 
        string strTemp;

        while (filein >> strTemp) //taking every word and comparing with replaceStr
        {
            if (strTemp == replaceStr) //if your word found then replace
            {
                strTemp = replacementStr;
            }
            strTemp += " ";
            fileout << strTemp; //output everything to fileout(temp.txt)
        }
        filein.close();
        fileout.close();
    }
int main(){
    int count;
    char findword[50];
    cout<<"enter the word which you want to find"<<endl;
    cin>>findword;
    count=findwordinfile(findword);
    cout<<"this word in your file "<<count<<" number of times."<<endl;
    char replaceword[50];
    cout<<"which word replace with find word"<<endl;
    cin>>replaceword;
    replaceText(findword,replaceword);
}
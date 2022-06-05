#include<iostream>
#include<cstring>
using namespace std;

class stack{
int *arr;
int top=-1;
int size;
public:
stack(int n){
 size=n;
arr=new int[size];
}
void push(int a){
    if(top==size-1){
        cout<<"stack overflow!!"<<endl;
    }
    else{
    arr[++top]=a;
    }
}
int pop()
{
    if(top==-1){
        cout<<"stack underflow"<<endl;
        return -469545;
    }
    return arr[top--];
}
int is_empty(){
    if(top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int top_of_stack(){
    return arr[top];
}
};
int check_operator(char ch){
    if( ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='^'){
        return 1;
    }
    else{
        return 0;
    }
}
int f( char ch){
if(ch=='+'||ch=='-'){
    return 3;
}
else if(ch=='*'||ch=='/'){
    return 5;
}
else{
    return 6;
}
}
int g( char ch){
if(ch=='+'||ch=='-'){
    return 2;
}
else if(ch=='*'||ch=='/'){
    return 4;
}
else{
    return 7;
}
}
int main()
{
   string infix;
   string postfix;
   cout<<"enter infix string"<<endl;
   cin>>infix;
   int n=infix.length();
   stack op(n);
   for(int i=0;i<n;i++){
       if(check_operator(infix[i])){
           if(op.is_empty()){
               op.push(infix[i]);
           }
           else if(f(op.top_of_stack())<g(infix[i])){
               

               op.push(infix[i]);
           }
           else{
              while(!(f(op.top_of_stack())<g(infix[i]))&&!(op.is_empty())){
                  postfix+=op.pop();
              }
               op.push(infix[i]);
               }
           }

       else{
           postfix+=infix[i];
       }
   }
   while(!op.is_empty()){
       postfix+=op.pop();
   }
   cout<<postfix<<endl;

    return 0;
}
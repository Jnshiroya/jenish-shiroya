#include <iostream>
using namespace std;
class node{
    public:
    node* next;
    int data;
    node(int da){
        data=da;
        next=NULL;
    }
};
void ins(node* &head,int x){
    node* temp=new node(x);
    temp->next=head;
    head=temp;     

}  
int main(){
    node* head=new node(1);
    ins(head,2);
    cout<<head->data;
}   
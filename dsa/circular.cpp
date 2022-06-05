#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
void display(node *head){
     node *ptr;
     ptr=head;
     do
     {
         cout<<ptr->data<<" ";
         ptr=ptr->next;
     } while (ptr != head);
     cout<<endl;
     
}
node* insertbeg(node *head,int ele){
    node *in;
    in=new node;
    in->data=ele;
    node *ptr;
     ptr=head;
     do
     {
         ptr=ptr->next;
     } while (ptr->next != head);
     in->next=ptr->next;
     ptr->next=in;
return in;

}
int main(){
    node *first;
    node *second;
    node *third;
    node *fourth;
    first = new node;
    second = new node;
    third = new node;
    fourth = new node;

    first->data = 1;
    second->data = 2;
    third->data = 3;
    fourth->data = 4;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = first;
    display(first);
    first=insertbeg(first,0);
    display(first);
    return 0;
}
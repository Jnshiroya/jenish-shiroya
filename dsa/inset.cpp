#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
void display(node *head)
{
    while ((head) != NULL)
    {
        cout << head->data << "    ";
        head = head->next;
    }
    cout<<"complete printing"<<endl;
}
node *insertionbegin(node *head, int ele)
{
    node *ptr = new node;
    ptr->data = ele;
    ptr->next = head;
    return ptr;
}
void insertionmiddel(node* head,int ele,int index){
    node* p=new node;
    node*ptr=new node;
    p=head;
    int i=0;
    while (i!=(index-1))
    {
       p=p->next;
    }
    ptr->next=p->next;
    ptr->data=ele;
    p->next=ptr;
    

}
node* deletion(node* head,int index){
    if(index==0){
        head=head->next;
        return head;
    }
    else{
        int i=0;
        node* p=new node;
        p=head;
        while (i!=(index-1))
        {
            p=p->next;
        }
        p->next = (p->next)->next;
        return head;
        
    }

}
node* deletiondata(node* head,int ele){
    if(head->data==ele){
        head=head->next;
        return head;
    }
    else{
        node* ptr=new node;
        ptr=head;
    while (((ptr->next)->data)!=ele)
    {
        ptr=ptr->next;
        

    }
    ptr->next=(ptr->next)->next;
    return head;
}
}
node* reversebyiterator(node *head){
    node* pre=NULL;
    node* cur=head;
    node* nex=new node;
    while (cur!=NULL)
    {
        nex=cur->next;
        cur->next=pre;
        pre=cur;
        cur=nex;
        
    }
    return pre;
    



}
node* reversebyrecursive(node* head){
    if(head==NULL || head->next==NULL){
        return head;

    }
    node* newhead=reversebyrecursive(head->next);
    (head->next)->next=head;
    head->next=NULL;
    return newhead;


}

int main()
{
    node *first;
    node *second;
    node *third;
    first = new node;
    second = new node;
    third = new node;
    first->data = 47;
    first->next = second;
    second->data = 48;
    second->next = third;
    third->data = 50;
    third->next = NULL;
    display(first);
    first = insertionbegin(first, 46);
    display(first);
    insertionmiddel(first,1200,1);
    display(first);
    first=deletion(first,1);
      display(first);
 first=deletiondata(first,46);
  display(first);
  first=reversebyiterator(first);
  display(first);
  first=reversebyrecursive(first);
  display(first);


  
    

    return 0;
}
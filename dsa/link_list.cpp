#include <iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
};
void display( node *js)
{
        while (js!=NULL)
        {
        cout<<js->data<<endl;
        js=(js->next);

        }
}
node* insertionbegin(node *head,int dat){
      node *ret;
      ret=new node;
      ret->next=head;
      ret->data=dat;
      return ret;

}

int main()
{
     node *first;
     node *second;
     node *third;
    first=new node;
    second=new node;
    third=new node;
    first->data = 47;
    first->next = second;
    second->data = 48;
    second->next = third;
    third->data = 50;
    third->next = NULL;
    first=insertionbegin(first,1002);

    display(first);

    return 0;
}
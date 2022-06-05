#include<iostream>
using namespace std;
class node{
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
node* reverse(node* head){
    node* pre=NULL;
    node* cur=head;
    node* next;
    while (next != NULL)
    {
        /* code */
        next=cur->next;
        cur->next=pre;
        pre=cur;
        cur=next;
    }
    return pre;
    
    
}
int main(){
    int n;
    cin>>n;
    node *ll[n];
    int val;
    for (int i = 0; i < n; i++)
    {
        /* code */
        ll[i]=new node;
    }
    
    for (int i = 0; i < n; i++)
    {
        cin>>val;
        ll[i]->data=val;
        
    }
    
    for (int i = 0; i < n; i++)
    {
        if (i==(n-1))
        {
            ll[i]->next=NULL;
        }
        else{
            ll[i]->next=ll[i+1];

        }
        
    }
    ll[0]=reverse(ll[0]);
    display(ll[0]);
    

    return 0;

}
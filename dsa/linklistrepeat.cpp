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
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
void insertmid(node *head, int pos, int ele)
{
    node *ptr = new node;
    node *in = new node;

    in->data = ele;

    ptr = head;
    int i = 1;
    while (i != (pos - 1))
    {
        /* code */
        ptr = ptr->next;
        i++;
    }
    in->next = ptr->next;
    ptr->next = in;
}
node *insertbeg(node *head, int ele)
{
    node *start;
    start = new node;
    start->data = ele;
    start->next = head;
    return start;
}
void deletionmid(node *head, int pos)
{
    node *ptr = new node;

    ptr = head;
    int i = 1;
    while (i != (pos - 1))
    {
        /* code */
        ptr = ptr->next;
        i++;
    }
    //ptr->next=delete node;
    ptr->next = (ptr->next)->next;
}

void deletionele(node *head, int ele)
{
    node *ptr = new node;

    ptr = head;

    while (1)
    {
        /* code */

        if ((ptr->next)->data == ele)
        {
            break;
        }

        ptr = ptr->next;
    }
    //ptr->next=delete node;
    ptr->next = (ptr->next)->next;
}
node *reversebyite(node *head)
{
    node *pre = NULL;
    node *cur = head;
    node *next;
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
int main()
{
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
    fourth->next = NULL;
    display(first);
    first = insertbeg(first, 0);
    display(first);
    insertmid(first, 3, 50);
    display(first);
    deletionmid(first, 3);
    display(first);
    deletionele(first, 4);
    display(first);
    first=reversebyite(first);
    display(first);

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

node * insert(node* head,int val)
{
    node *newNode = ( node *)malloc(sizeof( node));
    node *temp;
    newNode->data = val;
    newNode->next = NULL;
    if(head == NULL)
    {
        head = newNode;
        // cout << val << head << endl;
        return head;
        
    }
    temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
        // cout << val << temp << endl;
    }
    temp->next = newNode;
    // cout << val << temp << endl;
    return head;
}
void middle(node*head)
{
    if(head==NULL)
    {
        return;
    }
    node *ptr1,*ptr2;
    ptr1 = ptr2 = head;
    while(ptr2!=NULL || ptr2->next!=NULL)
    {
        ptr2 = ptr2->next->next;
        ptr1 = ptr1->next;
        cout << ptr1->data << ptr2->data <<endl;
    }
 
}
int main()
{
    node *head = (node *)malloc(sizeof(node));
    head->data = 1;
    head->next = NULL;
    insert(head,2);
    insert(head,3);
    insert(head,4);
    // insert(head,5);
    middle(head);
    

}
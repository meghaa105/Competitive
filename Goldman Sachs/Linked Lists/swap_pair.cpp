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
node * swap(node*head)
{
    if(head == NULL)
    {
        return NULL;
    }
    node*ptr1,*ptr2;
    ptr1 = ptr2 = head;
    while(ptr2 && ptr2->next)
    {
        ptr2;
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
    

}
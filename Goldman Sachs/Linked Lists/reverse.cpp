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
node *reverse(node*head)
{
    if(head==NULL)
    {
        return NULL;
    }
    node *temp,*prev,*n;
    temp = head;
    prev = NULL;
    n = NULL;
    while(temp!=NULL)
    {
        n = temp->next;
        temp->next = prev;
        prev = temp;
        temp = n;
    }
    head = prev;
    return head;
}
void print(node *head)
{
    if(head == NULL)
    {
        return;
    }
    node *temp;
    temp = head;
    while(temp!=NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

int main()
{
    // node *head = (node *)malloc(sizeof(node));
    // head->data = 1;
    // head->next = NULL;
    // insert(head,2);
    // insert(head,3);
    // insert(head,4);
    // insert(head,5);
    // cout << "The list before reversal" << endl;
    // print(head);    
    // cout << "The list after reversal" << endl;
    // head = reverse(head);
    // print(head);
    int i = 2^8^6^4;
    cout << i << endl;
    return 0;
}
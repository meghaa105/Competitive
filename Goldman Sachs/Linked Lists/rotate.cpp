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
    node *head = (node *)malloc(sizeof(node));
    head->data = 12;
    head->next = NULL;
    insert(head,26);
    // insert(head,3);
    // insert(head,4);
    // insert(head,5);
    // insert(head,6);
    // insert(head,7);
    // insert(head,8);
    cout << "The list before rotation" << endl;
    print(head);    
    cout << "The list after rotation" << endl;
    head = rotate(head,1);
    print(head);
}
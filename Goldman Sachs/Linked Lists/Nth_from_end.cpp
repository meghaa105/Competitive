#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

node * insert(node* head,int val)
{
    node *newNode = (node *)malloc(sizeof( node));
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
int size(node*head)
{
    if(head== NULL)
    {
        return 0;
    }
    node *temp;
    temp = head;
    int size = 0;
    while(temp!=NULL)
    {
        size++;
        temp = temp->next;
    }
    return size;
}

void FromEnd(node *head,int k)
{
    int s = size(head);
    s = s-k;
    if(head == NULL)
    {
        return;
    }
    if(s==0)
    {
        cout << head->data;
        return;
    }
    node *temp;
    temp = head;
    while(s-- && temp && temp->next)
    {
        temp = temp->next;
    }
    if(temp!=NULL)
    {
        cout << temp->data << endl;
    }

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
    node *head1 = (node *)malloc(sizeof(node));
    head1->data = 1;
    head1->next = NULL;
    insert(head1,2);
    insert(head1,3);
    insert(head1,4);
    insert(head1,5);
    cout << "The list before reversal" << endl;
    print(head1);   
    cout << "The list after reversal" << endl;
    FromEnd(head1,0);
}
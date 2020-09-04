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

node *loop(node*head)
{
    if(head==NULL)
    {
        return 0;
    }
    node *ptr1,*ptr2;
    ptr1 = ptr2 = head;
    int flag = 0;
    while(ptr1 && ptr2&& ptr2->next!=NULL)
    {
        ptr2 = ptr2->next->next;
        ptr1 = ptr1->next;
        if(ptr1== ptr2)
        {
            flag = 1;
            ptr1 = head;
            break;
        }
    }
    if(flag)
    {
        while(ptr1->next!=ptr2->next)
        {
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        ptr2->next = NULL;
    }
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
    cout << loop(head1)<< endl;
}
#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};
int lPalin(node * head)
{
    if(head== NULL)
    {
        return 0;
    }
    node * temp,*temp1;
    temp = temp1 = head;
    stack <int> s;
    while(temp1 && temp1->next)
    {
        s.push(temp->data);
        cout << s.top() << temp->data << endl;
        temp = temp->next;
        temp1 = temp1->next->next;
    }
    if(temp1!=NULL)
    {
        temp = temp->next;
    }
    while(s.empty()==0 && temp)
    {
        cout << s.top() << temp->data << endl;
        if(temp->data!=s.top())
        {
            return 0;
        }
        else
        {
            s.pop();
            temp = temp->next;
        }
    }
    return 1;
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
int main()
{
    node *head = (node *)malloc(sizeof(node));
    head->data = 1;
    head->next = NULL;
    insert(head,2);
    insert(head,1);
    // insert(head,4);
    // insert(head,5);
    cout << "The list before reversal" << endl;
    print(head);      
    cout << lPalin(head) << endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};
node * deleteDuplicates(node * head) 
{
    if(head == NULL)
    {
        return NULL;
    }
    node * temp,*temp2;
    temp = temp2 = head;
    while(temp && temp->next!= NULL)
    {
        temp2 = temp->next;
        while(temp2 && temp->data == temp2->data)
        {
            temp2 = temp2->next;
        }
        temp->next = temp2;
        temp = temp->next;
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

node * insert(node* head,int data)
{
    node *newNode = (node *)malloc(sizeof( node));
    node *temp;
    newNode->data = data;
    newNode->next = NULL;
    if(head == NULL)
    {
        head = newNode;
        // cout << data << head << endl;
        return head;
        
    }
    temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
        // cout << data << temp << endl;
    }
    temp->next = newNode;
    // cout << data << temp << endl;
    return head;
}
int main()
{
    node *head = (node *)malloc(sizeof(node));
    head->data = 1;
    head->next = NULL;
    insert(head,1);
    insert(head,1);
    // insert(head,4);
    // insert(head,5);
    cout << "The list before reversal" << endl;
    // print(head);      
    head = deleteDuplicates(head);
    print(head);
    return 0;
}
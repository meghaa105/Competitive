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
node *intersection(node *head1,node*head2)
{
    int size1,size2;
    size1 = size(head1);
    size2 = size(head2);
    node *temp1,*temp2;
    temp1 = head1;
    temp2 = head2;

    if(size2 >= size1)
    {
        int dif = size2-size1;
        while(dif--)
        {
            temp2 = temp2->next;
        }
        while(temp1 != temp2)
        {
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return temp1;

    }
    else
    {
        int dif = size1-size2;
        while(dif--)
        {
            temp1 = temp1->next;
        }
        while(temp1 != temp2)
        {
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return temp1;
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
    node *head2 = (node *)malloc(sizeof(node));
    head1->data = 1;
    head1->next = NULL;
    insert(head1,2);
    insert(head1,3);
    insert(head1,4);
    insert(head1,5);
    cout << "The list before reversal" << endl;
    print(head1);   
    print(head2); 
    cout << "The list after reversal" << endl;
    node *temp;
    temp = intersection(head1,head2);
    cout << temp->data << endl;
}
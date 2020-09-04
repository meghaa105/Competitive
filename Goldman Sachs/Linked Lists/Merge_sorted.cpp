#include<bits/stdc++.h>
using namespace std;

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
node *merge(node*head1,node*head2)
{
    if(!head1 && !head2)
    {
        cout<< "checkqw" << endl;
        return NULL;
    }
    if(!head1)
    {
        cout<< "checkwe" << endl;
        return head2;
    }
    if(!head2)
    {
        cout<< "checker" << endl;
        return head1;
    }

    node *temp,*temp2,*aux;
    temp = head1;
    temp2 = head2;
    while(temp && temp2)
    {
        if(temp->data == temp2->data)
        {
            aux = temp2->next;
            temp2->next = temp->next;
            temp->next = temp2;
            temp2 = aux;
            
        }
        cout<< "check" << temp->data << temp2->data << endl;
        if(temp->data >= temp2->data)
        {
            aux = temp2->next;
            temp2->next = temp;
            temp = temp2;
            temp2 = aux;
            cout<< "check 1" << temp->data << temp2->data << endl;
            
        }
        else if(temp->next && temp->data < temp2->data && temp2->data < temp->next->data)
        {
            aux = temp2->next;
            temp2->next = temp->next;
            temp->next = temp2;
            temp2 = aux;
            cout<< "check2" << temp->data << temp2->data << endl;
        }
        else
        {  
            if(temp->next==NULL && temp2)
            {
                temp->next = temp2;
                break;
            }
            temp = temp->next;
            cout<< "check3" << temp->data << temp2->data << endl;
        }
        
    }
    if(head1->data >= head2->data)
    {
        return head2;
        cout<< "check4" << temp->data << temp2->data << endl;
    }
    else
    {
        return head1;
        cout<< "check4" << temp->data << temp2->data << endl;
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
    head1->data = 3;
    head1->next = NULL;
    head2->data = 1;
    head2->next = NULL;
    insert(head1,4);
    insert(head1,8);
    insert(head1,9);
    insert(head2,2);
    insert(head2,14);
    insert(head2,15);
    cout << "The list before reversal" << endl;
    print(head1);   
    print(head2); 
    cout << "The list after reversal" << endl;
    node *temp;
    temp =  merge(head1,head2);
    print(temp);
}
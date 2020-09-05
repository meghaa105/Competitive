#include<bits/stdc++.h>
using namespace std;


struct node
{
    int data;
    node *next;
};

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
int Num(node*l1)
    {
        if(l1 == NULL)
        {
            return 0;
        }
        node*temp1,*temp2;
        temp1  = l1;
        stack <int> s;
        while(temp1)
        {
            s.push(temp1->data);
            temp1 = temp1->next;
        }
        int c = s.size();
        c = pow(10,c-1);
        cout << c << endl;
        int num = 0;
        while(!(s.empty()))
              {
                  num += s.top()*c;
                  s.pop();
                  c = c/10;
              }
        return num;
    
    }
node* addTwoNumbers(node* l1, node* l2) 
    {
        
        int sum1 = Num(l1);
        int sum2 = Num(l2);
        sum1 = sum1+sum2;
        node*temp1,*temp2;
        temp1  = l1;
        while(temp1)
        {
            temp1->data = sum1%10;
            cout << temp1->data << endl;
            sum1 = sum1/10;
            if(temp1->next==NULL && sum1!=0)
            {
                node* newNode = (node*)malloc(sizeof(node));
                newNode->next = NULL;
                newNode->data = 0;
                temp1->next = newNode;
                if(newNode)
                {
                    cout << "MEM OKAY"<< endl;
                }
            }            
            temp1 = temp1->next;
        }
        
        return l1;       
        
    }
int main()
{
    node *head1 = (node *)malloc(sizeof(node));
    node *head2 = (node *)malloc(sizeof(node));
    head1->data = 5;
    head1->next = NULL;
    head2->data = 5;
    head2->next = NULL;
    // insert(head1,4);
    // insert(head1,3);
    // insert(head2,6);
    // insert(head2,4);
    // insert(head2,15);
    cout << "The list before reversal" << endl;
    print(head1);   
    print(head2); 
    cout << "The list after reversal" << endl;
    node *temp;
    temp = addTwoNumbers(head1,head2);
    cout << "The Final Answer" << endl;
    print(temp);
}
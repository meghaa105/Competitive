#include<bits/stdc++.h>
using namespace std;

bool isSubTree(Node * head1,Node* head2)
{
    if(head1 == NULL && head2 == NULL)
    {
        return true;
    }
    if(head1 == NULL || head2 == NULL)
    {
        return false;
    }
    if(head1->data == head2->data)
    {
        if(isSubTree(head1->left,head2->left)&&isSubTree(head1->right,head2->right))
        {
            return true;
        }  
    }
    if(isSubTree(head1->left,head2))
    {
        return true;
    }
    if(isSubTree(head1->right,head2))
    {
        return true;
    }



}
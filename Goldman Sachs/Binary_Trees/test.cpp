#include<bits/stdc++.h>
using namespace std;

struct Binary_Tree
{
    int data;
    struct Binary_Tree *left;
    struct Binary_Tree *right;
};

void Preorder(struct Binary_Tree *root)
{
    if(root)
    {
        cout << root->data << endl;
        Preorder(root->left);
        Preorder(root->right);
    }
}
void Inorder(struct Binary_Tree *root)
{
    if(root)
    {        
        Preorder(root->left);
        cout << root->data << endl;
        Preorder(root->right);
    }
}
void Postorder(struct Binary_Tree *root)
{
    if(root)
    {
        Preorder(root->left);
        Preorder(root->right);
        cout << root->data << endl;
    }
}
void LevelOrder(struct Binary_Tree *root)
{
    struct Binary_Tree *temp;
    queue< struct Binary_Tree *> q;
    if(root == NULL)
    {
        return;
    }
    q.push(root);
    while(!(q.empty()))
    {
        temp = q.front();
        q.pop();
        cout << temp->data;
        if(temp->left)
        {
            q.push(temp->left);
        }
        if(temp->right)
        {
            q.push(temp->right);
        }
    }
}
int MaxElement(struct Binary_Tree *root)
{
    int max = INT_MIN;
    int root_val,left,right;
    if(root == NULL)
    {
        return;
    }
    root_val = root->data;
    left = MaxElement(root->left);
    right = MaxElement(root->right);
    if(left > right)
    {
        max = left;
    }
    else
    {
        max = right;
    }
    if(max < root_val)
    {
        max = root_val;
    }
    return max;    
}
bool Search()

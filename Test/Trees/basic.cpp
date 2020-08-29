#include<bits/stdc++.h>
using namespace std;

struct Tree
{
    int data;
    struct Tree *left;
    struct Tree *right;
};

void Preorder(struct Tree *head)
{
    if(root)
    {
        cout << head->data << endl;
        Preorder(head->left);
        Preorder(head->right);
    }
}
void Postorder(struct Tree *head)
{
    if(root)
    {
        Postorder(head->left);
        Postorder(head->right);
        cout << head->data << endl;
    }
}
void Inorder(struct Tree *head)
{
    if(root)
    {
        Inorder(head->left);
        cout << head->data << endl;
        Inorder(head->right);
    }
}
void LevelOrder(struct Tree *head)
{
    if(head == NULL)
        return;
    queue<Tree *> q;
    q.push(head);
    while(!q.empty)
    {
        Tree *temp = q.front();
        cout << temp->data << " ";
        q.pop();

        if(temp->left!=NULL)
        {
            q.push(temp->left);
        }
        if(temp->right!=NULL)
        {
            q.push(temp->right);
        }
    }
}

int main()
{
    struct Tree *head = (struct Tree *)malloc(sizeof(struct Tree));
    head->left = head->right = NULL;
    head->data = 5;

}
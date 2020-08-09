#include<stdio.h>
#include<limits.h>
struct BinaryTreeNode
{
    int data;
    struct BinaryTreeNode *right;
    struct BinaryTreeNode *left;
};

void preorder(struct BinaryTreeNode *root)
{
    while(root)
    {
        printf("%d",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct BinaryTreeNode *root)
{
    while(root)
    {
        preorder(root->left);
        preorder(root->right);
        printf("%d",root->data);
    }
}
void inorder(struct BinaryTreeNode *root)
{
    while(root)
    {
        preorder(root->left);
        printf("%d",root->data);
        preorder(root->right);
    }
}

int Max(struct BinaryTreeNode *root)
{
    int root_val,left,right,max = INT_MIN;
    if(root != NULL)
    {
        root_val = root->data;
        left = Max(root->left);
        right = Max(root->right);
        if(left < right)
        {
            max = right;
        }
        else
        {
            max = left;
        }
        if(root_val > max)
        {
            max = root_val;
        }        
    }
    return max;    
}

// Returns 1 if the number is found else returns 0
int Find(struct BinaryTreeNode *root, int num)
{   
    int temp;
    if(root == NULL)
    {
        return 0;
    }
    else
    {
        if(root->data == num)
        {
            return 1;
        }
        else
        {
            Find(root->left,num);
            if(temp!=0)
            {
                return temp;
            }
            else
            {
                Find(root->right,num);
            }          
        }
    }
    // incase it is not 
    return 0;
}
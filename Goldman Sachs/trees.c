#include<stdio.h>
#include<stdlib.h>
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
    if(!root)
    {
        return 0;
    }
    else
    {
        if((root->data) == num)
        {
            return 1;
        }
        else
        {
            Find(root->left,num);
            if(temp!=0)
            {
                return temp ;
            }
            else
            {
                Find(root->right,num);
            }          
        }
    }
    // incase it is not present anywhere on the tree
    return 0;
}
void insert(struct BinaryTreeNode *root,int num)
{       
    struct BinaryTreeNode *newNode;
    newNode =  (struct BinaryTreeNode *)malloc(sizeof(struct BinaryTreeNode));
    newNode->left = newNode->right = NULL;
    newNode->data = num;
    if(!newNode)
    {
        printf("Memory not allocated \n");
    }
    if(!root)
    {   
        printf("Check\n");
        root = newNode;   
        printf("%d bleh %d \n",root->data);   
        return;
    }
    else
    {
        while(!root)
        {
            if(!root->left)
            {
                printf("Check1 \n");
                root->left = newNode;
                printf("%d bleh %d",root->data,root->data); 
                return;
            }
            else
            {
                printf("Check2 \n");
                root = root->left;
                printf("%d bleh %d",root->data,root->data); 
            }            
        }
    }
}
int count = 0;
int Size (struct BinaryTreeNode *root)
{
    if(root == NULL)
    {
        return 0;
    }
    else
    {   
        while(root)
        {
            count++;
            count+= Size(root->left);
            count += Size(root->right);
        }
    }
    return count;
    
}
void main()
{
    struct BinaryTreeNode *root;
    root = (struct BinaryTreeNode *)malloc(sizeof(struct BinaryTreeNode));
    root->data = 5;
    struct BinaryTreeNode *newNode;
    newNode = (struct BinaryTreeNode *)malloc(sizeof(struct BinaryTreeNode));
    root->left = newNode;
    newNode->data = 8;
    newNode->left = newNode->right = NULL;
    root->right = NULL;
    if(!root)
    {
        printf("Hello\n");
    }
    while(!root)
    {
        printf("%d",root->data);
        root = root->left;
    }


}
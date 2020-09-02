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
        Inorder(root->left);
        cout << root->data << endl;
        Inorder(root->right);
    }
}
void Postorder(struct Binary_Tree *root)
{
    if(root)
    {
        Postorder(root->left);
        Postorder(root->right);
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
        cout << temp->data <<" "<<temp <<endl;
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
        return 0;
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
bool Search(struct Binary_Tree *root,int data)
{
    if(root == NULL)
    {
        return false;
    }
    if(root->data == data)
    {
        return true;
    }
    Search(root->left,data);
    Search(root->right,data);
}
void Insert(struct Binary_Tree *root,int data)
{
    struct Binary_Tree *newNode = (struct Binary_Tree *)malloc(sizeof(struct Binary_Tree));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    if(root == NULL)
    {
        root = newNode;
        return;
    }
    struct Binary_Tree *temp;
    queue< struct Binary_Tree *> q;
    q.push(root);
    while(!(q.empty()))
    {
        temp = q.front();
        q.pop();
        if(temp->left)
        {
            q.push(temp->left);
        }
        else
        {
            temp->left = newNode;
            return;
        }
        
        if(temp->right)
        {
            q.push(temp->right);
        }
        else
        {
            temp->right = newNode;
            return;
        }
    }
   
}
int count_nodes = 0;
int Size(struct Binary_Tree *root)
{
    if(root == NULL)
    {
        return 0;
    }
    count_nodes++;
    Size(root->left);
    Size(root->right);
    return count_nodes;
}
void ReverseLevelOrder(struct Binary_Tree *root)
{
    struct Binary_Tree *temp;
    queue< struct Binary_Tree *> q;
    stack<int> s;
    if(root == NULL)
    {
        return;
    }
    q.push(root);
    while(!(q.empty()))
    {
        temp = q.front();
        q.pop();
        s.push(temp->data);
        if(temp->left)
        {
            q.push(temp->left);
        }
        if(temp->right)
        {
            q.push(temp->right);
        }
    }
    while(!(s.empty()))
    {
        cout << s.top() << endl;
        s.pop();
    }
}
struct Binary_Tree * SearchNodeAddress(struct Binary_Tree *root,int data)
{
    struct Binary_Tree *temp;
    queue< struct Binary_Tree *> q;
    if(root == NULL)
    {
        return NULL;
    }
    q.push(root);
    while(!(q.empty()))
    {
        temp = q.front();
        q.pop();
        if(temp->data == data)
        {
            return temp;
        }
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
void Delete(struct Binary_Tree *root,int data)
{
    struct Binary_Tree *temp1;
    temp1= SearchNodeAddress(root,data);
    // cout << "Deletion Complete 2 "<< temp1 << endl;
    struct Binary_Tree *temp;
    queue< struct Binary_Tree *> q;
    // cout << "Deletion Complete 1 " << endl;
    if(root == NULL)
    {
        return;
    }
    q.push(root);
    while(!(q.empty()))
    {
        temp = q.front();
        q.pop();
        // cout << "Deletion Complete 2 "<< temp << endl;
        if(temp->left)
        {
            q.push(temp->left);
        }
        if(temp->right)
        {
            q.push(temp->right);
        }
    }
    // cout << "Deletion Complete 2 "<< temp->data << endl;
    temp1->data = temp->data;
    delete(temp);

    // cout << "Deletion Complete" << endl;
}
int sum = 0;
int Sum(struct Binary_Tree *root)
{
    
    if(root == NULL)
    {
        return 0;
    }
    else
    {
        sum+=root->data;
    }
    Sum(root->left);
    Sum(root->right);
    return sum;    
}
int Height(struct Binary_Tree *root)
{
    int left,right;
    if(root == NULL)
    {
        return 0;
    }
    left = Height(root->left);
    right = Height(root->right);
    if(left>right)
    {
        return (left + 1);
    }
    else
    {
        return(right + 1);
    }    
}

int main()
{
    struct Binary_Tree *root = (struct Binary_Tree *)malloc(sizeof(struct Binary_Tree));
    root->data = 5;
    root->left= root->right= NULL;
    Insert(root,13);
    Insert(root,1);
    Insert(root,65);
    Insert(root,77);
    cout<< "Inorder Traversal" << endl;
    Inorder(root);
    cout<< "Level Order Traversal" << endl;
    LevelOrder(root);
    cout<< "Searching an element" << endl;
    cout << Search(root,41) <<endl;
    cout<< "Max element" << endl;
    cout << MaxElement(root) << endl;
    cout<< "Size of the tree" << endl;
    cout << Size(root) << endl;
    cout<< "Sum of the tree" << endl;
    cout << Sum(root) << endl;
    Delete(root,65);
    // LevelOrder(root);
    LevelOrder(root);
    Postorder(root);
    Preorder(root);
    Inorder(root);
    Preorder(root);
    
    
    return 0;
}
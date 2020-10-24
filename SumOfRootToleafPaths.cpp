#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *left,*right;
};

node *newnode(int data)
{
    node *temp=new node();
    temp->data=data;
    temp->left=temp->right=NULL;
    return (temp);
}

int treesPath(node *root,int val)
{
    if(root==NULL)return 0;

    val=val*10+root->data;

    if(root->left==NULL && root->right==NULL)
        return val;

    return (treesPath(root->left,val)+treesPath(root->right,val));
}
int call(node *root)
{
    return treesPath(root,0);
}
int main()
{
    node *root=newnode(1);
    root->left=newnode(2);
    root->right=newnode(3);
    root->left->left=newnode(4);
    root->left->right=newnode(5);
    root->right->right=newnode(9);
    cout<<"Sum from root to leaves:"<<call(root);
    return 0;
}

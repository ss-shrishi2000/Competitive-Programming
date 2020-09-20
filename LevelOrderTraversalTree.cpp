#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node *left,*right;
};
void printlevelorder(Node *root)
{
    if(root==NULL)return ;
    queue<Node *> q;
    q.push(root);
    while(!q.empty())
    {
        Node *node=q.front();
        cout<<node->data<<" ";
        q.pop();
        if(node->left!=NULL)q.push(node->left);
        if(node->right!=NULL)q.push(node->right);
    }
}
Node *newnode(int data)
{
    Node *temp=new Node;
    temp->data=data;
    temp->left=temp->right=NULL;
    return temp;
}
int main()
{
    Node *root=newnode(1);
    root->left=newnode(2);
    root->right=newnode(3);
    root->left->left=newnode(4);
    root->left->right=newnode(5);
    root->right->left=newnode(6);
    root->right->right-newnode(7);
    printlevelorder(root);
    return 0;
}

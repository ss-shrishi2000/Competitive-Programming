#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *left,*right;
};
node* newnode(int data)
{
    struct node *temp=new node();
    temp->data=data;
    temp->left=temp->right=NULL;
    return temp;
}
vector<int> pre,post,in;
void inorder(node *root)
{
    if(root==NULL)return;
    //inorder left,root,right
    inorder(root->left);
    in.push_back(root->data);
    inorder(root->right);
}
void preorder(node *root)
{
    //preorder root,left,right
    if(root==NULL)
        return ;
    pre.push_back(root->data);
    preorder(root->left);
    preorder(root->right);
}
void postorder(node *root)
{
    //postorder left,right,root
    if(root==NULL)return ;
    postorder(root->left);
    postorder(root->right);
    post.push_back(root->data);
}
int main()
{
    int n;cin>>n;
    struct node* root = newnode(1);
    root->left = newnode(2);
    root->right = newnode(3);
    root->left->left = newnode(4);
    root->left->right = newnode(5);
    vector<int> median;
    // Traverse the tree
    postorder(root);
    inorder(root);
    preorder(root);
    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        temp.push_back(post[i]);
        temp.push_back(in[i]);
        temp.push_back(pre[i]);
        sort(temp.begin(), temp.end());
        median.push_back(temp[1]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<median[i].size();j++)cout<<median[i][j];
    }
    return 0;
}

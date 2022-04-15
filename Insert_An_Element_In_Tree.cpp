#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node *left,*right;
    Node(int x)
    {
        data=x;
        left=right=NULL;
    }
};
void inorder(Node *temp)
{
    if(!temp)return ;
    inorder(temp->left);
    cout<<temp->data<<" ";
    inorder(temp->right);
}
void insert(Node *temp,int val)
{
    queue<Node *>q;
    q.push(temp);
    while(!q.empty())
    {
        Node *temp=q.front();
        q.pop();
        if(temp->left==NULL)
        {
            temp->left=new Node(val);       //assigning the value to the first empty place in the tree
            break;
        }
        else q.push(temp->left);
        if(temp->right==NULL)
        {
            temp->right=new Node(val);
            break;
        }
        else q.push(temp->right);
    }
}
int main()
{
    Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->right=new Node(5);
    root->right->right=new Node(6);
    int key=4;
    cout<<"Before Insertion"<<endl;
    inorder(root);
    cout<<"After Insertion"<<endl;
    insert(root,key);
    inorder(root);
    return 0;
}

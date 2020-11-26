#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *left,*right;
};

node* newnode(int data)
{
    node *t=new node();
    t->data=data;
    t->left=t->right=NULL;
    return (t);
}
int level=0;

int evenOddLevelDifference(node* root)
{
    if (!root)return 0;

    queue<node*> q;
    q.push(root);
    int level = 0,evenSum = 0, oddSum = 0;
    while(!q.empty())
    {
        int s= q.size();
        level+=1;
        while(s> 0)
        {
            node* temp = q.front();
            q.pop();
            if(level % 2 == 0)
                evenSum += temp->data;
            else
                oddSum += temp->data;

            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
            s-= 1;
        }
    }
    return (oddSum - evenSum);
}

int main()
{
    node* root = newnode(5);
    root->left = newnode(2);
    root->right = newnode(6);
    root->left->left = newnode(1);
    root->left->right = newnode(4);
    root->left->right->left = newnode(3);
    root->right->right = newnode(8);
    root->right->right->right = newnode(9);
    root->right->right->left = newnode(7);

    int result = evenOddLevelDifference(root);
    cout << "difference between sums is :: ";
    cout << result << endl;
    return 0;
}

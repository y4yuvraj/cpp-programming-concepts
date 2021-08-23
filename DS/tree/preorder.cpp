#include<bits/stdc++.h>
using namespace std;

struct node
{
    struct node *left;
    struct node *right;
    int key;
    node(int k)
    {
        key=k;
    }
};

void preorder(node *root)
{
    if(root!=NULL)
    {
        cout<<root->key<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

int main()
{
    node *root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->right->left=new node(40);
    root->right->right=new node(50);
    preorder(root);
    //10 20 30 40 50      root, left, right
}
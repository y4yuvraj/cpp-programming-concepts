#include<bits/stdc++.h>
using namespace std;

struct node
{
    int key; 
    struct node *left;
    struct node *right;
    node(int k)
    {
        key=k;
        left=right=NULL; 
    }
};


int main()
{
    node *root =new node(10);
    root->left=new node(2);
    root->right=new node(5);
    cout<<(root->left)->key; //2
}
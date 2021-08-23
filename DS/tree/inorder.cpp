#include<bits/stdc++.h>
using namespace std;

struct node
{
    /* data */
    int key;
    struct node *left;
    struct node *right;
    node(int k)
    {
        key=k;
    }
};


int main()
{
    struct node *root=new node(10);
    root->left=new node(20);
    
}
#include<iostream>
using namespace std;
int main()
{
    int a=9;
    int *x=&a;
    cout<<x<<" ";
    int *p=&a-&a;
    cout<<p<<endl;
    if(p==NULL)
        cout<<"Yes";
    int *f=a-a;
    cout<<f<<endl;
     if(f==NULL)
        cout<<"Yes";
    cout<<*f;
}
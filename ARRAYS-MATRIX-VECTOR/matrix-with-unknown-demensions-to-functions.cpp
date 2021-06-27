#include<bits/stdc++.h>
using namespace std;

//C style
void print_c(int **arr,int n,int m)
{
     for(int i=0;i<n;i++)
    {
         for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }
}

int main()
{
    int n,m;
    cout<<"enter the dimension of matrix"<<endl;
    cin>>n>>m;
    int *a[n]; //array of pointers
    for(int i=0;i<n;i++)
    {
        a[i]=new int[m];
        for(int j=0;j<m;j++)
        {
            a[i][j]=i;
        }
    }
    print_c(a,n,m);

}
#include<bits/stdc++.h>
using namespace std;

//C style
void print_c( int **arr,int n,int m)
{
     for(int i=0;i<n;i++)
    {
         for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }
}

void print_cpp( vector<int> v[],int n,int m)
{
    for(int i=0;i<n;i++)
    {
         for(int j=0;j<m;j++)
        {
            cout<<v[i][j]<<" ";
        }
    }
}

void print_vv(vector<vector<int>> &v1)
{
    for(int i=0;i<v1.size();i++)
    {
         for(int j=0;j<v1[i].size();j++)
        {
            cout<<v1[i][j]<<" ";
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
    cout<<"\n";
    //using array of vectors
    //using this we cant send reference
    vector<int> v[n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            v[i].push_back(i);
        }
    }
    print_cpp(v,n,m);
    //using vectors of vector
    //reference can be used
    cout<<"\n";
    vector<vector<int>> v1;
    for(int i = 0; i < n; i++)
	{
		vector<int> v2;
		for(int j = 0; j < m; j++)
		{
			v2.push_back(i);
		}
		v1.push_back(v2);
	}

    print_vv(v1);
}
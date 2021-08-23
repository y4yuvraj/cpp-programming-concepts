/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<bits/stdc++.h>
using namespace std;
// int bins(int a[][],int row,int col,int k,int x)
// {
//     int l=0,r=col-1;
//     int mid;
//     while(l<=r)
//     {
//         mid=(l+r)/2;
//         if(a[x][mid]==k)
//         {
//             return 1;
//         }
//         if(a[x][mid]>k)
//         {
//             r=mid-1;
//         }
//         if(a[x][mid]<k)
//         {
//             l=mid+1;
//         }
//     }
//     return -1;
// }

int main()
{
    int m,n;
    cin>>m>>n;
    vector <vector <int>> a;
    // int a[m][n];
    int k;
    cin>>k;
    int temp;
    for(int i=0;i<m;i++)
    {
        vector <int> v1;
        for(int j=0;j<n;j++)
        {
            cin>>temp;
            v1.push_back(temp);
            // a[i][j];
        }
        a.push_back(v1);
    }

    for(int i=0;i<m;i++)
    {
        
        if(k==a[i][0] || k==a[i][n-1])
        {
            cout<<1;
            return 0;
        }
        else if(k>a[i][0] && k<a[i][n-1])
        {
            // int x;?
            // x=bins(a,m,n,k,i);
            if(binary_search(a[i].begin(),a[i].end(),k))
            {
                cout<<1;
                return 0;
            }
            else
            {
                cout<<-1;
                return 0;
            }
        }
    }
    cout<<-1;
    return 0;
}
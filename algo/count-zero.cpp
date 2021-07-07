// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{ 
int  binsearch(int a[],int s,int e)
{
    
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(mid==0 || a[mid-1]==1 && a[mid]==0 )
        {
            cout<<mid;
             return mid;
        }
        else if(a[mid]==1)
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
    }
    return -1;
}

public:
    void countZeroes(int arr[], int n) {
        // code here
        int x;
        x=binsearch(arr,0,n-1);
        cout<<x;
        // if(x==-1)
        // {
        //     cout<<0;
        // }
        // else
        // {
        //     cout<<n-x;
        // }
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.countZeroes(arr, n);
        // cout << ans << "\n";
    }
    return 0;
}

  // } Driver Code Ends
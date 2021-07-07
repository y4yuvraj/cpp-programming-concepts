#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[7]={5,1,2,1,4,2,6};
    sort(a,a+3);
    sort(a+3,a+7,greater<int>());
    for(int i=0;i<7;i++)
    {
        cout<<a[i];
    }
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],dp[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)dp[i]=1;
    for(int i=1;i<n;i++)
    {
        if(a[i]>=a[i-1])
        {
            dp[i]+=dp[i-1];
        }
    }
    int m=*max_element(dp,dp+n);
    cout<<m;
    return 0;
}

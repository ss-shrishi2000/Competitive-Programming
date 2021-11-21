#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int ans1=0,ans=INT_MIN;
    for(int i=0;i<n;i++)
    {
        ans1=min( a[i]-1 , 1000000-a[i] );
        ans = max(ans,ans1);
    }
    cout<<ans;
    return 0;
}

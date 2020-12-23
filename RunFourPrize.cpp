#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int ans=INT_MIN;
    int p=1,q=1000000;
    for(int i=0;i<n;i++)
    {
      ans=max(ans ,min(a[i]-p,q-a[i]));
    }
    cout<<ans;
    return 0;
}

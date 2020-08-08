#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int ans=0,j=0,t=0;
    for(int i=0;i<n;i++)
    {
        t+=a[i];
        ans++;
        if(t>k)
        {
            t-=a[j++];
            ans--;
        }
        else continue;
    }
    cout<<ans;
    return 0;
}

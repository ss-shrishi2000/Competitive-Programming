#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int ans=-1,cnt=1;
    for(int i=1;i<n;i++)
    {
        if(a[i]<=2*a[i-1])
        {
            cnt++;
        }
        else{
            ans=max(ans,cnt);
            cnt=1;
        }
    }
    ans=max(ans,cnt);
    cout<<ans;
    return 0;
}

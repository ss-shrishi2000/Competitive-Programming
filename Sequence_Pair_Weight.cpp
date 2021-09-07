#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    ll n;
    cin>>n;
    ll x;
    map<ll,ll> mp;
    ll dp[n+10];
    dp[0]=0;
    ll ans=0;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if(mp.count(x))
            dp[i]=dp[i-1] + mp[x];
        else
            dp[i]=dp[i-1];

        mp[x]+=i;
        ans+=dp[i];
    }
    cout<<ans<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(false);cin.tie(0)
#define ff first
#define ss second
#define fo(i,n) for(int i=0;i<n;i++)
#define fo2(i,n) for(int i=1;i<n;i++)
#define pb push_back
#define lli long long int
#define setbits(x) __builtin_popcountll(x)
#define inf 1e18
#define sfp(x,y) fixed<<setprecision(x)<<y
#define mod 1000000007
int main()
{
    fast;
    lli n,p,q,r;cin>>n>>p>>q>>r;
    lli a[n+10];
    fo(i,n)cin>>a[i];
    lli dp[n+1][2]{0};
    dp[0][0]=p*a[0];
    fo2(i,n)
    {
        dp[i][0]=max(dp[i-1][0],p*a[i]);
    }
    dp[0][1]=dp[0][0]+a[0]*q;
    fo2(i,n)
    {
        dp[i][1]=max(dp[i-1][1],dp[i][0]+q*a[i]);
    }
    dp[0][2]=dp[0][1]+a[0]*r;
    fo2(i,n)
    {
        dp[i][2]=max(dp[i-1][2],r*a[i]+dp[i][1]);
    }
    cout<<dp[n-1][2]<<endl;
}

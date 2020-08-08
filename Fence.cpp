#include<bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(false);cin.tie(0)
#define ff first
#define ss second
#define fo(i,n) for(int i=1;i<=n;i++)
#define pb push_back
#define lli long long int
#define setbits(x) __builtin_popcountll(x)
#define inf 1e18
#define sfp(x,y) fixed<<setprecision(x)<<y
#define mod 1000000007
int main()
{
    fast;
    int dp[150010],n,p,k;
    int x=15000001,index;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
    cin>>p;
    dp[i]=dp[i-1]+p;
    if(i>=k&& dp[i]-dp[i-k]<x)
    {
        x=dp[i]-dp[i-k],index=i-k+1;
    }
    }
    cout<<index;
    return 0;
}

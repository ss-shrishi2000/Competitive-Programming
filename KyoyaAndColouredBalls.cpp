#include<bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(false);cin.tie(0)
#define ff first
#define ss second
#define fo(i,n) for(int i=0;i<n;i++)
#define fo2(i,n) for(int i=n-1;i>=0;i--)
#define pb push_back
#define lli long long int
#define setbits(x) __builtin_popcountll(x)
#define inf 1e18
#define sfp(x,y) fixed<<setprecision(x)<<y
#define mod 1000000007
lli dp[1000][1000];
lli check()
{
    fo(i,1000)
    {
        dp[i][0]=1;
        for(int j=1;j<=i;j++)dp[i][j]=(dp[i-1][j]+dp[i-1][j-1])%mod;
    }
}
int main()
{
    fast;
    int n;cin>>n;
    int a[n];
    lli s=0;
    fo(i,n){cin>>a[i];s+=a[i];}
    lli ans=1;
    check();
    fo2(i,n)
    {
        int k=a[i];
        ans=(ans*dp[s-1][k-1])%mod;
        s-=a[i];
    }
    cout<<ans;
    return 0;
}

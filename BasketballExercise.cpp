#include<bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(false);cin.tie(0)
#define ff first
#define ss second
#define fo(i,n) for(int i=1;i<=n;i++)
#define fo2(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define lli long long int
#define setbits(x) __builtin_popcountll(x)
#define inf 1e18
#define sfp(x,y) fixed<<setprecision(x)<<y
#define mod 1000000007
int main()
{
    fast;
    // the thing of getting percepted in the working of the queryty keys are like wow

    int n;cin>>n;
    lli a[n+1][2],dp[n+10][2];
    fo(i,n)cin>>a[i][0];
    fo(i,n)cin>>a[i][1];
    memset(dp,0,sizeof(dp));
    fo(i,n)
        fo2(j,2)
          dp[i][j]=max(dp[i-1][j],a[i][j]+dp[i-1][1-j]);
    cout<<max(dp[n][0],dp[n][1]);
    return 0;
}

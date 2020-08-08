#include<bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(false);cin.tie(0)
#define ff first
#define ss second
#define fo(i,n) for(int i=1;i<=n;i++)
#define fo2(j,n) for(int j=1;j<n;j++)
#define pb push_back
#define lli long long int
#define setbits(x) __builtin_popcountll(x)
#define inf 1e18
#define sfp(x,y) fixed<<setprecision(x)<<y
#define mod 1000000007
lli dp[3000][3000];
int main()
{
    fast;
    int n,m;cin>>n>>m;
    dp[0][0]=1;
    fo(i,n)dp[0][i]=1;
    for(int i=0;i<=n;i++)dp[0][i]=1;
	fo(i,2*m)
	{
	    dp[i][0]=1;
		fo2(j,n)dp[i][j]=(dp[i-1][j]+dp[i][j-1])%mod;
	}
    cout<<dp[2*m][n-1];
}

#include<bits/stdc++.h>
#define fast  ios_base::sync_with_stdio(false)
#define fo(i,n) for(int i=1;i<=n;i++)
#define ff first
#define ss second
#define pb push_back
#define lli long long int
#define setbits(x) __builtin_popcountll(x)
#define inf 1e18
#define sfp(x,y) fixed<<setprecision(x)<<y
#define mod 1000000007
using namespace std;
int main()
{
    fast;cin.tie(0);
    int n;cin>>n;
    int a[n+10];
	fo(i,n)cin>>a[i];
	int dp[5000][5000];
	int cnt=0,ans=0;
	fo(i,n)
	{
		cnt=0;
		for(int j=0;j<i;j++)
		{
			dp[i][j]=dp[j][cnt]+1;
			if(a[i]==a[j])cnt=j;
			ans=max(ans,dp[i][j]);
		}
	}
	cout<<ans;
}

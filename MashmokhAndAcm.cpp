#include<bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(false);cin.tie(0)
#define ff first
#define ss second
#define fo(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define lli long long int
#define setbits(x) __builtin_popcountll(x)
#define inf 1e18
#define sfp(x,y) fixed<<setprecision(x)<<y
#define mod 1000000007
int main()
{
    fast;
	int n, k;
	cin>>n>>k;
	lli dp[n+1];
	for (int i=1; i<=n; i++)dp[i]=1;
	while(k > 1)
    {
		for (int i=1;i<=n;i++)
		{
			lli x = 0;
			for (int j=i; j<=n; j+=i)x =(x + dp[j])%mod;
			dp[i]=x;
		}
		k--;
	}
	lli s= 0;
	for (int i=1;i<=n;i++)s=(s+dp[i])%mod;
	cout<<s<<endl;
}


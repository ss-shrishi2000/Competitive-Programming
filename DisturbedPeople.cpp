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
    int n;cin>>n;
    int a[n];
	fo(i,n)cin >> a[i];
	int ans=0;
	for(int i = 1;i<n-1;++i)
    {
		if(a[i]==0 && a[i-1]==1 && a[i+1]==1)
        {
			++ans;a[i + 1] = 0;
		}
	}
	cout<<ans<<endl;
	return 0;
}

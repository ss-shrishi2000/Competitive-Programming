#include<bits/stdc++.h>
#define fast  ios_base::sync_with_stdio(false)
#define ff first
#define ss second
#define fo(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define lli long long int
#define setbits(x) __builtin_popcountll(x)
#define inf 1e18
#define sfp(x,y) fixed<<setprecision(x)<<y
#define mod 1000000007
using namespace std;
int main()
{
    fast;
    long long ans=0,n,a,b,c;
	cin>>n>>a>>b>>c;
	for(long long i=0;i<=c;i++){

		for(long long j=0;j<=b;j++){

			long long k = (n - 2*i - j)*2;
			if(k >= 0 & k <= a)ans++;
		}
	}
	cout << ans << endl;
}

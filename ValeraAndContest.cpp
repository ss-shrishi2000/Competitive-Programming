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
    int n,k,l,r,sall,sk;cin>>n>>k>>l>>r>>sall>>sk;
    int j=sall-sk;
    fo(i,k)
	{
	    int p=sk/(k - i);
		cout<<p<<" ";
		sk-=p;
	}
    int a;
    for(int i=k;i<n;i++)
    {
        cout<<j/(n-i)<<" ";
        j-=j/(n-i);
    }
    return 0;
}

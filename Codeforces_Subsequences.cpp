#include<bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(false)
#define ff first
#define ss second
#define fo(i,n) for(long long int i=0;i<n;i++)
#define pb push_back
#define lli long long int
#define setbits(x) __builtin_popcountll(x)
#define inf 1e18
#define sfp(x,y) fixed<<setprecision(x)<<y
#define mod 1000000007
int main()
{
    fast;cin.tie(0);
    //problem isnt always as easy as it seems to be
    lli k;
    cin>>k;
    lli a[10];
    fo(i,10)a[i]=1;
    lli b=0,c,d=1;
	while(d<k)
	{
		c=a[b%10];d=d/c;
		a[b%10]++;
		d=d*a[b%10];
		b++;
	}
	string s="codeforces";
	fo(i,10)
	{
		for(int j=0;j<a[i];j++)
			cout<<s[i];
	}
	return 0;
}

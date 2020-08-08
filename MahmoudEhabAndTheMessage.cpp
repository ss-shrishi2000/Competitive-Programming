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
    int n,k,m;cin>>n>>k>>m;
	map<string,int> mp;
	vector<string> vec(n);
	fo(i,n)cin>>vec[i];
	fo(i,n)
	{
		int a;cin>>a;
		mp[vec[i]]=a;
	}
	fo(i,k)
	{
		int x;cin>>x;
		int mi=1000000000;
		vector<int> g(x);
		fo(j,x)
		{
			cin>>g[j];g[j]--;
			if(mp[vec[g[j]]]<mi)mi=mp[vec[g[j]]];
		}
		fo(j,x)mp[vec[g[j]]]=mi;
	}
	lli sum=0;
	fo(i,m)
	{
		string s;cin>>s;
		sum+=mp[s];
	}
	cout<<sum<<endl;
	return 0;
}

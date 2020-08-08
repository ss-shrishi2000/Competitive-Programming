#include<bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(false);
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
    int n,m;
	cin>>n>>m;
    int a[n],k[n],cnt[n];
	for(int i=1;i<=n;i++)cin>>a[i];
	int now=0;
	for(int i=1;i<=m;i++){
		cin>>k[i];
		if(k[i]==0)now++;
	}
	if(now==m){
		cout<<"YES";
		return 0;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)cnt[j]=0;
		int tmp=now;
		for(int j=i;j<=n;j++)
		{
			cnt[a[j]]++;
			if(cnt[a[j]]>k[a[j]])break;
			if(cnt[a[j]]==k[a[j]])tmp++;
			if(tmp==m)
			{
				cout<<"YES";
				return 0;
			}
		}
	}
	cout<<"NO";
}

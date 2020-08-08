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
	map<char,int> m;
	fo(i,n){
		cin>>a[i];
		m[a[i]]++;
	}
	int ca=0,cb=0;
	string ans="";
	bool f=false;
	fo(i,n)
	{
		if(m[a[i]]!=1)ans+='A';
		else
		{
			if(f==0)
			{
				ans+='A';ca++;
			}
			else
			{
				ans+='B';cb++;
			}
			f=!f;
		}
	}
	if(ca==cb+1)
	{
		fo(i,n)
		{
			if(m[a[i]]>2)
			{
				ans[i]='B';ca=cb;break;
			}
		}
	}
	if(ca==cb)
	{
		cout<<"YES"<<endl<<ans;
	}
	else cout<<"NO"<<endl;
}

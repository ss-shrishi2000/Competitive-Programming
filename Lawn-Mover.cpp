#include<bits/stdc++.h>
#define fast  ios_base::sync_with_stdio(false)
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
    int n,m;cin>>n>>m;
    string a[n+10];
    for(int i=0;i<n;i++)
		cin>>a[i];
    int i,j,x=0,y=0;
	int steps=0;
	for(i=0;i<n;i++)
		for(j=(i%2?m-1:0);j>=0&&j<m;j+=(i%2?-1:1))
			if(a[i][j]=='W')
			{
				steps+=abs(x-i)+abs(y-j);
				x=i;
				y=j;
			}
    cout<<steps<<endl;
}

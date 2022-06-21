#include<bits/stdc++.h>
using namespace std;
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
int main()
{
    int n,b;cin>>n;
    bool r=0,m=1;
    int a[n];
    fo(i,n)
	{
	    cin>>b>>a[i];
	    if(b!=a[i])
		    r=1;
	    if(a[i]>a[i-1] && i!=0)
		    m=0;
	}
	if(r==1)cout<<"rated"<<endl;
    else if(r==0 && m==1)cout<<"maybe"<<endl;
    else cout<<"unrated"<<endl;
}

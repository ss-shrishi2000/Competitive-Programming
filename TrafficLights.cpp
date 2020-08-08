#include<bits/stdc++.h>
#define fast  ios_base::sync_with_stdio(false)
#define ff first
#define ss second
#define fo(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define lli long long int
#define setbits(x) __builtin_popcountll(x)
#define inf 1e18
#define sfp(x) fixed<<setprecision(x)
#define mod 1000000007
using namespace std;
int main()
{
    int l,d,v,g,r;
    double t;cin >> l >> d >> v >> g >> r;
    t = (d*1.0)/(1.0*v);
    int k = t/(g+r);
    if(t-k*(g+r) < g || t-k*(g+r)==0 || t<g)cout<<sfp(12)<<(l*1.0)/(v*1.0);
    else cout<<sfp(12)<<(k+1)*(g+r)+((l-d)*1.0)/(v*1.0);
}

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
    fast;
    lli p,n;cin>>n;
    p=n-n/2-n/3-n/5-n/7+n/6+n/10+n/14+n/15+n/21+n/35-n/30-n/105-n/42-n/70+n/210;
    cout<<p;
    return 0;
}

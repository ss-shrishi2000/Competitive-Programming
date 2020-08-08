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
    int c,d,n,m,k;cin>>c>>d>>n>>m>>k;
    int t = max((m*n) - k,0);
    int p = min(c, n*d);
    lli ans = p*(t / n);
    int total=(t%n);
    cout<<ans+min(c,total*d);
}

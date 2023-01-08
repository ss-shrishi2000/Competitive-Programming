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
    lli a[n][n];
    fo(i,n)fo(j,n)cin>>a[i][j];
    lli k=(a[0][2]*a[0][1])/(a[1][2]);
    lli p=sqrt(k);
    cout<<p<<" ";
    for(int i=1;i<n;i++)cout<<a[0][i]/p<<" ";
    return 0;
}

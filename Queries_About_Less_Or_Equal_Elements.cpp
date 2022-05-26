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
    int n,m;cin>>n>>m;
    int a[n],b[m];
    fo(i,n)cin>>a[i];
    fo(i,m)cin>>b[i];
    sort(a,a+n);
    fo(i,m)
    {
        cout<<upper_bound(a,a+n,b[i])-a<<" ";
    }
}

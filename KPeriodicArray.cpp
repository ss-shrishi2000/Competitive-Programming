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
    int n,k;cin>>n>>k;
    int cnt=n/k;
    int a[n],p=0,q=0;
    fo(i,n)cin>>a[i];
    int r[200][2];
    memset(r,0,sizeof(r));
    fo(i,n)
    {
        if(a[i]==1)r[i%k][0]++;
        else r[i%k][1]++;
    }
    fo(i,n)
    {
        p+=min(r[i][0],r[i][1]);
    }
    cout<<p;
    return 0;
}

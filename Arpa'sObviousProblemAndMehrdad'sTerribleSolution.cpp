#include<bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(false);cin.tie(0)
#define ff first
#define ss second
#define fo(i,n) for(int i=1;i<=n;i++)
#define fo2(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define lli long long int
#define setbits(x) __builtin_popcountll(x)
#define inf 1e18
#define sfp(x,y) fixed<<setprecision(x)<<y
#define mod 1000000007
int a,b[200005],c[200005];
int main()
{
    fast;
    int n,k;cin>>n>>k;
    fo(i,n){
    cin>>a;c[i]=a;
    b[a]++;
    }
    lli ans=0;
    fo(i,n)
    {
        ans+=b[c[i]^k];
    }
    if(k==0)ans-=n;
    cout<<ans/2;

}

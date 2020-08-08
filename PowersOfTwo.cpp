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
int main()
{
    lli n,x,ans=0;cin>>n;
    map<lli,lli> mp;
    fo(i,n)
    {
        cin>>x;
        fo2(j,31)ans+=mp[pow(2,j)-x];
        mp[x]++;
    }
    cout<<ans;
    return 0;
}


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
lli k,p,a[2000000];
int main()
{
    fast;
    string s;
    cin>>k>>s;
    a[0]++;
    lli ans=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')
            p++;
        if(p>=k)
            ans+=a[p-k];
        a[p]++;
    }
    cout<<ans;
}

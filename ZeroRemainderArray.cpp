#include<bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(false)
#define ff first
#define ss second
#define fo(i,n) for(int i=0;i<n;i++)
#define fo2(i,n) for(int i=1;i<n;i++)
#define fo3(i,n) for(int i=n-1;i>=0;i--)
#define pb push_back
#define lli long long int
#define setbits(x) __builtin_popcountll(x)
#define inf 1e18
#define sfp(x,y) fixed<<setprecision(x)<<y
#define mod 1000000007
int main()
{
    fast;cin.tie(0);
    int t;cin>>t;
    while(t--)
    {
        lli n,k,check=0,m1=0;cin>>n>>k;
        map<lli,lli> mp;
        lli x;
        fo(i,n)
        {
            cin>>x;mp[x%k]++;
        }
        for(auto it:mp)
        {
            if(it.ff==0)continue;
            check=k*it.ss-it.ff+1;
            m1=max(m1,check);
        }
        cout<<m1<<endl;
    }
}

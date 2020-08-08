#include<bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(false);cin.tie(0)
#define ff first
#define ss second
#define fo(i,n) for(int i=1;i<=n;i++)
#define fo2(i,n) for(int i=2;i<=n;i++)
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
    lli a[100001],b[100001];
    fo(i,n){cin>>a[i];b[i]=a[i];}
    sort(b+1,b+n+1);
    fo(i,n)a[i]+=a[i-1];
    fo(i,n)b[i]+=b[i-1];
    int q;cin>>q;
    int t,l,r;
    while(q--)
    {
        cin>>t>>l>>r;
        if(t==1)cout<<a[r]-a[l-1]<<endl;
        else cout<<b[r]-b[l-1]<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(false);cin.tie(0)
#define ff first
#define ss second
#define fo(i,n) for(int i=1;i<=n;i++)
#define fo2(j,l,r) for(int j=l;j<=r;j++)
#define pb push_back
#define lli long long int
#define setbits(x) __builtin_popcountll(x)
#define inf 1e18
#define sfp(x,y) fixed<<setprecision(x)<<y
#define mod 1000000007
int main()
{
    fast;
    int n,m;cin>>n>>m;
    int a[n],l,r,x;
    fo(i,n)cin>>a[i];
    fo(i,m)
    {
        cin>>l>>r>>x;
        int c=0;
        fo2(j,l,r)
        {
            if(a[j]<a[x])c++;
        }
        if(c+l==x)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}

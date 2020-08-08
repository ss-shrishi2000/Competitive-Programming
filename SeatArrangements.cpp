#include<bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(false);cin.tie(0)
#define ff first
#define ss second
#define fo2(i,n) for(int i=1;i<=n;i++)
#define fo(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define lli long long int
#define setbits(x) __builtin_popcountll(x)
#define inf 1e18
#define sfp(x,y) fixed<<setprecision(x)<<y
#define mod 1000000007
lli fact(int n)
{
    if(n==1)return 1;
    else if(n==0)return 1;
    else return (n*fact(n-1));
}
int main()
{
    lli n,m,k,c1,ans=0;
    cin>>n>>m>>k;
    char a[n][m];
    fo(i,n)
      fo(j,m)cin>>a[i][j];
    fo(i,n)
    {
        c1=0;
        fo(j,m)
        {
            if(a[i][j]=='.')c1++;
        }
        if(c1>=k)ans+=(fact(c1)/(fact(k)*fact(c1-k)));
    }
    cout<<ans;
    return 0;
}

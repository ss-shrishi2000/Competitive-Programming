#include<bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(false);cin.tie(0)
#define ff first
#define ss second
#define fo(i,n) for(int i=0;i<n;i++)
#define fo2(j,n) for(int j=1;j<n;j++)
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
    int a[n],b[n];
    fo(i,n)cin>>a[i];
    fo(i,n)cin>>b[i];
    sort(a,a+n);
    sort(b,b+n);
    lli ans=1e9;
    fo(i,n)
    {
        bool f=true;
        lli c=(b[0]+m-a[i])%m;
        fo2(j,n)
        {
            if((b[j]+m-a[(i+j)%n])%m!=c){
                f=false;break;
            }
        }
        if(f==true){ans=min(ans,c);}
    }
    cout<<ans;
    return 0;
}

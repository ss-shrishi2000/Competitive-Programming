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
    int t;cin>>t;
    while(t--)
    {
        lli x,y,p,q;cin>>x>>y>>p>>q;
        lli l=0,r=1e9,ans=-1;
        while(l<=r)
        {
            lli mid=(l+r)/2;
            lli a=p*mid,b=q*mid;
            if(b>=y && a>=x && (b-a)>=(y-x))
            {
                ans=b-y;
                r=mid-1;
            }
            else {
                l=mid+1;
            }
        }
       cout<<ans<<endl;
    }
    return 0;
}

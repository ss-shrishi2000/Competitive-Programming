#include<bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(false);cin.tie(0)
#define ff first
#define ss second
#define fo(i,n) for(int i=0;i<n;i++)
#define fo2(j,i,n) for(int j=i;j<n;j++)
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
    int a[n],ans=1e8;
    fo(i,n)
        cin>>a[i];
    fo(i,n)
    {
        int s=0;
        fo2(j,i,n)
        {
            s+=a[j];
            ans=min(ans,abs(360-2*s));
        }
    }
    cout<<ans;
    return 0;
}

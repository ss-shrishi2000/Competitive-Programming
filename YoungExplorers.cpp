#include<bits/stdc++.h>
#define fast  ios_base::sync_with_stdio(false)
#define ff first
#define ss second
#define fo(i,n) for(int i=0;i<n;i++)
#define fo2(i,n) for(int i=1;i<=n;i++)
#define fo3(i,n) for(int i=1;i<n;i++)
#define pb push_back
#define lli long long int
#define setbits(x) __builtin_popcountll(x)
#define inf 1e18
#define sfp(x,y) fixed<<setprecision(x)<<y
#define mod 1000000007
using namespace std;
const int r=1e5;
int main()
{
    int t;cin>>t;
    fo(i,t)
    {
        int n;cin>>n;
        int a[n+10],freq[n+10]{0};fo2(i,n){cin>>a[i];freq[a[i]]++;}
        sort(a,a+n);
        lli ans=0;
        fo2(i,n)
        {
            ans+=freq[i]/i;
            freq[i+1]+=freq[i]%i;
        }
        cout<<ans<<endl;
    }
}

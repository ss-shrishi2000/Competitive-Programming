#include<bits/stdc++.h>
#define fast  ios_base::sync_with_stdio(false)
#define ff first
#define ss second
#define fo(i,n) for(int i=1;i<=n;i++)
#define fo2(i,n) for(int i=1;i<n;i++)
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
    int t,n;
    cin>>t;
    while(t--)
    {
    cin>>n;
    int a[n+1];
    fo(i,n)cin>>a[i];
    int dp[n+1]{1};
    fo(i,n)
    {
        for(int j=i+i;j<=n;j+=i)
        {
            if(a[i]<a[j])
                dp[j]=max(dp[j],dp[i]+1);
        }
    }
    int m=*max_element(dp+1,dp+n+1);
    cout<<m+1<<endl;
    }
}

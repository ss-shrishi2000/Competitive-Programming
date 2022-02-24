#include<bits/stdc++.h>
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
using namespace std;
const int r=1e5;
int main()
{
    lli dp[100005]{0};
    dp[0]=2;
    for(int i=1;i<=r;i++)
    {
        dp[i]=dp[i-1]+3*i+2;
    }
    int t,n;cin>>t;
    while(t--)
    {
        cin>>n;
        int c=0;
        while(n>1){
        int x=upper_bound(dp,dp+r,n)-dp;
        x--;
        n-=dp[x];
        if(n<0)break;
        c++;
        }
        cout<<c<<endl;
    }
}

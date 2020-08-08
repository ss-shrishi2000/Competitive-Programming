#include<bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(false);cin.tie(0)
#define ff first
#define ss second
#define fo(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define lli long long int
#define setbits(x) __builtin_popcountll(x)
#define inf 1e18
#define sfp(x,y) fixed<<setprecision(x)<<y
#define mod 1000000007
int a,b,c;
int dp[100005];
int solve(int n){
    if(n==0)
        return 0;
    if(dp[n]!=-1)return dp[n];
    int ret=INT_MIN;
    if(n>=a)ret=max(solve(n-a)+1,ret);
    if(n>=b)ret=max(solve(n-b)+1,ret);
    if(n>=c)ret=max(solve(n-c)+1,ret);
    return dp[n]=ret;
}
int freq[1000000];
int main()
{
    int n;
    cin>>n>>a>>b>>c;
    memset(dp,-1,sizeof(dp));
    int ans=solve(n);
    cout<<ans<<endl;
return 0;
}

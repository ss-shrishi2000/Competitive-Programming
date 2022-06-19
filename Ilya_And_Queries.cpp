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
int main()
{
    fast;
    string s;
    cin>>s;
    int dp[100005];
    dp[0]=0;
    for(int i=1;i<s.size();i++)
    {
        if(s[i-1]==s[i])
            dp[i]=dp[i-1]+1;
        else dp[i]=dp[i-1];
    }
    int m;cin>>m;
    while(m--)
    {
        int l,r;cin>>l>>r;
        l--;r--;
        cout<<dp[r]-dp[l]<<endl;
    }
    return 0;
}

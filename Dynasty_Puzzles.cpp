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
int main()
{
    int t;cin>>t;
    int dp[30][30]{0},ans=0,p=26;
    string s;
    fo(i,t)
    {
       cin>>s;
       int x=s.size();
       int l=s[0]-'a',r=s[x-1]-'a';
       fo(i,p)
       {
           if(dp[i][l]!=0 || (i==l))
               dp[i][r]=max(dp[i][l]+x,dp[i][r]);
       }
    }
    fo(i,p)
    {
        ans=max(ans,dp[i][i]);
    }
    cout<<ans<<endl;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;
    int n=s.size();
    int dp[n+1][n+1];
    memset(dp,0,sizeof(dp));
    for(int i=0;i<n;i++)
        dp[i][i]=1;
    for(int cl=2;cl<=n;cl++)
    {
        for(int i=0;i<n-cl+1;i++)
        {
            int j=i+cl-1;
            if(s[i]==s[j] and cl==2)dp[i][j]=2;
            else if(s[i]==s[j])dp[i][j]=dp[i+1][j-1]+2;
            else dp[i][j]=max(dp[i+1][j],dp[i][j-1]);
        }
    }
    cout<<dp[0][n-1]<<endl;
    return 0;
}

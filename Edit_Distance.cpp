#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int n=s1.size(),m=s2.size();
    int dp[n+1][m+1];
    memset(dp,0,sizeof(dp));
    
    for(int i=0;i<=n;i++)
    {
    for(int j=0;j<=m;j++)
    {
        if(i==0)dp[i][j]=j;
        if(j==0)dp[i][j]=i;
        if(s1[i-1]==s2[j-1] and i!=0 and j!=0)
        {
            dp[i][j]=dp[i-1][j-1];
        }
        else{
            dp[i][j]=1+min(dp[i-1][j],min(dp[i-1][j-1],dp[i][j-1]));
        }
    }
    }
    cout<<dp[n][m];
    return 0;
}

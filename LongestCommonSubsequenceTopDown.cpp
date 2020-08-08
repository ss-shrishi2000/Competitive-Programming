#include<bits/stdc++.h>
using namespace std;
int dp[200][200];
int LCS(string x,string y)
{
    int m=x.size(),n=y.size();
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0||(j==0))dp[i][j]=0;
        }
    }
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(x[i-1]==y[j-1])dp[i][j]=dp[i-1][j-1]+1;
            else {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    return dp[m][n];
}
int main()
{
    string x,y;cin>>x>>y;
    cout<<LCS(x,y);
}

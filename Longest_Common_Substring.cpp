#include<bits/stdc++.h>
using namespace std;
int dp[2][200]{0};
int LCS(string x,string y)
{
    int n=x.size(),m=y.size();
    int ans=0,cur=0;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(i==0||(j==0))
                dp[cur][j]=0;
            else if(x[i-1]==y[j-1])
            {
            dp[cur][j]=dp[1-cur][j-1]+1;
            ans=max(ans,dp[cur][j]);
            }
            else 
            {
                dp[cur][j]=0;
            }
        }
        cur=1-cur;
    }
    return ans;
}
int main()
{
    string x,y;
    cin>>x>>y;
    int n=x.size(),m=y.size();
    cout<<LCS(x,y);
}

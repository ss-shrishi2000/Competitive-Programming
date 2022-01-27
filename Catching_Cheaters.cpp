#include<bits/stdc++.h>
using namespace std;
int dp[6000][6000];
int main()
{
    int n,m;
    cin>>n>>m;
    string a,b;
    cin>>a>>b;
    int ans=INT_MIN;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {

            if(a[i-1]==b[j-1])
            {
                dp[i][j]= max(dp[i][j] , 2+ dp[i-1][j-1] );
            }
            else
                dp[i][j]=max(dp[i][j],max(dp[i-1][j]-1, dp[i][j-1]-1));

              ans=max(ans,dp[i][j]);
        }
    }
    cout<<ans;
    return 0;
}

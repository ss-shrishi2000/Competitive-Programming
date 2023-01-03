#include<bits/stdc++.h>
using namespace std;
int LCS(string x,string y , int m, int n)
{
    int dp[m + 1][n + 1];
    memset(dp,0,sizeof(dp));
    int ans=0;
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)dp[i][j] = 0;

            else if (x[i-1]==y[j-1])
            {
                dp[i][j]=dp[i - 1][j - 1] + 1;
                ans= max(ans,dp[i][j]);
            }
            else
                dp[i][j]=0;
        }
    }
    return ans;
}

int main()
{
    int t;cin>>t;
    while(t--)
    {
        string x,y;
        cin>>x>>y;
        int m=x.size();
        int n=y.size();
        int a=LCS(x,y,m,n);
        //cout<<a<<endl;
        cout<<x.size()+y.size() -2*a<<endl;
    }
}

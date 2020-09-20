#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1001],b[1001];
       int n,m;cin>>n>>m;
       for(int i=0;i<n;i++)cin>>a[i];
       for(int i=0;i<m;i++)cin>>b[i];
       int dp[n+10][m+10];
       memset(dp,0,sizeof(dp));
       int ans=0;
       for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++){
                if(a[i-1]==b[j-1])
                {
                    dp[i][j]=dp[i-1][j-1]+1;
                    ans=max(dp[i][j],ans);
                }
                cout<<dp[i][j]<<" ";
                cout<<endl;
            }

        cout<<ans;
        return 0;
}

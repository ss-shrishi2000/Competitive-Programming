#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int main()
{
    long long int n,m;
    cin>>n>>m;
    long long dp[n+2*m][2*m+1];

    for(int i=0;i<(n+2*m);i++)
    {
        for(int j=0;j<=2*m;j++)
        {
            if(j>i)
                dp[i][j]=0;
            else if(j==0||i==j)
                dp[i][j]=1;
            else
                dp[i][j]=(dp[i-1][j-1]%mod + dp[i-1][j]%mod )%mod;
        }
    }
    cout<<dp[n+2*m-1][2*m];
}

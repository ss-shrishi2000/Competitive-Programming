#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n = s.size();
        lli dp[n+10][2];
        memset(dp, sizeof(dp), 0);
        s = '.'+s;
        for(int i=0; i<=n; i++)
            dp[i][0]=dp[i][1]=0;

        lli ans=0;
        for(int i=1; i<=n; i++)
        {
            if(s[i]=='1' || s[i]=='?')
                dp[i][1]=dp[i-1][0]+1;
            if(s[i]=='0' || s[i]=='?')
                dp[i][0]=dp[i-1][1]+1;

            ans += max(dp[i][0],dp[i][1]);
        }
        cout<<ans<<endl;
    }
    return 0;
}

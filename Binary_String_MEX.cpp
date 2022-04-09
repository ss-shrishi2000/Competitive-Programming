#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.size();
        int l=-1;
        int dp[1000000],dl[1000000];
        int com1[1000000],com0[1000000];
        memset(dp,0,sizeof(dp));
        memset(dl,0,sizeof(dl));
        memset(com0,0,sizeof(com0));
        memset(com1,0,sizeof(com1));

        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                for(int j=l+1;j<=i;j++)
                  com0[j]=i;l=i;
            }
        }
        for(int i=l+1;i<n;i++)com0[i]=n;

        if(com0[0]==n)
        {
            cout<<0<<endl;
            continue;
        }
        l=-1;
        dp[n]=0;
        dl[n]=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                for(int j=l+1;j<=i;j++)
                    com1[j]=i;
                    l=i;
            }
        }
        for(int i=l+1;i<n;i++)
        {
           com1[i]=n;
        }
        dp[n+1]=0;
        dl[n+1]=0;
        for(int i=n-1;i>=0;--i)
        {
            dp[i]=dp[i+1];
            if(s[i]=='0' && com1[i]<n )
                dp[i]=max( dp[i] , dp[com1[i]+1]+1 );

            if(s[i]=='1' && com0[i]<n )
                dp[i]=max( dp[i] , dp[com0[i]+1]+1 );

            dl[i]=dl[i+1];

            if(com1[i]<n)
                dl[i] = max( dl[i] , dp[com1[i]+1]+1 );
        }

        int r=dl[0]+1;
        int cur=com1[0]+1;
        string ans="1";
        for(int i=1;i<r;++i)
        {
            if(cur>=n)
            {
                ans.push_back('0');
                continue;
            }
            if(com0[cur]>=n)
            {
                ans.push_back('0');
                cur=com0[cur]+1;
                continue;
            }
            if(dp[com0[cur]+1] < r-i-1 )
            {
                ans.push_back('0');
                cur=com0[cur]+1;
            }
            else{
                ans.push_back('1');
                cur=com1[cur]+1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

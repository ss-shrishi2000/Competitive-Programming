#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        int dp[s.size()+10];
        memset(dp,0,sizeof(dp));
        int c1=0,c2=0,ans=INT_MAX,n=s.size();
        dp[0]=s[0]-'0';
        for(int i=1;i<s.size();i++)
        {
            dp[i]=dp[i-1]+(s[i]-'0');
        }
        for(int i=0;i<s.size();i++)
        {
            int ch=(i+1-dp[i])+(dp[n-1]-dp[i]);                     //check what is more profitable=> 0's to 1's or 1's to 0's
            ch=min(ch,n-ch);
            ans=min(ans,ch);
        }
        cout<<ans<<endl;
    }
    return 0;
}

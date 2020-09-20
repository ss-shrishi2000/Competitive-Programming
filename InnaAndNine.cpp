#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;
    int dp[100005],l=s.size();
    memset(dp,0,sizeof(dp));
    long long int ans=1;
    for(int i=1;i<=l;i++)
    {
        int a=(s[i]-'0');
        int b=(s[i-1]-'0');
        if(a+b==9)
        {
            dp[i]=dp[i-1]+1;
        }
        else if(dp[i-1]%2==0 and dp[i-1]>0)
        {
            ans*=(dp[i-1]/2+1);
        }
    }
    cout<<ans;
    return 0;
}

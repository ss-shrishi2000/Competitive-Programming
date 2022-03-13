#include<bits/stdc++.h>
using namespace std;
long long p=1000000007;
int main()
{
   string s;cin>>s;
   int l=s.length();
   int dp[l+1];
    for (int i=0;i<l;i++)
    {
        if (s[i]== 'w' || s[i]== 'm')
        {
           cout <<0<<endl;
           return 0;
        }
    }
    dp[0]=dp[1]=1;
    for(int i=2;i<=l;i++)
    {
        dp[i] = dp[i - 1];
        if(s[i-2]==s[i-1]&&(s[i-1]=='u'||s[i-1]=='n'))
           dp[i]=(dp[i]+dp[i-2])%p;
    }
    cout<<dp[l];
}


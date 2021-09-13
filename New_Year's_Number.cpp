#include<bits/stdc++.h>
using namespace std;
bool dp[1000010];
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<=1000005;i++)
    {
        if(i==0)
            dp[i]=true;
        else if(i<2020)
            dp[i]=false;
        else
            dp[i]=dp[i-2020] || dp[i-2021] ;
    }
    while(t--)
    {
        int n;
        cin>>n;
        if(dp[n])
          cout<<"YES"<<endl;
        else
          cout<<"NO"<<endl;
    }
    return 0;
}

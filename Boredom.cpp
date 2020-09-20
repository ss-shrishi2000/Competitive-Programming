#include<bits/stdc++.h>
using namespace std;
long long int a[100005];
int main()
{
    int n;cin>>n;
    map<long long int,long long int> mp;
    for(int i=0;i<n;i++){cin>>a[i];mp[a[i]]++;}
    long long int dp[100005];
    memset(dp,0,sizeof(dp));
    dp[1]=mp[1];
    for(int i=2;i<=100000;i++)
    {
        dp[i]=max(dp[i-1],dp[i-2]+mp[i]*i);
    }
    cout<<dp[100000];
}

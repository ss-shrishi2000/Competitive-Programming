#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
    int n;cin>>n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)cin>>v[i];
    vector<int> dp(n);
    int cnt = 1;
    dp[0] = 1;
    for(int i = 1; i < n; i++) {
    if(v[i] < v[i-1])cnt = 1;
    else cnt ++;
    dp[i] = dp[i-1] + cnt;
    }
    cout<<dp[n-1]<<endl;
    }
}

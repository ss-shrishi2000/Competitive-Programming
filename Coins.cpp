#include<bits/stdc++.h>
using namespace std;
long long dp[1000000]{0};
long long count(long long x)
{
    if(x<=0)return 0;
    if(x<2)return x;

     return dp[x]=dp[int(x/2)]+dp[int(x/3)]+dp[int(x/4)];
}
int main()
{
    long long n;
    while(cin>>n)
    {
        cout<<count(n)<<endl;
    }
}

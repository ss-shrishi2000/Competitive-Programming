#include<bits/stdc++.h>
using namespace std;
bool sieve(long long int n)
{
    int c=0;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int main()
{
    long long int dp[1000001],t;
    long long int cnt=0;
    scanf("%lld",&t);
    dp[0]=0;
    dp[1]=0;
    for(int i=2;i<=1000000;i++)
    {
        if(sieve(i)==true)
            cnt++;
        dp[i]=cnt;
    }
    long long int a,b;
    while(t--)
    {
      scanf("%lld%lld",&a,&b);
      if(dp[a]<=b)
            printf("Chef\n");
      else
        printf("Divyam\n");
    }
    return 0;
}

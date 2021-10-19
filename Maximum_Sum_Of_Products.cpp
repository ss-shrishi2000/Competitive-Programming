#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll dp[5010][5010];
ll sum = 0 , ans=0;

int main()
{
    int n;
    cin>>n;
    ll arr[n+10] , brr[n+10];

    for(int i=1;i<=n;i++)
        cin>>arr[i];

    for(int i=1;i<=n;i++)
        cin>>brr[i];


    for(int i=1;i<=n;i++)
    {
        sum += arr[i] * brr[i];
    }

    for(int i=2;i<=n;i++)
    {
        for(int j=i-1;j>=1;j--)
        {
            dp[j][i] = dp[j+1][i-1] - (arr[i]*brr[i]) - (arr[j]*brr[j]) + (arr[i]*brr[j]) + (arr[j]*brr[i]);
            ans = max(ans , dp[j][i]);
        }
    }
    cout<<ans+sum<<endl;
    return 0;

}

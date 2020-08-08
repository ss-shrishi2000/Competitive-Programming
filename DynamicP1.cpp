#include<bits/stdc++.h>
using namespace std;
static int dp[100][200]{0};
int total(int a[][],int n,int k)
{
    k=k-1;int x=k;
    if(n==0)
        return 0;
        k=x;
    while(k>=0){
    return dp[n][k]=min(dp[n-1][k-1],dp[n-1][k-1]+a[n-1][k]);
    k--;
    }
    return dp[n][k];
}
int main()
{
    int n,k;cin>>n>>k;
    int a[n][k];
    for(int i=0;i<n;i++){for(int j=0;j<k;j++){cin>>a[i][j];}}
    cout<<total(a,n,k);
}

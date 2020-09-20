#include<bits/stdc++.h>
using namespace std;
int dp[101];
bool prime(int x)
{
    int c=0;
    for(int i=2;i<=sqrt(x);i++)
    {
        if(x%i==0)c++;
        if(c>0)return false;
    }
    return true;
}
int lps(int arr[],int n)
{
    if(n==0)return 0;

    if(prime(arr[n-1]))
        return dp[n]=1+lps(arr,n-1);
    else
        return dp[n]=lps(arr,n-1);
}
int main()
{
   int n;cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)cin>>arr[i];
   cout<<lps(arr,n);
}

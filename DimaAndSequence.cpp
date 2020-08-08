#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    long long b[1000];
    for(int i=0;i<n;i++)
    {
        b[__builtin_popcount(a[i])]++;
    }
    long long res=0;
    for(int i=0;i<=31;i++)
    {
        res+=(b[i]*(b[i]-1))/2;
    }
    cout<<res;
}

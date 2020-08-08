#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int i=0;i<n;i++)
int main()
{
    int n;cin>>n;
    int a[n],smalpos=1e9;
    long long sum=0;
    fo(i,n)
    {
    cin>>a[i];
    if(a[i]>0)sum+=a[i];
    if(a[i]%2!=0)smalpos=min(smalpos,abs(a[i]));
    }
    if(sum%2==0)sum-=smalpos;
    cout<<sum;
    return 0;
}

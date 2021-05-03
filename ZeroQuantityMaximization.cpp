#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n],b[n];
    map< pair<long long,long long> , long long > mp;
    long long zero=0,ans=INT_MIN;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==0 && b[i]==0)
            zero++;
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            long long g=__gcd(a[i],b[i]);
            mp[make_pair(a[i]/g , b[i]/g)]++;
        }
    }
    for(auto it:mp)
    {
        ans=max(ans,it.second);
    }
    if(ans==INT_MIN)
        cout<<zero;
    else
        cout<<ans+zero;

    return 0;
}

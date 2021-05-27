#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    map<long long ,long long > mp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j)
                mp[a[i]+a[j]]++;
        }
    }
    long long ans=0;
    for(auto it:mp)
    {
        ans=max(ans,it.second);
    }
    cout<<ans/2;
    return 0;
}

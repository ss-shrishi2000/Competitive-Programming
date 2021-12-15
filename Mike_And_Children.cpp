#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    map<int,int> mp;
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
        mp[a[i]+a[j]]++;

    int ans=-1;
    for(auto it:mp)
    {
        ans= max(ans,it.second);
    }
    cout<<ans;
    return 0;
}

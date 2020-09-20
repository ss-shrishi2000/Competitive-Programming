#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;cin>>n;
    map<int,int> mp;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        mp[a]++;mp[a+1]++;
        mp[a-1]=0;
        mp[a+2]=0;
        ans=max(ans,max(mp[a],mp[a+1]));
    }
    cout<<ans;
    return 0;
}

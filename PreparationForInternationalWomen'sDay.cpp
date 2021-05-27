#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        mp[a[i]%k]++;
    }
     int ans=0;
        if(k%2==0)
        {
            ans+=mp[0]/2;
            for(int i=1;i<k/2;i++)
            {
                int x=min(mp[i],mp[k-i]);
                ans+=x;
            }
            ans+=mp[k/2]/2;
        }
        else
        {
            ans+=mp[0]/2;
            for(int i=1;i<=k/2;i++)
            {
                int x=min(mp[i],mp[k-i]);
                ans+=x;
            }
        }

    cout<<ans*2;
    return 0;
}

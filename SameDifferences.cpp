#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];

        map<long long int,long long int> mp;
        for(int i=0;i<n;i++)
        {
            mp[a[i]-i]++;
        }
        long long int ans=0;
        for(auto it:mp)
        {
            long long int p=it.second;
            ans+= (p*(p-1))/2;
        }
        cout<<ans<<endl;
    }
    return 0;
}

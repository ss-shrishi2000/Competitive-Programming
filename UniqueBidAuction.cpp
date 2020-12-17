#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int pos[n+10],x;
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            mp[x]++;
            pos[x]=i+1;
        }
        int ans=-1;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if((it->second)==1)
            {
                ans=pos[(it->first)];
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

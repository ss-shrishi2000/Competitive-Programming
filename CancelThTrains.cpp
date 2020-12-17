#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,m;cin>>n>>m;
        map<int,int> mp;
        int x,cnt=0;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            mp[x]++;
        }
        for(int j=0;j<m;j++)
        {
            cin>>x;
            if(mp[x]==1)cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}

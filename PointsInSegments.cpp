#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;cin>>n>>m;
    map<int,int>mp;
    int x,y;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        for(int j=x;j<=y;j++)mp[j]++;
    }
    vector<int> v;
    for(int i=1;i<=m;i++)
    {
        if(mp[i]==0)v.push_back(i);
    }
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
}

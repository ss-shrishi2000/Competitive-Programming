#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,m;
    cin>>n>>m;
    vector<set<ll>> adj(n+1);
    int a,b,cnt=0;
    for(int i=0;i<m;i++)
    {
        cin>>a>>b;
        adj[a].insert(b);
        adj[b].insert(a);
    }

    while(true)
    {
    vector<ll> kicked;
    for(int i=1;i<=n;i++)
    {
        if(adj[i].size()==1)
            kicked.push_back(i);
    }
     if(kicked.size()==0)
        break;
     else
        cnt++;

     for(int i=0;i<kicked.size();i++)
     {
         long long k=kicked[i];
         auto it=adj[k].begin();
         adj[*it].erase(k);
         adj[k].clear();
     }
    }
    cout<<cnt;
    return 0;
}

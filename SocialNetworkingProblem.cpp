#include<bits/stdc++.h>
using namespace std;
void bfs(int i,vector<int> v[],vector<int> d[])
{
    map<int, int>visited;
    queue<int>q;
    map<int,int>dist;
    q.push(i);
    visited[i] = true;
    dist[i] = 0;
    while (!q.empty())
    {
        int r= q.front();
        d[i].push_back(dist[r]);
        q.pop();
        for (auto nbr: v[r])
        {
            if (!visited[nbr])
            {
                dist[nbr] = dist[r] + 1;
                q.push(nbr);
                visited[nbr] = true;
            }
        }
    }
}
int main()
{
    int n,e,x,y;cin>>n>>e;
    vector<int> v[n+1];
    for(int i=0;i<e;i++)
    {
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    int m;cin>>m;
    int source,k;
    vector<int> dis[n+1];
    for(int i=0;i<n;i++)
    {
        bfs(i,v,dis);
    }
    for(int i=0;i<m;i++)
    {
    cin>>source>>k;
    int c=0;
    for(auto it:dis[source])
    {
        if(it==k)c++;
    }
    cout<<c<<endl;
    }
    return 0;
}

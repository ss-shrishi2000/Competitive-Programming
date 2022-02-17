#include<bits/stdc++.h>
using namespace std;
int main()
{
    int V;cin>>V;
    vector<int> graph[V];
    int x,y,m;cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    int src;cin>>src;
    int color[V];
    memset(color , -1, sizeof(color));
    queue<int> q;
    q.push(src);
    color[src]=1;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(auto v: graph[u])
        {
           if(graph[u][v] && color[v]==-1)
           {
               color[v]=1-color[u];
               q.push(v);
           }
           else if(graph[u][v] && color[u]==color[v])
           {
               cout<<"Not Bipartite";
               return 0;
           }
        }
    }
    cout<<"Bipartite";
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
vector<int> graph[10005];
int level[10005];
bool vis[10005];
void bfs(int src,int level[])
{
    queue<int> q;
    q.push(src);
    vis[src]=true;
    level[src]=0;
    while(!q.empty())
    {
        int v=q.front();
        q.pop();
        for(auto it=graph[v].begin();it!=graph[v].end();it++)
        {
            if(vis[*it]==false)
            {
                level[*it]=level[v]+1;
                vis[*it]=true;
                q.push(*it);
            }
        }
    }
}
int main()
{
    int n,m;cin>>n>>m;
    int x,y,l;cin>>l;
    for(int i=0;i<m;i++)
    {
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    memset(vis,false,sizeof(vis));
    memset(level,0,sizeof(level));
    bfs(0,level);
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(level[i]==l)c++;
    }
    cout<<"The number of nodes at the given level is: "<<c<<endl;
    return 0;
}

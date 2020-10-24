#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> graph;                //graph to be traversed
int V,cnt=0;           //total number of vertices
int components[1000];
bool visited[1000];
int findcomponents(int a,bool visited[])
{
    for(int i=0;i<V;i++)
    {
        if(!visited[i])
        {
            cnt++;findcomponents(i,visited);
        }
    }
    return cnt;
}
void dfs(int a)
{
    visited[a]=true;
    components[a]=cnt;
    for(auto it:graph)
    {
        if(!visited[it])
            dfs(it);
    }
}
int main()
{
    int m,x,y;                     //queries to add edges
    cin>>V>>m;

    memset(visited,false,sizeof(visited));
    for(int i=0;i<m;i++)
    {
        cin>>x>>y;
        graph[x].push_back(y);                       //undirected graph indicating an edge existing between x and y
        graph[y].push_back(x);
    }
    dfs(0,visited);
    return 0;
}

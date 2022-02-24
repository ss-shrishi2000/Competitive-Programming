#include<bits/stdc++.h>
using namespace std;
vector<int> graph[100005];
bool vis[100005],recStack[100005];
bool dfs(int root,bool vis[],bool *recStack)
{
    if(vis[root] == false)
    {
        // Mark the current node as visited and part of recursion stack
        vis[root] = true;
        recStack[root] = true;

        // Recur for all the vertices adjacent to this vertex
        for(auto it = graph[root].begin(); it != graph[root].end(); ++it)
        {
            if ( !vis[*it] && dfs(*it, vis, recStack) )
                return true;

            else if (recStack[*it])
                return true;
        }
    }
    recStack[root] = false;  // remove the vertex from recursion stack
    return false;
}
int main()
{
    int n,m;cin>>n>>m;                                                    //detect cycle in a graph with n vertices and m edges
    int x,y;
    for(int i=0;i<m;i++)
    {
        cin>>x>>y;
        graph[x].push_back(y);
    }
    memset(vis,false,sizeof(vis));

    memset(recStack,false,sizeof(recStack));

    if(dfs(0,vis,recStack)==true)
        cout<<"YES,it contains a cycle"<<endl;
    else
        cout<<"NO,it doesn't contain a cycle";

    return 0;
}

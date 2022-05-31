#include<bits/stdc++.h>
using namespace std;
void dfs(int vertex, bool vis[], vector<vector<int>> gr, int n)
{
    vis[vertex] = true;
    for(auto it= gr[vertex].begin(); it!=gr[vertex].end(); it++)
    {
        if(vis[*it]==false)
            dfs(*it, vis, gr, n);
    }
}
int main()
{
    int n, m;
    cin>>n>>m;

    vector<vector<int>> gr(n+5);
    int x, y;
    for(int i=0; i<m; i++)
    {
        cin>>x>>y;
        gr[x].push_back(y);
        gr[y].push_back(x);
    }
    // number of connected components
    bool vis[n+5];
    int cc = 0;
    memset(vis, false, sizeof(vis));
    for(int i=1; i<=n; i++)
    {
        if(vis[i]==false)
            dfs(i, vis, gr, n), cc++;
    }
    long long int ans = pow(2, n-cc);
    cout<<ans;
    return 0;
}

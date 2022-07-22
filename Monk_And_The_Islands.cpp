#include<bits/stdc++.h>
using namespace std;
//shortest distance using dfs
bool visited[10002];
int level[100002];
int ans=0;

int dfs(vector<int> v[],int source,int destination)
{
   queue<int> q;
    q.push(source);
    visited[source]=true;
    level[source]=0;
    while(!q.empty())
    {
        int r=q.front();
        q.pop();
        for(int i=0;i<(int)v[r].size();i++)
        {
            if(!visited[v[r][i]])
            {
                level[v[r][i]]=level[r]+1;
                ans=level[v[r][i]];
                q.push(v[r][i]);
                if(v[r][i]==destination)
                   return ans;
                visited[v[r][i]]=true;
            }
        }
    }
    return ans;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
       int n,m,x,y;
       cin>>n>>m;
        vector<int> v[n+1];
        for(int i=0;i<m;i++)
        {
            cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        memset(visited,false,sizeof(visited));
        cout<<dfs(v,1,n)<<endl;
    }
    return 0;
}

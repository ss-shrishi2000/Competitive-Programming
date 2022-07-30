#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> g[50010];
vector<int>dis(50010);
int bfs(int s,int n)
{
  deque<int>q;
  q.push_back(s);
  dis[s]=0;
  while(!q.empty())
  {
   int f=q.front();
   q.pop_front();
   for(int i=0;i<g[f].size();i++)
   {
   if(dis[g[f][i].first]>dis[f]+g[f][i].second)
   {
   dis[g[f][i].first]=dis[f]+g[f][i].second;
   if(g[f][i].second==0)
   {
   q.push_front(g[f][i].first);
    }
  else{
  q.push_back(g[f][i].first);
   }
   }
   }
   }
   return dis[n];
}
int main()
{
int t,n,i,j,k,l;

cin>>t;
while(t--)
{
cin>>n;
for(i=0;i<n;i++)
{
cin>>j;
g[i+1].push_back(make_pair(j,0));
if(i<n-1){
g[i+1].push_back(make_pair(j+1,1));
}
  if(i>0)
  {
  g[i+1].push_back(make_pair(j-1,1));
  }
  dis[i+1]=INT_MAX;
  }

cout<<bfs(1,n)<<endl;
for(int i=0;i<=n;i++)
{
g[i].clear();
}
}
}




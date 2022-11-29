#include<bits/stdc++.h>
using namespace std;
int main(){
  long long x,y;cin>>x>>y;
  long long visited[100005];
  memset(visited,-1,sizeof(visited));
  visited[x]=0;
  long long n;
  queue <long long> q;cin>>n;
  long long arr[1005];
  for(long long i=0; i<n; i++)
   cin>>arr[i];
  q.push(x);
    while(!q.empty())
    {
      x=q.front();
      q.pop();
      if(x==y)break;

      for(long long i=0; i<n; i++)
      {
          long long as=(((arr[i]%100000)*(x%100000))%100000);
          if(visited[as]==-1)
          {
            visited[as]=visited[x]+1;
            q.push(as);
          }
          if(as==y)
          break;
      }
      if(visited[y]!=-1)
      break;
    }
   cout<<visited[y]<<endl;
}

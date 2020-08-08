#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pp;
int main()
{
  int n,m,q;cin>>n>>m>>q;
  pp pos[2000][2000];int ans[2000][2000];
  for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    pos[i][j]=pp(i,j);
  for(int i=0;i<q;i++)
  {
      int t,r,c,x;
      cin>>t;
      if(t==1)
      {
          cin>>r;r-=1;
          pp res=pos[r][0];
          for(int i=1;i<m;i++)
          {
              pos[r][i-1]=pos[r][i];
          }
          pos[r][m-1]=res;
      }
      else if(t==2)
      {
          cin>>c;c-=1;
          pp res=pos[0][c];
          for(int i=1;i<n;i++)
          {
              pos[i-1][c]=pos[i][c];
          }
          pos[n-1][c]=res;
      }
      else{
        cin>>r>>c>>x;
        r-=1;c-=1;
        ans[pos[r][c].first][pos[r][c].second]=x;
      }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++)cout<<ans[i][j]<<" ";
    cout<<endl;
  }

}

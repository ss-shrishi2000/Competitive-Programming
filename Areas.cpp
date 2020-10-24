#include<bits/stdc++.h>
using namespace std;
//A kind of obstacle tackling problem!!!
void dfs(int i,int j,int &cnt,vector<vector<int>> &v,int n,int m)
{
    v[i][j]=2;
    if(i+1<n)                               //corner case check then apply dfs
    {
        if(v[i+1][j]==1)
        {
            cnt++;
            dfs(i+1,j,cnt,v,n,m);
        }
    }
    if(i-1>=0)                 //corner case check and then apply dfs
    {
        if(v[i-1][j]==1)
        {
            cnt++;
            dfs(i-1,j,cnt,v,n,m);
        }
    }
    if(j-1>=0)
    {
        if(v[i][j-1]==1)
        {
            cnt++;
            dfs(i,j-1,cnt,v,n,m);
        }
    }
    if(j+1<m)
    {
       if(v[i][j+1]==1)
        {
            cnt++;
            dfs(i,j+1,cnt,v,n,m);
        }
    }
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,m;cin>>n>>m;
        vector<vector<int>> v(n,vector<int> (m));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                char s;cin>>s;
                if(s=='#')v[i][j]=0;
                else v[i][j]=1;
            }
        }
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int cnt=1;
                if(v[i][j]==1)
                {
                dfs(i,j,cnt,v,n,m);
                ans.push_back(cnt);
                }
            }
        }
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}

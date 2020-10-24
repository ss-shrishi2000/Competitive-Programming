#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t-->0)
    {
        int n;cin>>n;
        vector<pair<int,int>> v[n+5];
        for(int i=0;i<n-1;i++)
        {

            int a,b,c;cin>>a>>b>>c;
            v[a].push_back(make_pair(b,c));
            v[b].push_back(make_pair(a,c));
        }
        int xor_v[n+5];
        int val=INT_MIN;
        bool visited[n+5];
        memset(xor_v,0,sizeof(xor_v));
        memset(visited,0,sizeof(visited));
        queue<int> q;
        q.push(1);
        visited[1]=true;
        int ans=0;
        while(!q.empty()){
            int r = q.front();
            q.pop();
            for(int i=0;i<(int)v[r].size();i++)
            {
                if(!visited[v[r][i].first]){
                    xor_v[v[r][i].first]=v[r][i].second^xor_v[r];
                    q.push(v[r][i].first);
                    visited[v[r][i].first]=true;
                }
            }
            if(v[r].size()==1){
                if(xor_v[r]==1)ans++;
            }
        }
        cout<<ans<<endl;
    }
}

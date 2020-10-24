#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,t,c;cin>>n>>m>>t>>c;
    int x,y;
    vector<int> v[n+1];
    for(int i=0;i<m;i++)
    {
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(int i=1;i<=n;i++)sort(v[i].begin(),v[i].end());
    int a,b;
    int p[n+1];
    bool visited[n+10];
    memset(visited ,false, sizeof(visited));
    cin>>a>>b;
    p[a]=0;
    queue<int> q;
    q.push(a);
    visited[a]=true;
    bool found=false;
    while(!q.empty())
    {
        int r=q.front();
        q.pop();
        if(found==true)break;
        for(int it=0;it<(int)v[r].size();it++)
        {
            if(visited[v[r][it]]==false)
            {
                p[v[r][it]]=r;
                visited[v[r][it]]=true;
                if(v[r][it]==b)
                {
                    found=true;
                    break;
                }
                q.push(v[r][it]);
            }
        }
    }
    stack<int> s;
    while(p[b]!=0)
    {
     s.push(b);
     b=p[b];
    }
    s.push(a);
    cout<<s.size()<<endl;
    while(s.empty()==false)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}

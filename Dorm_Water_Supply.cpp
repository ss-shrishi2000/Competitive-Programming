#include<bits/stdc++.h>
using namespace std;
vector<pair<int , int>> gr[10005];
int main()
{
    int n,p;
    cin>>n>>p;
    int a,b,d;
    int indegree[n+1]={0};

    for(int i=0;i<p;i++)
    {
        cin>>a>>b>>d;
        gr[a].push_back(make_pair(b,d));
        indegree[b]++;
    }
   // bool vis[n+10];
    vector<tuple<int , int , int>> ans;
    for(int i=1;i<=n;i++)
    {
        if(indegree[i]==0)
        {
            int mn=INT_MAX;
            int j=i;
            while(gr[j].size())
            {
                mn=min(mn , gr[j][0].second);
                j=gr[j][0].first;
                if(j==i)
                    break;
            }
            if(j==i)
                continue;
            ans.push_back({i,j,mn});
        }
    }
    cout<<ans.size()<<endl;
    for(auto it:ans)
    {
        cout<<get<0>(it) << " " <<get<1>(it) << " " <<get<2>(it)<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int> > ans;
    int n;cin>>n;
    vector<vector<int>> points;
    int k,x,y;
    priority_queue<pair< int, pair <int,int> > > maxheap;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        points[i].push_back(x);
        points[i].push_back(y);
    }
    for(int i=0;i<points.size();i++)
    {
        maxheap.push( {points[i][0]*points[i][0] + points[i][1]*points[i][1] ,{ points[i][0],points[i][1] } } );
        if(maxheap.size()>k)maxheap.pop();
    }
    while(maxheap.empty()==false)
    {
        pair<int,int> val= maxheap.top().second;
        ans.push_back({val.first,val.second});
        maxheap.pop();

    }
    for(int i=0;i<ans.size();i++)cout<<ans[i][0]<<" "<<ans[i][1]<<endl;
    return 0;
}

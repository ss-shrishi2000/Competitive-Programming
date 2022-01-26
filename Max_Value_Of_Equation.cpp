#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<vector<int>> points(n);
    int k; cin>>k;
    int x,y;
    for(int i=0; i<n; i++)
    {
        cin>>x>>y;
        points[i].push_back(x);
        points[i].push_back(y);
    }

    priority_queue<pair<int,int>> pq;
    for(int i=0; i<points.size(); i++)
    {
        pq.push({points[i][1] - points[i][0] , points[i][0]});
    }
    int ans=0;
    for(int i=0; i<points.size(); i++)
    {
      // cout<<"hello"<<endl;
      while(pq.empty()==false)
      {
          if((points[i][0] - pq.top().second) > k )
                   pq.pop();
      }
      if(pq.empty()==false)
      {
      ans = max(ans, pq.top().first + points[i][1] + points[i][0] );
      }

      pq.push({points[i][1]-points[i][0],points[i][0]});
    }
    cout<<ans;
    return 0;
}

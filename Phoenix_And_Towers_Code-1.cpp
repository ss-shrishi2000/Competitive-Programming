#include<bits/stdc++.h>
using namespace std;
#define pii pair<int, int>
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n, m, x;
        cin>>n>>m>>x;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        priority_queue<pii, vector<pii>, greater<pii>> pq;
        for(int i=1; i<=m; i++)
        {
            pq.push(make_pair(0,i));
        }
        pair<int, int> ans[n];
        for(int i=0; i<n; i++)
        {
            pair<int, int> pr = pq.top();
            pq.pop();
            int ff = pr.first + a[i];
            int ss = pr.second;
            pq.push(make_pair(ff, ss));
            ans[i].first = i;
            ans[i].second = pr.second;
        }
        sort(ans, ans+n);
        cout<<"YES"<<endl;
        for(int i=0; i<n; i++)
            cout<<ans[i].second<<" ";
        cout<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define pr pair<lli , lli>
int main()
{
    lli n,k,A;
    cin>>n>>k;
    lli a[n],cost[n] , ans=0 , res=k;
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>A;
    for(int i=0;i<n;i++)
        cin>>cost[i];
    priority_queue< lli ,vector<lli> , greater<lli> > pq;
    for(int i=0;i<n;i++)
    {
        pq.push(cost[i]);
        while(!pq.empty() && res<a[i])
        {
            ans+=pq.top();
            pq.pop();
            res+=A;
        }
    if(pq.empty() && res<a[i])
    {
        cout<<"-1";
        return 0;
    }
    }
    cout<<ans;
    return 0;
}

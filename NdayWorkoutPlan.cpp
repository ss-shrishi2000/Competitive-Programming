#include<bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(false)
#define ff first
#define ss second
#define fo(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define lli long long int
#define setbits(x) __builtin_popcountll(x)
#define inf 1e18
#define sfp(x,y) fixed<<setprecision(x)<<y
#define mod 1000000007
int main()
{
    fast;cin.tie(0);
    int n,k;cin>>n>>k;
    priority_queue<int,vector<int>,greater<int>>pq;
    int a[n],cost[n],A;
    fo(i,n)cin>>a[i];
    cin>>A;
    fo(i,n)cin>>cost[i];
    lli ans=0,ind=k;
    fo(i,n)
    {
        pq.push(cost[i]);
        while(pq.empty()==false && (ind<a[i]))
        {
            ind+=A;
            ans+=pq.top();
            pq.pop();
        }
        if(ind<a[i]){cout<<"-1";return 0;}
    }
    cout<<ans;
}

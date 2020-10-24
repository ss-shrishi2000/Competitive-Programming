#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(p,n) for(int i=p;i<n;i++)
#define FIO ios_base::sync_with_stdio(false);   cin.tie(NULL);   cout.tie(NULL);
#define endl "\n"
#define mp make_pair
#define pb push_back
#define mod 1000000007
#define LLONG_MAX 1000000000000006
ll dis[100005],dis2[100005]; // dis array contain distance from 1 to all and dis2 contains distance from n to all

int main()
{
    FIO
    int n,m;cin>>n>>m;
    fo(1,100005)
    {
        dis[i]=LLONG_MAX;// assigning infinity to all edges
        dis2[i]=LLONG_MAX;
    }
    set<pair<ll,ll>> s,s2; // We can use priority_queue too but with modification.Hence set are good without modification
    vector<ll> v[n+1],v2[n+1];// v stores graph and v2 stores samegraph with opp direction of edges.
    map<pair<ll,ll>  ,ll>  w;// to store weight
    vector<pair<ll,ll>> a;// stores edges
    fo(0,m)
    {
        ll x,y,z;
        cin>>x>>y>>z;
        v[x].pb(y);
        v2[y].pb(x);
        if(w.count({x,y})==0)
        w[{x,y}]=z;
        else
        w[{x,y}]=min(w[{x,y}],z);// There can be multiple edges so we will take min of all
        a.pb({x,y});
    }
    dis[1]=0;
    dis2[n]=0;
    //Dijkstra 1 from 1 to all
    s.insert({0LL,1LL});
    while(!s.empty())
    {
        pair<ll,int > temp;
        temp=*(s.begin());
        int node=temp.second;
        s.erase(s.begin());
        for(int i: v[node])
        {
            if(dis[node]+w[{node,i}]<dis[i])
            {
                    s.erase({dis[i],i});

                dis[i]=dis[node]+w[{node,i}];
                s.insert({dis[i],i});
            }
        }
    }
    // Dijkstra 2 from N to all
    s2.insert({0LL,n});
    while(!s2.empty())
    {
        pair<ll,int > temp;
        temp=*(s2.begin());
        int node=temp.second;

        s2.erase(s2.begin());
        for(int i: v2[node])
        {
            if(dis2[node]+w[{i,node}]<dis2[i])
            {
                s2.erase({dis2[i],i});
                dis2[i]=dis2[node]+w[{i,node}];
                s2.insert({dis2[i],i});
            }
        }
    }
     ll minm=dis[n];
    fo(0,m)
    {
        int x=a[i].first;
        int y=a[i].second;
        ll  val=dis[x]+dis2[y];
        minm=min(minm,val);

    }

    cout<<minm<<endl;
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    vector<ll> vx,vy;
    ll x,y;
    for(int i=0;i<t;i++)
    {
        cin>>x>>y;
        vx.push_back(x);
        vy.push_back(y);
    }
   map <ll, ll> cx;
   map <ll, ll> cy;
   map <pair<ll, ll>, ll> cpt;
   ll ans = 0;
   for (int i = 0; i < t; i++)
   {
    ans += cx[vx[i]] + cy[vy[i]] - cpt[{vx[i], vy[i]}];
    cx[vx[i]]++;
    cy[vy[i]]++;
    cpt[{vx[i], vy[i]}]++;
   }
  cout << ans;
  return 0;
}


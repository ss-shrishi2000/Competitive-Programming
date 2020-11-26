#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll p,q;

ll solve(ll d)
{
    ll s=p;
    while(s%q==0)s/=d;
    return s;
}
ll div(ll n)
{
    ll ans=solve(n);
    for(ll i=2;i*i<=n ;++i)
    {
        if(n%i==0)
        {
            ans=max({ans,solve(i),solve(n/i)});
        }
    }
    return ans;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        cin>>p>>q;
        if(p%q)
            cout<<p<<endl;
        else
           cout<<div(q)<<endl;
    }
    return 0;
}

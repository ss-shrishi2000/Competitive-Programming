#include<bits/stdc++.h>
#define fast  ios_base::sync_with_stdio(false);cin.tie(0)
#define ff first
#define ss second
#define fo(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define lli long long int
#define setbits(x) __builtin_popcountll(x)
#define inf 1e18
#define sfp(x,y) fixed<<setprecision(x)<<y
#define mod 1000000007
using namespace std;
int main()
{
    fast;
    int n;cin>>n;
    priority_queue<int,vector<int>,greater<int>> q1,q2;
    lli x;
    fo(i,n)
    {
        cin>>x;
        lli sq=sqrt(x);
        if(sq*sq==x)
        {
            if(x==0)q1.push(2);
            else q1.push(1);
        }
        else {
            q2.push(min((sq+1)*(sq+1)-x,x-(sq*sq)));
        }
    }
    lli ans=0;
    while(q1.size()>n/2)
    {
        ans+=q1.top();q1.pop();
    }
    while(q2.size()>n/2)
    {
        ans+=q2.top();q2.pop();
    }
    cout<<ans;
    return 0;
}

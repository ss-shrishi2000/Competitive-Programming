#include<bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(false);cin.tie(0)
#define ff first
#define ss second
#define fo2(i,n) for(int i=1;i<=n;i++)
#define fo(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define lli long long int
#define setbits(x) __builtin_popcountll(x)
#define inf 1e18
#define sfp(x,y) fixed<<setprecision(x)<<y
#define mod 1000000007
int check(int d)
{
    int sum=0;
    while(d>0)
    {
        sum+=d%10;
        d/=10;
    }
    return sum;
}
int main()
{
    fast;
    int a,b,c;cin>>a>>b>>c;
    set<int> s;
    fo2(i,81)
    {
        lli p=pow(i,a);
        lli x=b*p+c;
        if(x>1e9)continue;
        else {
            int m=x;
            if(check(x)==i)s.insert(m);
        }
    }
    cout<<s.size()<<endl;
    for(auto it=s.begin();it!=s.end();it++)cout<<*it<<" ";
    return 0;
}

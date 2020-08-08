#include<bits/stdc++.h>
using namespace std;
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
int main()
{
    int n;cin>>n;
    lli a,b,m=500000000000;
    fo(i,n)
    {
        cin>>a>>b;
        if(max(a,b)<=m)m=max(a,b);
        else if(min(a,b)<=m)m=min(a,b);
        else {cout<<"NO";return 0;}
    }
    cout<<"YES";
}

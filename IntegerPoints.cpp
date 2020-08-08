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
    fast;
    int t;cin>>t;
    fo(i,t)
    {
        lli n,m,x,y,e1=0,e2=0,o1=0,o2=0;
        cin>>n;
        fo(i,n)
        {
            cin>>x;
            if(x%2==0)e1++;
            else o1++;
        }
        cin>>m;
        fo(i,m)
        {
            cin>>y;
            if(y%2==0)e2++;
            else o2++;
        }
        lli p=e1*e2+o1*o2;
        cout<<p<<endl;
    }
    return 0;
}

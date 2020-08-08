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
#define mod 1000000007
int main()
{
    int n;
    double v;
    cin>>n>>v;
    double a[n],b[n],s=0;
    double m=1000000;
    fo(i,n){cin>>a[i];s+=a[i];}
    fo(i,n)cin>>b[i];
    fo(i,n)
    {
        m=min(m,double(b[i]/a[i]));
    }
    double p=v/s;
    cout<<fixed<<setprecision(4);
    cout<<min(m*s,v);
}

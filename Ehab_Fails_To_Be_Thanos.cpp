#include<bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(false);cin.tie(0)
#define ff first
#define ss second
#define fo(i,n) for(int i=0;i<n;i++)
#define fo2(i,k,n) for(int i=k;i<n;i++)
#define pb push_back
#define lli long long int
#define setbits(x) __builtin_popcountll(x)
#define inf 1e18
#define sfp(x,y) fixed<<setprecision(x)<<y
#define mod 1000000007
int main()
{
    fast;
    lli s1=0,s2=0;
    int n;cin>>n;
    int a[2*n];
    fo(i,2*n)cin>>a[i];
    sort(a,a+2*n);
    fo(i,n)s1+=a[i];
    fo2(i,n,2*n)s2+=a[i];
    if(s1==s2)cout<<-1;
    else {
        fo(i,2*n)cout<<a[i]<<" ";
    }
    return 0;
}

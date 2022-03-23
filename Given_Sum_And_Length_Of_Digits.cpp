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
    int n,m;cin>>n>>m;
    if(m>9*n){cout<<-1<<" "<<-1;return 0;}
    if(m==0 && (n==1)){cout<<0<<" "<<0;return 0;}
    if(m==0 && (n>1)){cout<<-1<<" "<<-1;return 0;}
    string a,b;
    for(int i=0;i<n;i++)
    {
        a+=min(9,m)+'0';
        m-=min(9,m);
    }
    b=a;
    reverse(a.begin(),a.end());
    int i=0;
    while(a[i]=='0')i++;
    a[0]++;a[i]--;
    cout<<a<<" "<<b;
    return 0;
}

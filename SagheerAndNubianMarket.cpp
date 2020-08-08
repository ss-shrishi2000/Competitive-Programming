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
const int p=1000000;
int n,s;
lli a[p],b[p];
lli calc(lli k)
{
    fo(i,n)b[i]=a[i]+(i+1)*k;
    sort(b,b+n);
    lli ans=0;
    fo(i,k)
    {
        ans+=b[i];
    }
    return ans;
}
int main()
{
    cin>>n>>s;
    for(int i=0;i<n;i++)cin>>a[i];
    lli l=0,h=n+1;
    while(l<h-1)
    {
        int mid=(l+h)/2;
        if(calc(mid)<=s)
        {
            l=mid;
        }
        else h=mid;
    }
    cout<<l<<" "<<calc(l)<<endl;
    return 0;
}

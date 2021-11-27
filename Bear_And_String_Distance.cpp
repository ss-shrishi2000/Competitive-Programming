#include<bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(false)
#define ff first
#define ss second
#define fo(i,n) for(int i=1;i<=n;i++)
#define pb push_back
#define lli long long int
#define setbits(x) __builtin_popcountll(x)
#define inf 1e18
#define sfp(x,y) fixed<<setprecision(x)<<y
#define mod 1000000007
int main()
{
    int n,k;cin>>n>>k;
    string s;cin>>s;
    for(int i=0;i<n;i++)
    {
        char bl=s[i];
        int bd=0;
        for(char p='a';p<='z';p++)
        {
            int d=abs(p-s[i]);
            if(d<=k && (d>bd))
            {
                bd=d;
                bl=p;
            }
        }
        k-=bd;
        s[i]=bl;
    }
    if(k>0)cout<<"-1";
    else
    cout<<s;
}

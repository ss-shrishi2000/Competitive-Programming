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
    fast;
    int n,a,b,x,i;
    cin>>n;
    string s;
    map<int,int>pre,suf;
    lli ans=0;
    fo(i,n)
    {
        cin>>s;
        a=0,b=0;
        for(char c:s)
        {
            if(c=='(')a++;
            else{
                if(a)a--;
                else b++;
            }
        }
        if(a==0 && pre.count(b))ans+=pre[b];
        if(b==0 && suf.count(a))ans+=suf[a];
        if(a==0 && b==0)ans++;
        if(a==0)suf[b]++;
        if(b==0)pre[a]++;
    }
    cout<<ans;
    return 0;
}


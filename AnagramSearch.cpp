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
    string a,b;cin>>a>>b;
    int c[500]{0},d[500]{0};
    int n=a.size(),m=b.size();
    fo(i,m)
    {
        d[b[i]-'a']++;
    }
    int ans=0;
    fo(i,n){
        if(a[i]!='?')c[a[i]-'a']++;
        if(i>=m && (a[i-m]!='?'))c[a[i-m]-'a']--;
        if(i+1>=m)
        {
            bool f=true;
            fo(j,26)
            {
                if(c[j]>d[j])f=false;
            }
            if(f==true)ans++;
        }
    }
    cout<<ans;
    return 0;
}

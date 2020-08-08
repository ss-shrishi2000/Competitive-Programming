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
    int n;cin>>n;
    char s[3000];cin>>s+1;
    fo(i,n)
    {
        for(int j=1;j+4*i<=n;j++)
        {
            if(s[j]=='*'){
            if(s[j]=='*' && s[i+j]=='*' && (s[j+2*i]=='*')&&(s[j+3*i]=='*') && (s[j+4*i]=='*')){cout<<"yes";return 0;}
            }
        }
    }
    cout<<"no";
    return 0;
}

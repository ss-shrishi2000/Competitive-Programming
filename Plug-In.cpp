#include<bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(false);cin.tie(0)
#define ff first
#define ss second
#define fo(i,n) for(int i=n-1;i>=0;i--)
#define pb push_back
#define lli long long int
#define setbits(x) __builtin_popcountll(x)
#define inf 1e18
#define sfp(x,y) fixed<<setprecision(x)<<y
#define mod 1000000007
int main()
{
    fast;
    string s;cin>>s;
    fo(i,s.size()-1)
    {
        if(s[i]==s[i+1])s.erase(i,2);
    }
    cout<<s;
    return 0;
}

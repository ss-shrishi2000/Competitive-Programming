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
    //using stack
    string s;cin>>s;
    stack<char> c;
    fo(i,s.size()){
    if(c.empty()!=1 && c.top()==s[i])c.pop();
    else c.push(s[i]);
    }
    string r="";
    while (c.empty()!=1)
    {
        r+=c.top();c.pop();
    }
    reverse(r.begin(),r.end());
    cout<<r;
    return 0;
}


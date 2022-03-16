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
    set<int> a,b,c;
    string s;int n,m;
    cin>>n>>s;
    fo(i,n)
        if(s[i]!='*')
            a.insert(s[i]);
    
    for(char ch='a';ch<='z';ch++)
    {
        if(a.find(ch)==a.end())
            b.insert(ch);
    }
    string d;
    bool f=true;
    cin>>m;
    fo(i,m)
    {
        cin>>d;
        f=true;
        fo(j,n)
        {
            if(s[j]!='*' && (s[j]!=d[j]))
            { 
                f=false;
                break;
            }
            if(s[j]=='*' && (a.find(d[j])!=a.end()))
            {
                f=false;
                break;
            }
        }
        if(f==true)
        {
            c.clear();
            fo(j,n)
            {
            if(b.find(d[j])!=b.end())
            {
                c.insert(d[j]);
            }
            }
            b=c;
        }
    }
    cout<<b.size();
    return 0;
}

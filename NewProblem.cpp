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
int main()
{
    int n;cin>>n;
    set<char> a;
    string s[n],b="";
    fo(i,n)
    {
        cin>>s[i];
        fo(j,s[i].size())a.insert(s[i][j]);
        b+=s[i]+" ";
    }
    if(a.size()!=26)
    {
        for(char c='a';c<='z';c++)
        {
            if(a.find(c)==a.end()){cout<<c;return 0;}
        }
    }
    else{
            fo(i,26)
            {
                fo(j,26)
                {
                    string t="";
                    t+=char(i+'a');
                    t+=char(j+'a');
                    if(b.find(t)==-1){cout<<t;return 0;}
                }
            }
    }
    return 0;
}

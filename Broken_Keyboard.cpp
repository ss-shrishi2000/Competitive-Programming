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
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        set<char> p;
        if(s.size()==1){cout<<s[0]<<endl;continue;}
        fo(i,s.size())
        {
            if(s[i]==s[i+1])i++;
            else{
                p.insert(s[i]);
            }
        }
        int l=s.size();
        if(s[l-1]!=s[l-2])p.insert(s[l-1]);
        for(auto it=p.begin();it!=p.end();it++)cout<<*it;
        cout<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(false)
#define ff first
#define ss second
#define fo(i,n) for(long long int i=0;i<n;i++)
#define pb push_back
#define lli long long int
#define setbits(x) __builtin_popcountll(x)
#define inf 1e18
#define sfp(x,y) fixed<<setprecision(x)<<y
#define mod 1000000007
int main()
{
    int x;cin>>x;
    fo(i,x)
    {
        string s,ans="";cin>>s;
        vector<string>p;
        string t="";
        int h=0,k=-1;
        fo(i,s.size())
        {
            if(s[i]!=':')t+=s[i];
            else{
                if(i==1 && s[i-1]==':')continue;
                p.pb(t);
                t="";
            }
        }
        if(t.empty()==false)p.pb(t);
        string w="0000:";
        fo(i,p.size())
        {
            if(p[i].empty())
            {
                for(int j=p.size();j<9;j++)ans+=w;
                continue;
            }
            while(p[i].size()<4)
            {
                p[i]="0"+p[i];
            }
            ans+=p[i]+":";
        }
        ans.resize(ans.size()-1);
        cout<<ans<<endl;
    }
}

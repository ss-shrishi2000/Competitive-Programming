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
    fast;
    int n;cin>>n;
    string s;
    map<string,string> mp1;
    map<string,int>mp2;
    set<string> p;
    fo(i,n)
    {
        cin>>s;p.clear();
        fo(i,s.size())
        {
           for(int j=1;i+j<=s.size();j++)
           {
               p.insert(s.substr(i,j));
           }
        }
        for(auto it=p.begin();it!=p.end();it++)
        {
            if(!mp2.count(*it))
            {
                mp2[*it]=1;mp1[*it]=s;
            }
            else mp2[*it]++;
        }
    }
    int q; cin>>q;
	while (q--){
    cin>>s;
    if (mp2.count(s)) cout<<mp2[s]<<' '<<mp1[s]<<endl;
    else cout<<"0 -"<<endl;
	}
	return 0;
}

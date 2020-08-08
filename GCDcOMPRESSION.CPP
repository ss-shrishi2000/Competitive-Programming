#include<bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(false);cin.tie(0)
#define ff first
#define ss second
#define pb push_back
#define lli long long int
#define setbits(x) __builtin_popcountll(x)
#define inf 1e18
#define sfp(x,y) fixed<<setprecision(x)<<y
#define mod 1000000007
int main()
{
    fast;
    int t;cin>>t;
    while(t--)
    {
        int n,x;cin>>n;
        vector<int> odd,even;
        for(int i=0;i<2*n;i++)
        {
            cin>>x;
            if(x%2==0)even.push_back(i+1);
            else odd.push_back(i+1);
        }
        vector<pair<int,int>> p;
        for(int i=0;i+1<odd.size();i+=2)
        {
            p.push_back({odd[i],odd[i+1]});
        }
        for(int i=0;i+1<even.size();i+=2)
        {
            p.push_back({even[i],even[i+1]});
        }
        for(int i=0;i<n-1;i++)
        {
            cout<<p[i].first<<" "<<p[i].second<<endl;
        }
        cout<<endl;
    }
    return 0;
}

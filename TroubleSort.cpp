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
    fast;cin.tie(0);
    int t;cin>>t;
    fo(i,t)
    {
        int n;cin>>n;
        pair<int,int> p[n];
        int a[n],b,cnt[2]{0};
        fo(i,n){cin>>p[i].first;a[i]=p[i].first;}
        fo(i,n){cin>>p[i].second;cnt[p[i].second]++;}
        sort(a,a+n);
        bool f=true;
        if(cnt[1]==0|| (cnt[0]==0))
        {
            fo(i,n)
            {
                if(p[i].first!=a[i]){f=false;break;}
            }
            if(f==false)cout<<"No"<<endl;
            else cout<<"Yes"<<endl;
        }
        else cout<<"Yes"<<endl;
    }
    return 0;
}

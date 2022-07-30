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
    fast;
    int n,k;cin>>n>>k;
    unordered_set<int> s;
    int a[n];
    fo(i,n)cin>>a[i];
    sort(a,a+n);
    int low,high;
    fo(i,n)
    {
        if(a[i]%k!=0)s.insert(a[i]);
        else{
            if(s.count(a[i]/k)==1)continue;
            else{
                s.insert(a[i]);
            }
        }
    }
    cout<<s.size();
    return 0;
}

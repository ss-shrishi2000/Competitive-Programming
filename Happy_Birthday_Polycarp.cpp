#include<bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(false);cin.tie(0)
#define ff first
#define ss second
#define fo(i,n) for(int i=1;i<=n;i++)
#define fo2(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define lli long long int
#define setbits(x) __builtin_popcountll(x)
#define inf 1e18
#define sfp(x,y) fixed<<setprecision(x)<<y
#define mod 1000000007
int main()
{
    int t;cin>>t;
    fo(i,t)
    {
        int n;cin>>n;
        int c=0,r=0;
        fo(j,9)
        {
            r=r*10+1;
            fo(k,9)
            {
                if(r*k<=n)c++;
            }
        }
        cout<<c<<endl;
    }
}

#include<bits/stdc++.h>
#define fast  ios_base::sync_with_stdio(false)
#define ff first
#define ss second
#define fo(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define lli long long int
#define setbits(x) __builtin_popcountll(x)
#define inf 1e18
#define sfp(x) fixed<<setprecision(x)
#define mod 1000000007
using namespace std;
int main()
{
    int t;cin>>t;
    fo(i,t)
    {
        int a[7],k,c=0;
        cin>>k;
        fo(i,7){cin>>a[i];if(a[i]==1)c++;}
        lli p=(k+c)/c-1;
        cout<<p*7+1<<endl;
    }
}

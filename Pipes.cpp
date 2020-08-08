#include<bits/stdc++.h>
#define fast  ios_base::sync_with_stdio(false)
#define ff first
#define ss second
#define fo(i,n) for(i=0;i<n;i++)
#define fo2(i,n) for(int i=1;i<=n;i++)
#define pb push_back
#define lli long long int
#define setbits(x) __builtin_popcountll(x)
#define inf 1e18
#define sfp(x,y) fixed<<setprecision(x)<<y
#define mod 1000000007
using namespace std;
const int r=1e5;
int main()
{
    fast;
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s[2];cin>>s[0]>>s[1];
        int i=0,j;
        fo(j,n)
        {
            if(s[i][j]>='3'){
            i=1-i;
            if(s[i][j]<'3')break;
            }
        }
        if(i==1 && (j==n))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

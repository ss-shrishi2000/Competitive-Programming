#include<bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(false);cin.tie(0)
#define ff first
#define ss second
#define fo(i,n) for(int i=1;i<=n;i++)
#define pb push_back
#define lli long long int
#define setbits(x) __builtin_popcountll(x)
#define inf 1e18
#define sfp(x,y) fixed<<setprecision(x)<<y
#define mod 1000000007
const int p= 100005;
int main()
{
    char a[p];
    int n;
    cin>>a;
    n = strlen(a);
    int dp[p][3];
    memset(dp,0,sizeof(dp));
    fo(i,n)
    {
        dp[i][0]=dp[i-1][0];
        dp[i][1]=dp[i-1][1];
        dp[i][2]=dp[i-1][2];
        dp[i][a[i-1]-'x']++;
    }
    int m; cin>>m;
    while(m--) {
        int l,r; cin>>l>>r;
        if(r-l<2) {
            cout << "YES" << endl;continue;
        }
        int c[3];
        c[0]=dp[r][0]-dp[l-1][0];
        c[1]=dp[r][1]-dp[l-1][1];
        c[2]=dp[r][2]-dp[l-1][2];
        if(*max_element(c,c+3)-(*min_element(c,c+3))>1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
#define pp pair<ll,ll>
#define ll long long
#define mod 1000000007
#define trace(x) cerr<<#x<<": "<<x<<" "<<endl
#define trace2(x, y) cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z) cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define sa(a,n) for(int i =0 ; i<n ; i++) cin>>a[i]
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define scan() int n; cin>>n ; int a[n]; for(int i = 0 ; i<n ; i++) cin>>a[i]
#define print(a,n) for(int i = 0 ; i < n ; i++) cout<<a[i]<<' '
using namespace std;
ll max(ll x, ll y)
{
return x>y ? x : y;
}
ll min(ll x, ll y)
{
return x<y ? x : y;
}
ll dp[1001][1001][2];char c;string s;
ll _(ll i,ll j,ll k)
{
if(i>j)return 0;
if(dp[i][j][k]!=-1)return dp[i][j][k];
if(i==j)
{
if(s[i]==c){dp[i][j][0]=1;dp[i][j][1]=1;}
else {dp[i][j][0]=1;dp[i][j][1]=0;}
return dp[i][j][k];
}
if(s[i]==s[j])
{
if(j==i+1)
{
if(s[i]==c or s[j]==c){dp[i][j][0]=2;dp[i][j][1]=2;}
else {dp[i][j][0]=2;dp[i][j][1]=0;}
return dp[i][j][k];
}
else
{
if(s[i]==c or s[j]==c)
{
ll x=_(i+1,j-1,0)+2;
dp[i][j][0]=dp[i][j][1]=x;
return dp[i][j][k];
}
else
{
ll x=_(i+1,j-1,0)+2;ll y=_(i+1,j-1,1);
if(y)y+=2;
dp[i][j][0]=x;
dp[i][j][1]=y;
return dp[i][j][k];
}
}
}
else
{
dp[i][j][0]=max(_(i+1,j,0),_(i,j-1,0));
dp[i][j][1]=max(_(i+1,j,1),_(i,j-1,1));
return dp[i][j][k];
}
}
void solve()
{
memset(dp, -1, sizeof(dp));
s.clear();cin >> c >> s;
cout << _(0,s.size()-1,1) << "\n";
}
int32_t main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll t;cin >> t;
while(t--)
{
solve();
}
}

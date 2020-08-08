#include<bits/stdc++.h>
using namespace std;
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
int main()
{
    fast;
  int t;cin>>t;
   while(t--){
   int n,j;cin>>n;
   j=n-1;
   int a[n];
   fo(i,n)cin>>a[i];
   fo(i,n)
   {
    if(a[i]>1)
    {
        j=i;break;
    }
   }
   if(j%2==0) cout<<"First\n";
   else cout<<"Second\n";
  }
}

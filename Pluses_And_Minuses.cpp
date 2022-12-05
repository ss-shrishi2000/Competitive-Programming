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
    int test;cin>>test;
    fo(i,test)
    {
        string s;cin>>s;
        int x=s.size(),n=-1;
        lli cnt=0,ans=x;
        fo(i,x)
        {
            if(s[i]=='+')++cnt;
            else --cnt;
            if(cnt==n){
                ans+=i+1;
                n--;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

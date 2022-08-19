#include<bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(false)
#define ff first
#define ss second
#define lli long long int
#define fo(i,n) for(lli i=sqrt(n);i>=1;i--)
#define pb push_back
#define setbits(x) __builtin_popcountll(x)
#define inf 1e18
#define sfp(x,y) fixed<<setprecision(x)<<y
#define mod 1000000007
int main()
{
    fast;cin.tie(0);
    int t;cin>>t;
    while(t--)
    {
        lli n,a,b,m=0;cin>>n;
        fo(i,n)
        {
            if(i==sqrt(n))continue;
            if(n%i==0)
            {
                a=i;
                b=n/a;
                if((b-a)%2==1)continue;
                m=abs(b-a)/2;break;
            }
        }
        if(m==0)cout<<"-1"<<endl;
        else cout<<m*m<<endl;
    }
    return 0;
}

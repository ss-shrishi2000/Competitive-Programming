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
    long long t0,t1,t2,y1,y2,c1,c2;
    double t,mn=10e10;
    cin>>t1>>t2>>y1>>y2>>t0;
    while((y1>=0)&&(y2>=0))
    {
        if(y1+y2==0)
            break;
        t=(t1*y1+t2*y2)/double(y1+y2);
        if(t<t0)
        {
        y1--;
        continue;
        }
        if (t<mn)
        {
        mn=t;c1=y1;c2=y2;
        }
        y2--;
    }
    cout<<c1<<" "<<c2;
    return 0;
}

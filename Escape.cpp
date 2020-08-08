#include<bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(false)
#define ff first
#define ss second
#define fo3(i,n) for(int i=0;i<n;i++)
#define fo2(i,a,n) for(int i=a+1;i<n;i+=2)
#define fo(i,n) for(int i=n-1;i>=0;i--)
#define pb push_back
#define lli long long int
#define setbits(x) __builtin_popcountll(x)
#define inf 1e18
#define sfp(x,y) fixed<<setprecision(x)<<y
#define mod 1000000007
int main()
{
    int vp,vd,t,f,c;
    cin>>vp>>vd>>t>>f>>c;
    float dis=vp*t;
    float k=vd-vp;
    if(k<=0)cout<<0;
    else {
        int ans=0;
        float y=dis/k;
        while((dis+=dis/k*vp)<c)
        {
            ans++;
            dis+=vp*(dis/vd+f);
        }
    cout<<ans;
    }
}

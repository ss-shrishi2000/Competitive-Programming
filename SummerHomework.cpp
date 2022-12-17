#include<bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(false);
#define ff first
#define ss second
#define fo(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define lli long long int
#define setbits(x) __builtin_popcountll(x)
#define inf 1e18
#define sfp(x,y) fixed<<setprecision(x)<<y
#define mod 1000000000

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],t,l,r;
    lli func[n];
    func[0]=1,func[1]=1;
    for(int i=2;i<n;i++)
    {
        func[i]=(func[i-1]+func[i-2])%mod;
    }
    fo(i,n)cin>>a[i];
    fo(i,m){
        cin>>t;
        if(t==1)
        {
            int x,v;cin>>x>>v;
            x--;
            a[x]=v;
        }
        else if(t==2)
        {
            cin>>l>>r;
            lli s=0;
            int p=0;
            l--;r--;
            for(int i=l;i<=r;i++,p++)
            {
                s+=(func[p]*a[i])%mod;
            }
            cout<<s%mod<<endl;
        }
        else{
            int d;
            cin>>l>>r>>d;
            long long q=0;
            l--;r--;
           for(int i=l;i<=r;i++)a[i]=a[i]+d;
        }
    }
}

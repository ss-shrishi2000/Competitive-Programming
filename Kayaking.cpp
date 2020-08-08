#include<bits/stdc++.h>
#define fast  ios_base::sync_with_stdio(false)
#define ff first
#define ss second
#define fo(i,n) for(int i=0;i<n;i+=2)
#define fo2(i,a,n) for(int i=a+1;i<n;i+=2)
#define fo3(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define lli long long int
#define setbits(x) __builtin_popcountll(x)
#define inf 1e18
#define sfp(x,y) fixed<<setprecision(x)<<y
#define mod 1000000007
using namespace std;
int main()
{
    int n;cin>>n;
    int x=2*n;
    int a[x];
    fo3(i,x)cin>>a[i];
    sort(a,a+x);
    lli m=1e8;
    fo(i,x)
    {
        fo2(j,i,x)
        {
            lli s=0;
            fo3(k,x)
            {
                if(k!=i && (k!=j)){s+=a[k+1]-a[k];k++;}
            }
            m=min(s,m);
        }
    }
    cout<<m;
    return 0;
}

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
    int n;cin>>n;
    int a[n];
    fo(i,n)cin>>a[i];
    sort(a,a+n);
    int l=0,r=n-1;
    int mid,q;cin>>q;
    while(q--)
    {
        int m;cin>>m;
        if(m<a[0])cout<<"0"<<endl;
        else if(m>=a[n-1])cout<<n<<endl;
        else{
            l=0;r=n-1;
            while(l<=r)
            {
                mid=(l+r)/2;
                if(a[mid]<=m)l=mid+1;
                else r=mid-1;
            }
            cout<<r+1<<endl;
        }
    }
    return 0;
}

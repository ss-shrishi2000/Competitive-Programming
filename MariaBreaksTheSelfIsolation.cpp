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
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n];
        fo(i,n)cin>>a[i];
        sort(a,a+n);
        bool flag=false;
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]<=i+1)
            {
            cout<<i+2<<endl;
            flag=true;
            break;
            }
        }
        if(flag==false)cout<<"1"<<endl;
    }
}

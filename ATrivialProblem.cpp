#include<bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(false)
#define ff first
#define ss second
#define fo(i,p) for(int i=p;;i+=5)
#define pb push_back
#define lli long long int
#define setbits(x) __builtin_popcountll(x)
#define inf 1e18
#define sfp(x,y) fixed<<setprecision(x)<<y
#define mod 1000000007
int main()
{
    int m;cin>>m;
    lli p,n;p=0;
    n=m*4;
    n=n-(n%5)+5;
    fo(i,n)
    {
        int k=i,p=0,x=1;
        while(k)
        {
            p+=k/5;k/=5;
        }
        if(p==m){
            cout<<5<<endl<<i<<" "<<i+1<<" "<<i+2<<" "<<i+3<<" "<<i+4;
            return 0;
        }
        else if(p>m){cout<<0;break;}
    }
    return 0;
}

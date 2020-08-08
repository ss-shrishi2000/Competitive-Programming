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
    fast;cin.tie(0);
    int t;cin>>t;
    fo(i,t)
    {
        int n;cin>>n;
        lli moves=0;
        if(n==1){cout<<"FastestFinger"<<endl;continue;}
        else if(n==2)cout<<"Ashishgup"<<endl;
        else if(n%2!=0)
        {
            cout<<"Ashishgup"<<endl;
        }
        else
        {
            int p=n;
            while(p>1 && p%2==0)p/=2;
            if(p==1)cout<<"FastestFinger"<<endl;
            else{
            int i=1;
            while(n!=0 && n%2 == 0){
            moves++;
            n/=2;
            }
            bool flag=false;
		    for(int j=1;j*j<=n;j++)if(n%j == 0 && j!=1 && j!=n)flag=true;
		    if((flag==true)||(moves!=1))cout<<"Ashishgup"<<endl;
		    else cout<<"FastestFinger"<<endl;
            }
        }
    }
}

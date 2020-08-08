#include<bits/stdc++.h>
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
using namespace std;
int main()
{
    int t;cin>>t;
    string a,b="<3",mess;
    fo(i,t)
    {
        cin>>a;
        b+=a;b+="<3";
    }
    cin>>mess;int check=0;
    fo(i,mess.size())
    {
        if(mess[i]==b[check])check++;
    }
    if(check==b.size())cout<<"yes";
    else cout<<"no";
}


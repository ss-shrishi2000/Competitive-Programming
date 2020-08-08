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
    fast;
    string s1,s2;cin>>s1>>s2;
    int f[123]{0},l=s1.size(),l2=s2.size(),n=0;;
    fo(i,l){
        if(s1[i]!='?')f[(int)s1[i]]++;
    }
    fo(i,l)
    {
        if(s1[i]=='?')
        {
            n++;n=n%l2;
            if(f[int(s2[n])]>0){f[(int)s2[n]]--;i--;}
            else s1[i]=s2[n];
        }
    }
    cout<<s1<<endl;
}

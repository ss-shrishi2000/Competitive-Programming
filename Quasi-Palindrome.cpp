#include<bits/stdc++.h>
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
using namespace std;
int main()
{
    string s;
    cin>>s;
    int pos=-1;
    fo(i,s.size())
    {
        if(s[i]=='0')
            continue;
        else{
            pos=i;
            break;
        }
    }
    if(pos!=-1)
    {
        pos++;
        s.erase(pos);
    }
    fo3(i,s.size()/2)
    {
        if(s[i]!=s[s.size()-i-1])
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}

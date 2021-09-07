#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int M=1000000007;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll ans=0,lcm=1;
        if(n==1)
        {
            cout<<2<<endl ;
             continue;
        }

     for (ll i=1;lcm<=n;++i)
     {
        lcm=lcm*i/__gcd(lcm,i);
        if (lcm>n)
            break;
        ans+=n/lcm;
     }
     cout<<(ans+n) % M <<endl;
    }
    return 0;
}

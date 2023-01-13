#include<bits/stdc++.h>
#define lli long long int
using namespace std;
lli calc(lli c, lli m, lli x)
{
    lli mn = min(c, m);
    mn = min(mn, x);

    c -= mn;
    m -= mn;
    x -= mn;

    if(c==0 || m==0)
        return mn;

    if(c > 2*m)
    {
        mn += m;
    }
    else if(m > 2*c)
    {
        mn += c;
    }
    else
    {
        // midway
        mn += (c+m)/3;
    }

    return mn;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        lli c, m, x;
        cin>>c>>m>>x;
        lli ans = 0;
        ans = calc(c, m, x);
        cout<<ans<<endl;
    }
    return 0;
}

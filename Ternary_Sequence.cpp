#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x1, y1, z1, x2, y2, z2;
        cin>>x1>>y1>>z1;
        cin>>x2>>y2>>z2;
        int s = x1+y1+z1;
        //cout<<s<<endl;
        long ans=0, p;

        p = min(z1, y2);
        ans += 2*p, z1-=p, y2-=p;

        p = min(y1, x2);
        y1-=p, x2-=p;

        p = min(z1, x2);
        z1-=p, x2-=p;

        p = min(z1, z2);
        z1-=p, z2-=p;

        p = min(y1, y2);
        y1-=p, y2-=p;

        p = min(x1, y2);
        x1-=p, y2-=p;

        p = min(x1, z2);
        x1-=p, z2-=p;

        p = min(y1, z2);
        ans-= 2*p, y1-=p, z2-=p;

        cout<<ans<<endl;
    }
    return 0;
}

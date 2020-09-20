#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,m;cin>>n>>m;
        int d[n],h[n];
        int maxhit=-1e9;
        for(int i=0;i<n;i++)
        {
            cin>>d[i]>>h[i];
            maxhit=max(maxhit,d[i]-h[i]);
        }
        int ans=1;
        m-=*max_element(d,d+n);
        if(m>0)
        {
            if(maxhit<=0)
            {
                ans=-1;
            }
            else ans+=(m+maxhit-1)/maxhit;
        }
        cout<<ans<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
long long int p[100100],q[100100];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int c1=1,c2=1,a,b,n;
        cin>>n;
        for(int i=1;i<=2*n;i++)
        {
            cin>>a>>b;
            if(a==0)
                p[c1++]=abs(b);
            else
                q[c2++]=abs(a);
        }
        sort(p+1,p+n+1);
        sort(q+1,q+n+1);
        double ans=0;

        for(int i=1;i<=n;i++)
            ans+=sqrt( p[i]*p[i] + q[i]*q[i]);

        cout<<fixed<<setprecision(13);
        cout<<ans<<endl;
    }
    return 0;
}

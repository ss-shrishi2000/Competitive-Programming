#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k;cin>>n>>k;
    long long int a[n+10],pre[n+10];
    double avg=0,ans=0;
    if(n==1)
    {
        cout<<fixed<<setprecision(9);
        double c;cin>>c;
        cout<<c;
        return 0;
    }
    pre[0]=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(i==1)pre[i]=a[i];
        else pre[i]=pre[i-1]+a[i];
        if(i>=k)
        {
            avg+=(pre[i]-pre[i-k]);
        }
    }
    cout<<fixed<<setprecision(9);
    cout<<avg/(n-k+1);
    return 0;
}
